/*
 * XREFs of ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C001C9C4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B7BB4 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00B8F00 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

struct _D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  struct _D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v3; // rax

  result = (struct _D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(216 * ((unsigned int)a1 - 1) + 264);
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
