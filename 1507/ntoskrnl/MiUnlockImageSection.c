/*
 * XREFs of MiUnlockImageSection @ 0x140010874
 * Callers:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x1400D2C68 (ExpUnblockPushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(volatile signed __int32 *a1, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rcx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v9 = (unsigned int)_InterlockedDecrement(a1);
  result = (unsigned int)(v9 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, a2 << 25 >> 16, a4, (int)v9);
  if ( (_DWORD)v9 == 1 )
  {
    result = MiUnlockCodePage(a2, a3);
    _InterlockedAdd(a1, 0xFFFFFFFF);
    _InterlockedOr(v11, 0);
    if ( qword_14034EA68 )
      result = ExpUnblockPushLock(&qword_14034EA68, 0LL, 0LL);
  }
  if ( !CurrentIrql )
  {
    result = (unsigned int)++CurrentThread->KernelApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result && !CurrentThread->SpecialApcDisable )
        return KiCheckForKernelApcDelivery(v9, a2, v6);
    }
  }
  return result;
}
