/*
 * XREFs of MiLockAddressSpaceToo @ 0x1400F13C4
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14051135C (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int32 *)(a1 + 872);
  v8 = KeAbPreAcquire(a1 + 872, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64(v7, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx((ULONG_PTR)v7);
    LOBYTE(result) = 0;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(result) = 1;
  }
  result = (unsigned __int8)result;
  if ( (_BYTE)result )
  {
    BYTE4(CurrentThread[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad((__int64)CurrentThread, a2);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v10, v11);
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire(a2 + 40, 0LL, 0LL, v12);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(a2 + 40, v13, a2 + 40);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    BYTE4(CurrentThread[1].Queue) |= 0x80u;
    result = (unsigned int)++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery(v14);
    }
  }
  return result;
}
