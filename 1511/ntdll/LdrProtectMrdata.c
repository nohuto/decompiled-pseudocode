/*
 * XREFs of LdrProtectMrdata @ 0x18002F3A4
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x180078754 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 *     RtlInitializeHistoryTable @ 0x180079104 (RtlInitializeHistoryTable.c)
 *     RtlDeleteFunctionTable @ 0x18007B4F0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18007E2A0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18007FA60 (RtlInstallFunctionTableCallback.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     RtlInitializeNtUserPfn @ 0x1800954D0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x1800956B0 (RtlResetNtUserPfn.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x18002F420 (LdrpChangeMrdataProtection.c)
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
      LdrpChangeMrdataProtection(2LL);
  }
  else
  {
    if ( !LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]) )
      LdrpChangeMrdataProtection(4LL);
    if ( v2 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[13]) = v2 + 1;
  }
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
