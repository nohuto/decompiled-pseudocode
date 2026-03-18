/*
 * XREFs of IopGetSetSpecificExtension @ 0x14007123C
 * Callers:
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1401F69D0 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopRetrieveTransactionParameters @ 0x140488530 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404A58AC (IopAllocateFoExtensionsOnCreate.c)
 *     IoCopyDeviceObjectHint @ 0x140673FA8 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400718D8 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  SIZE_T v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // r14
  void *v13; // rbx
  PVOID PoolWithTagPriority; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v15);
    v12 = v15[0];
    v13 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNx,
                                v7,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x20206F49u);
      v13 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        return 3221225626LL;
      memset(PoolWithTagPriority, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v12, a2, v13) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        v13 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v13;
    if ( a6 )
      *a6 = v12;
    return 0LL;
  }
  return result;
}
