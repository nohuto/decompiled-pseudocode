/*
 * XREFs of LdrpDetectDetour @ 0x180073564
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x180072C64 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TpReleaseWork @ 0x18003BA30 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180082090 (TpWaitForWork.c)
 *     TpReleasePool @ 0x1800839A0 (TpReleasePool.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rcx
  unsigned int v1; // edx
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax
  char v4; // al
  int v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !LdrpDetourExist )
  {
    v0 = &LdrpThunkSignature;
    v1 = 0;
    v2 = &LdrpCritialLoaderFunctions;
    while ( 1 )
    {
      v3 = *v0 - *(_QWORD *)*v2;
      if ( *v0 == *(_QWORD *)*v2 )
        v3 = v0[1] - *((_QWORD *)*v2 + 1);
      if ( v3 )
        break;
      v0 += 2;
      ++v1;
      ++v2;
      if ( v1 >= 5 )
        goto LABEL_7;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3141,
        (unsigned int)"LdrpDetectDetour",
        2,
        (__int64)"!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
LABEL_7:
    if ( (int)ZwQueryInformationThread(-2LL, 42LL, &v5, 4LL, 0LL) < 0 )
    {
      v4 = LdrpDetourExist;
    }
    else
    {
      v4 = LdrpDetourExist;
      if ( v5 == 1 )
        v4 = 1;
      LdrpDetourExist = v4;
    }
    if ( v4 )
    {
      if ( LdrpMapAndSnapWork )
      {
        TpWaitForWork(LdrpMapAndSnapWork, 1LL);
        TpReleaseWork(LdrpMapAndSnapWork);
        LdrpMapAndSnapWork = 0LL;
        TpReleasePool(LdrpThreadPool);
        LdrpThreadPool = 0LL;
      }
    }
  }
}
