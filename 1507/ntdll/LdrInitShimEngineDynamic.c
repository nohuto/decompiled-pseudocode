/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800BDB20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrFindEntryForAddress @ 0x180069EB0 (LdrFindEntryForAddress.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  char v4; // di
  int EntryForAddress; // eax
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 ShimEngine; // bl
  int v11; // r8d
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v13);
  if ( EntryForAddress < 0 )
  {
    v9 = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2447,
        "LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v9 = (unsigned int)LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    ShimEngine = 0;
    goto LABEL_12;
  }
  LdrpPinModule(v13, v6, v7, v8);
  ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  if ( !ShimEngine )
  {
LABEL_12:
    v11 = -1073741823;
    goto LABEL_13;
  }
  v11 = 0;
LABEL_13:
  LdrpReleaseLoaderLock(v9, 2, v11);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
