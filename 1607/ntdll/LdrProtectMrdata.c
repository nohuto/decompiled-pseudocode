/*
 * XREFs of LdrProtectMrdata @ 0x1800190A8
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x18006E9D0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F460 (RtlAddFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInitializeHistoryTable @ 0x18007C080 (RtlInitializeHistoryTable.c)
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     RtlInitializeNtUserPfn @ 0x1800968D0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x180096AB0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 *     RtlpProtectInvertedFunctionTable @ 0x1800F765C (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180019040 (LdrpChangeMrdataProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrProtectMrdata(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v2 = LdrpMrdataUnprotected;
  if ( a1 )
  {
    if ( !LdrpMrdataUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    --LdrpMrdataUnprotected;
    if ( v2 == 1 )
      LdrpChangeMrdataProtection(2u);
  }
  else
  {
    if ( !LdrpMrdataUnprotected )
      LdrpChangeMrdataProtection(4u);
    if ( v2 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    LdrpMrdataUnprotected = v2 + 1;
  }
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
