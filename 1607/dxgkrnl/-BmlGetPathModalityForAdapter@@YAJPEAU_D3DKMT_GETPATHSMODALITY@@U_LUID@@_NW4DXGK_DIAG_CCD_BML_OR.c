/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00BC468
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BCB40 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, struct _LUID a2, char a3, unsigned int a4, int a5)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  DXGADAPTER *v10; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 v12; // r8
  unsigned __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-68h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2, &v14);
  v10 = v9;
  if ( v9 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v9, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v12) = a3;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v10,
                                                   v12,
                                                   a4,
                                                   a5,
                                                   0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
    DXGADAPTER::ReleaseReference(v10);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
