/*
 * XREFs of LdrpDetectDetour @ 0x18007D6B8
 * Callers:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 * Callees:
 *     TpReleaseWork @ 0x18003CA20 (TpReleaseWork.c)
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 *     TpWaitForWork @ 0x18007D520 (TpWaitForWork.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rcx
  int v1; // edx
  __int64 (__fastcall **i)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax

  if ( !LdrpDetourExist )
  {
    v0 = &LdrpThunkSignature;
    v1 = 0;
    for ( i = &LdrpCritialLoaderFunctions; ; ++i )
    {
      v3 = *v0 - *(_QWORD *)*i;
      if ( *v0 == *(_QWORD *)*i )
        v3 = v0[1] - *((_QWORD *)*i + 1);
      if ( v3 )
        break;
      v0 += 2;
      if ( (unsigned int)++v1 >= 5 )
        return;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3062,
        (unsigned int)"LdrpDetectDetour",
        2,
        (__int64)"!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
    if ( LdrpMapAndSnapWork )
    {
      TpWaitForWork(LdrpMapAndSnapWork, 1u);
      TpReleaseWork(LdrpMapAndSnapWork);
      LdrpMapAndSnapWork = 0LL;
      TpReleasePool(LdrpThreadPool);
      LdrpThreadPool = 0LL;
    }
  }
}
