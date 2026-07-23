/*
 * XREFs of IopGetSetSpecificExtension @ 0x14007AF10
 * Callers:
 *     IopSetLockOperationProcess @ 0x140078558 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1401C932C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403EE178 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046A30C (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x1404A5D00 (IopRetrieveTransactionParameters.c)
 *     IoCopyDeviceObjectHint @ 0x140623748 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14007B640 (IopSetTypeSpecificFoExtension.c)
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  char v6; // si
  size_t v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  void *Pool; // rax
  __int64 v16; // r9
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  if ( !(_BYTE)a4 || (result = IopAllocateFileObjectExtension(a1, 0LL, a3, a4), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v17, a4);
    v13 = v17[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && v6 )
    {
      Pool = (void *)IopVerifierExAllocatePool(v12, v7);
      v14 = Pool;
      if ( !Pool )
        return 3221225626LL;
      memset(Pool, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL, v16);
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
