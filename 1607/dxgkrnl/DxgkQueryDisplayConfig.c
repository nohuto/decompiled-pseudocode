/*
 * XREFs of DxgkQueryDisplayConfig @ 0x1C00C11A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C1574 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@P.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C245C (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 */

int __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3,
        unsigned int *a4,
        struct DISPLAYCONFIG_MODE_INFO *a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6)
{
  unsigned int v9; // ebp
  struct DXGGLOBAL *Global; // rax
  int result; // eax
  bool v12; // cl
  unsigned int v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  result = QDC_CACHE::GetCachedData(*((QDC_CACHE **)Global + 111), v9, a2, a3, a4, a5, a6, v13);
  if ( result < 0 )
    return QueryDisplayConfigInternal(v12, v13[0], v9, a2, a3, a4, a5, a6);
  return result;
}
