/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140203B50
 * Callers:
 *     KeUnmaskInterrupt @ 0x14014BD7C (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1)
{
  unsigned int v1; // esi
  __int64 v2; // r14
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  int v8; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = 0;
  v2 = 48LL * (unsigned int)(a1 - 256);
  v3 = (volatile signed __int32 *)(v2 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  if ( !*(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v1 = 296;
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(v2 + KiGlobalSecondaryIDT + 40);
  if ( !v5 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
LABEL_14:
    __writecr8(CurrentIrql);
    return v1;
  }
  v6 = (__int64 *)(v5 + 8);
  v7 = (__int64 *)(v5 + 8);
  while ( 1 )
  {
    v8 = *((_DWORD *)v7 + 24);
    if ( (v8 & 1) == 0 )
      break;
    v7 = (__int64 *)*v7;
    if ( v7 == v6 )
      goto LABEL_20;
  }
  *(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_20:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  if ( (v8 & 1) == 0 )
    return (unsigned int)off_140321938();
  return v1;
}
