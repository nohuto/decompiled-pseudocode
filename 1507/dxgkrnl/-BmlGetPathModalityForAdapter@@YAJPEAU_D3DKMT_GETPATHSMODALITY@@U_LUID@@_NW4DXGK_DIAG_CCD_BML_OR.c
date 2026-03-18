/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C009C2D8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C009BADC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO @ 0x1C009C390 (_BTL_TOPOLOGY_CONSTRUCTOR--AugmentTopology_--_24_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  char v6; // bp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rbx
  int PathModalityForAdapterWithCoreAccessHeld; // edi
  struct DXGADAPTER *v13; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[56]; // [rsp+38h] [rbp-50h] BYREF

  v5 = a4;
  v6 = a3;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a2);
  v13 = v9;
  v10 = (__int64)v9;
  if ( v9 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, v9, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v10,
                                                   v6,
                                                   v5,
                                                   a5,
                                                   0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  }
  else
  {
    PathModalityForAdapterWithCoreAccessHeld = -1073741810;
  }
  BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO(&v13);
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
