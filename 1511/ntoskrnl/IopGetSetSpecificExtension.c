/*
 * XREFs of IopGetSetSpecificExtension @ 0x1400CC2E8
 * Callers:
 *     IopSetLockOperationProcess @ 0x1400CC17C (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x1400DE090 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1401BB694 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048F628 (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x140491000 (IopRetrieveTransactionParameters.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x1405F9D1C (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140074A60 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     sub_1400CC298 @ 0x1400CC298 (sub_1400CC298.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400CC3B4 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  PVOID v15; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      v15 = sub_1400CC298(v12, v7);
      v14 = v15;
      if ( !v15 )
        return 3221225626LL;
      memset(v15, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v14;
    if ( a6 )
      *a6 = v13;
    return 0LL;
  }
  return result;
}
