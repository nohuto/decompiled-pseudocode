/*
 * XREFs of LdrProtectMrdata @ 0x180019098
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x18006E9C0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F120 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F450 (RtlAddFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInitializeHistoryTable @ 0x18007C070 (RtlInitializeHistoryTable.c)
 *     LdrpGetShimEngineInterface @ 0x18007E058 (LdrpGetShimEngineInterface.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180083120 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     RtlInitializeNtUserPfn @ 0x1800968C0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x180096AA0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 *     RtlpProtectInvertedFunctionTable @ 0x1800F765C (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180019030 (LdrpChangeMrdataProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v2 = LdrSystemDllInitBlock.Wow64SharedInformation[13];
  if ( a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]) )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    --LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]);
    if ( v2 == 1 )
      LdrpChangeMrdataProtection(2u);
  }
  else
  {
    if ( !LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]) )
      LdrpChangeMrdataProtection(4u);
    if ( v2 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]) = v2 + 1;
  }
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
