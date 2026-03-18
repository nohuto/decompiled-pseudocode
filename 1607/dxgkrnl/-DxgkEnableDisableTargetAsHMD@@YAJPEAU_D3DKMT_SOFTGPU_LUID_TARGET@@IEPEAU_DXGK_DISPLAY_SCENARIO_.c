/*
 * XREFs of ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D63C
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01B0318 (MonitorEnableDisableTargetAsHMD.c)
 */

__int64 __fastcall DxgkEnableDisableTargetAsHMD(
        struct _D3DKMT_SOFTGPU_LUID_TARGET *a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _LUID *v6; // r14
  __int64 v7; // rdi
  int *v8; // rbx
  __int64 v9; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rcx
  DXGADAPTER *v13; // rsi
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v23[10]; // [rsp+30h] [rbp-68h] BYREF

  v6 = (struct _LUID *)a1;
  LODWORD(v7) = -1073741811;
  if ( a2 )
  {
    v8 = (int *)((char *)a1 + 4);
    v9 = a2;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v22);
      v13 = v11;
      if ( v11 )
        break;
      LODWORD(v7) = -1073741811;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = *v8;
      v14[4] = (unsigned int)*(v8 - 1);
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
LABEL_12:
      v6 = (struct _LUID *)((char *)v6 + 12);
      v8 += 3;
      if ( !--v9 )
        return (unsigned int)v7;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v11, 0LL);
    DXGADAPTER::ReleaseReference(v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(v23);
    v7 = v15;
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v13 + 266) )
        goto LABEL_11;
      LOBYTE(v17) = a3;
      v19 = MonitorEnableDisableTargetAsHMD(v13, (unsigned int)v8[1], v17, a4);
      v7 = v19;
      if ( v19 >= 0 )
        goto LABEL_11;
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v18[3] = (unsigned int)v8[1];
      v18[4] = *v8;
      v18[5] = (unsigned int)*(v8 - 1);
      v18[6] = v7;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v18[3] = *v8;
      v18[4] = (unsigned int)*(v8 - 1);
      v18[5] = v7;
    }
    WdLogEvent5_WdError(v18);
LABEL_11:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
