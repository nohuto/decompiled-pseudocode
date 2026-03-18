/*
 * XREFs of ExpEnumerateCallback @ 0x14015B254
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, __int64 **a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 *v9; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 8);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 8));
  }
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  return v8;
}
