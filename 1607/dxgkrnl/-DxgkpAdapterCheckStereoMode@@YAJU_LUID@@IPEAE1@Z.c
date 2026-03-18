/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D149C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C0079460 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00068C8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 ProcessDxgProcess; // r15
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rbx
  __int64 PairingAdapters; // rdi
  __int64 v15; // rcx
  DXGADAPTER ***v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v25; // rax
  __int64 hAdapter; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int16 v36; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v37[4]; // [rsp+34h] [rbp-45h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v38; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v40[112]; // [rsp+60h] [rbp-19h] BYREF
  struct DXGADAPTER *v42; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !a4 || !a3 )
  {
    v27 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v27 + 24) = 7679LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v7 = ((__int64 (__fastcall *)(_QWORD))PsGetCurrentProcess)(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(v7, v8);
  if ( !ProcessDxgProcess || !a4 || !a3 )
  {
    v34 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35);
    v29 = v34;
    goto LABEL_28;
  }
  v38.hAdapter = 0;
  LODWORD(v38.pModeList) = 0;
  v38.VidPnSourceId = a2;
  *(D3DKMT_DISPLAYMODE **)((char *)&v38.pModeList + 4) = 0LL;
  *(&v38.ModeCount + 1) = 0;
  Global = DXGGLOBAL::GetGlobal(v9);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v42);
  if ( !v13 )
  {
    v28 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v28 + 24) = a1.HighPart;
    *(_QWORD *)(v28 + 32) = a1.LowPart;
    v29 = v28;
LABEL_28:
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v13, v38.VidPnSourceId, 0LL, 0LL, &v42, &v39);
  DXGADAPTER::ReleaseReference(v13);
  if ( (int)PairingAdapters >= 0 )
  {
    v16 = (DXGADAPTER ***)v42;
    if ( !v42 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v31 + 24) = 7718LL;
      WdLogEvent5_WdAssertion(v31);
    }
    LOBYTE(v42) = 0;
    v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v42, 0);
    v19 = v17;
    if ( v17 < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v32 + 24) = v19;
      WdLogEvent5_WdError(v32);
      goto LABEL_18;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, (struct DXGADAPTER *const)v16, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
    v19 = v20;
    if ( v20 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
      v25[3] = v19;
      v25[4] = ProcessDxgProcess;
      hAdapter = v38.hAdapter;
      v25[6] = v16;
    }
    else
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v16[266], v38.VidPnSourceId) )
      {
        v36 = 0;
        v37[0] = 0;
        LODWORD(v19) = DxgkpGetDisplayModeList(
                         (struct DXGADAPTER *)v16,
                         (struct COREADAPTERACCESS *)v40,
                         0,
                         &v38,
                         v37,
                         (struct DXGK_STEREO_PARAMS *)&v36);
        if ( v38.ModeCount || v38.pModeList )
        {
          v33 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v33 + 24) = 7767LL;
          WdLogEvent5_WdAssertion(v33);
        }
        if ( (int)v19 >= 0 )
        {
          *a3 = v36;
          *a4 = HIBYTE(v36);
        }
        goto LABEL_17;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
      LODWORD(v19) = -1071774238;
      v25[3] = -1071774238LL;
      v25[4] = v16;
      hAdapter = v38.VidPnSourceId;
    }
    v25[5] = hAdapter;
    WdLogEvent5_WdDmmEvent(v25);
LABEL_17:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
LABEL_18:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v42);
    return (unsigned int)v19;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v15);
  v30[3] = v13;
  v30[4] = v38.VidPnSourceId;
  v30[5] = PairingAdapters;
  WdLogEvent5_WdEvent(v30);
  return (unsigned int)PairingAdapters;
}
