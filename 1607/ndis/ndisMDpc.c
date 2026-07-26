/*
 * XREFs of ndisMDpc @ 0x1C0060374
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0060140 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00601F0 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(_QWORD); // r15
  __int64 Clock; // r14
  char v6; // bp
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ecx
  PKINTERRUPT *v10; // rcx
  KSYNCHRONIZE_ROUTINE *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int i; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 104);
  v4 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  Clock = 0LL;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL, v7);
  }
  else
  {
    v6 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 656721;
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    while ( *(_BYTE *)(v2 + 89) )
    {
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
      for ( i = 0; i < 0x32; ++i )
        ;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
      *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 1856) = 656735;
    }
    *(_BYTE *)(v2 + 89) = 1;
    *(_DWORD *)(v2 + 1860) = 656735;
    CurrentThread = KeGetCurrentThread();
    ++*(_DWORD *)(v2 + 2724);
    v9 = *(_DWORD *)(v2 + 2700);
    *(_QWORD *)(v2 + 1864) = CurrentThread;
    *(_DWORD *)(v2 + 2696) = 0;
    *(_DWORD *)(v2 + 2704) = 0;
    if ( *(_DWORD *)(v2 + 2720) < v9 )
      *(_DWORD *)(v2 + 2720) = v9;
    *(_DWORD *)(v2 + 2700) = 0;
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
    v4(*(_QWORD *)(v2 + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 1856) = 656757;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    v10 = *(PKINTERRUPT **)(v2 + 112);
    if ( v10 )
    {
      v11 = *(KSYNCHRONIZE_ROUTINE **)(v2 + 616);
      if ( v11 )
        KeSynchronizeExecution(*v10, v11, *(PVOID *)(v2 + 24));
    }
    ndisMProcessDeferred(v2);
    *(_BYTE *)(v2 + 89) = 0;
    *(_DWORD *)(v2 + 1860) = 0;
    *(_QWORD *)(v2 + 1864) = 0LL;
  }
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
  if ( v6 )
  {
    v13 = WmiGetClock(0LL, 0LL, v12);
    ndisTraceDpcEnd(v2, 1u, v13 - Clock);
  }
}
