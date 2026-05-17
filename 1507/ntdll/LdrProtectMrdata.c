/*
 * XREFs of LdrProtectMrdata @ 0x18003611C
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlInitializeHistoryTable @ 0x180011520 (RtlInitializeHistoryTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x180070600 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180072810 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     RtlInitializeNtUserPfn @ 0x180083D20 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x180083F00 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x180036198 (LdrpChangeMrdataProtection.c)
 */

signed __int64 __fastcall LdrProtectMrdata(int a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock, a2, a3, a4);
  v5 = LdrpMrdataUnprotected;
  if ( a1 )
  {
    if ( !LdrpMrdataUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    --LdrpMrdataUnprotected;
    if ( v5 == 1 )
      LdrpChangeMrdataProtection(2LL);
  }
  else
  {
    if ( !LdrpMrdataUnprotected )
      LdrpChangeMrdataProtection(4LL);
    if ( v5 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    LdrpMrdataUnprotected = v5 + 1;
  }
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
