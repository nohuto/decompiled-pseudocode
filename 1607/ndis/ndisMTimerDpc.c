/*
 * XREFs of ndisMTimerDpc @ 0x1C0060810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 *     NdisMSetTimer @ 0x1C0060050 (NdisMSetTimer.c)
 */

void __fastcall ndisMTimerDpc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 Clock; // r15
  char v5; // r14
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *j; // rcx
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int i; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 144);
  Clock = 0LL;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v5 = 1;
    ndisTraceDpcStart(v2, 2u);
    Clock = WmiGetClock(0LL, 0LL, v6);
  }
  else
  {
    v5 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
  CurrentThread = KeGetCurrentThread();
  for ( *(_DWORD *)(v2 + 1856) = 655728; ; *(_DWORD *)(v2 + 1856) = 655732 )
  {
    *(_QWORD *)(v2 + 520) = CurrentThread;
    if ( !*(_BYTE *)(v2 + 89) )
      break;
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
    for ( i = 0; i < 0x32; ++i )
      ;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
    CurrentThread = KeGetCurrentThread();
  }
  *(_BYTE *)(v2 + 89) = 1;
  *(_DWORD *)(v2 + 1860) = 655732;
  *(_QWORD *)(v2 + 1864) = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 3816) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1880));
    for ( j = (_QWORD *)(v2 + 560); *j; j = (_QWORD *)(*j + 152LL) )
    {
      if ( *j == a2 )
      {
        if ( !*(_DWORD *)(a2 + 60) )
          *j = *(_QWORD *)(a2 + 152);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 1880));
  }
  if ( (*(_DWORD *)(v2 + 120) & 2) != 0 )
  {
    NdisMSetTimer(a2, 10);
  }
  else if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
  {
    v9 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128);
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
    v9(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 1856) = 655796;
    ndisMProcessDeferred(v2);
  }
  *(_BYTE *)(v2 + 89) = 0;
  *(_DWORD *)(v2 + 1860) = 0;
  *(_QWORD *)(v2 + 1864) = 0LL;
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
  if ( v5 )
  {
    v11 = WmiGetClock(0LL, 0LL, v10);
    ndisTraceDpcEnd(v2, 2u, v11 - Clock);
  }
}
