/*
 * XREFs of LdrpDetectDetour @ 0x1800049B8
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180004A10 (LdrpEnableParallelLoading.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 * Callees:
 *     TpWaitForWork @ 0x180006F90 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18000A880 (TpReleaseWork.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
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
        3112,
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
