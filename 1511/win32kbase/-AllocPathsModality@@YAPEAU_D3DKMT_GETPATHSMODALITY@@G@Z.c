/*
 * XREFs of ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C005265C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A94 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00BAE0C (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 */

struct _D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  struct _D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v3; // rax

  result = (struct _D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(216 * ((unsigned int)a1 - 1) + 264, 1936876615LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 9) = 0;
    *((_QWORD *)result + 5) = 0LL;
    *((_WORD *)result + 10) = a1;
    *((_WORD *)result + 11) = a1;
  }
  else
  {
    v3 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v3 + 24) = a1;
    WdLogEvent5_WdLowResource(v3);
    return 0LL;
  }
  return result;
}
