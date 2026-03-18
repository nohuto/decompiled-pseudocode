/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C0153DF8
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C008A7F0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007A8C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  int PairingAdapters; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  _QWORD *v22; // rax
  DXGADAPTER ***v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 VidPnSourceId; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned __int8 v38[4]; // [rsp+30h] [rbp-29h] BYREF
  __int16 v39; // [rsp+34h] [rbp-25h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v40; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v41[96]; // [rsp+50h] [rbp-9h] BYREF
  struct DXGADAPTER *v43; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( !a4 || !a3 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v7 + 24) = 7215LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || !a4 || !a3 )
  {
    v36 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    *(_QWORD *)(v36 + 32) = PsGetCurrentProcess(v37);
    v15 = v36;
    goto LABEL_29;
  }
  v40.hAdapter = 0;
  LODWORD(v40.pModeList) = 0;
  v40.VidPnSourceId = a2;
  *(D3DKMT_DISPLAYMODE **)((char *)&v40.pModeList + 4) = 0LL;
  *(&v40.ModeCount + 1) = 0;
  Global = DXGGLOBAL::GetGlobal(v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v13 = v11;
  if ( v11 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v11, v40.VidPnSourceId, 0LL, &v43);
    v21 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
      v22[3] = v13;
      v22[4] = v40.VidPnSourceId;
      v22[5] = v21;
      WdLogEvent5_WdEvent(v22);
      return (unsigned int)v21;
    }
    v24 = (DXGADAPTER ***)v43;
    if ( !v43 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v25 + 24) = 7247LL;
      WdLogEvent5_WdAssertion(v25);
    }
    LOBYTE(v43) = 0;
    v26 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 0);
    v21 = v26;
    if ( v26 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v28 + 24) = v21;
      WdLogEvent5_WdError(v28);
LABEL_27:
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43);
      return (unsigned int)v21;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, (struct DXGADAPTER *const)v24, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v24);
    v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
    v21 = v29;
    if ( v29 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v24[248], v40.VidPnSourceId) )
      {
        v39 = 0;
        v38[0] = 0;
        LODWORD(v21) = DxgkpGetDisplayModeList(
                         v24,
                         (struct COREADAPTERACCESS *)v41,
                         0,
                         &v40,
                         v38,
                         (struct DXGK_STEREO_PARAMS *)&v39);
        if ( v40.ModeCount || v40.pModeList )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v35 + 24) = 7296LL;
          WdLogEvent5_WdAssertion(v35);
        }
        if ( (int)v21 >= 0 )
        {
          *a3 = v39;
          *a4 = HIBYTE(v39);
        }
        goto LABEL_26;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
      LODWORD(v21) = -1071774238;
      v31[3] = -1071774238LL;
      v31[4] = v24;
      VidPnSourceId = v40.VidPnSourceId;
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
      v31[3] = v21;
      v31[4] = Current;
      VidPnSourceId = v40.hAdapter;
      v31[6] = v24;
    }
    v31[5] = VidPnSourceId;
    WdLogEvent5_WdDmmEvent(v31);
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    goto LABEL_27;
  }
  v14 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v14 + 24) = a1.HighPart;
  *(_QWORD *)(v14 + 32) = a1.LowPart;
  v15 = v14;
LABEL_29:
  WdLogEvent5_WdError(v15);
  return 3221225485LL;
}
