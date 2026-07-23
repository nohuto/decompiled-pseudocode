/*
 * XREFs of ExpEnumerateCallback @ 0x1400B0C40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, __int64 **a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // r8
  __int64 v8; // rdi
  __int64 *v9; // rbx

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = *a2;
  if ( *a2 )
  {
    v7 = *a2;
  }
  else
  {
    v6 = (__int64 *)(a1 + 16);
    v7 = 0LL;
  }
  v8 = 0LL;
  v9 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( v6 == v9 )
      break;
    if ( !*((_BYTE *)v6 + 44) )
    {
      ++*((_DWORD *)v6 + 10);
      v8 = v6[3];
      *a2 = v6;
      break;
    }
  }
  if ( v7 )
  {
    --*((_DWORD *)v7 + 10);
    if ( *((_BYTE *)v7 + 44) )
    {
      if ( !*((_DWORD *)v7 + 10) )
        KeSetEvent(&ExpCallbackEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(v2, v5);
  return v8;
}
