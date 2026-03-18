/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0099098 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rsi
  char v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGADAPTER *v17; // r14
  DXGSESSIONDATA **SessionViewFromSource; // r12
  __int64 v19; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  ADAPTER_DISPLAY **v21; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v26; // r8
  __int64 v27; // rdx
  const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v28; // rcx
  __int128 v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  struct _LUID v44; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v45[7]; // [rsp+28h] [rbp-38h] BYREF
  char v46; // [rsp+A8h] [rbp+48h] BYREF

  v4 = a2;
  v6 = 1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  v46 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v46, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v33[3] = (unsigned int)PsGetCurrentProcessSessionId(v35, v34, v36, v37);
    v33[4] = v9;
LABEL_23:
    WdLogEvent5_WdError(v33);
    goto LABEL_16;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, (struct DXGADAPTER **)&v44);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
    v38[3] = a1;
    v38[4] = v4;
    v38[5] = v9;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal(v12);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v17 = (DXGADAPTER *)v44;
  v44 = *(struct _LUID *)(*(_QWORD *)&v44 + 252LL);
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v44, v4);
  DXGADAPTER::ReleaseReference(v17);
  if ( !SessionViewFromSource )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v33[3] = v4;
    v33[4] = v17;
    LODWORD(v9) = -1073741811;
    v33[5] = (unsigned int)PsGetCurrentProcessSessionId(v40, v39, v41, v42);
    v33[6] = -1073741811LL;
    goto LABEL_23;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( PrimaryDisplaySource )
  {
    do
    {
      v21 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, (struct DXGADAPTER *const)v21, 0LL);
      LODWORD(v9) = COREADAPTERACCESS::AcquireExclusive(v45);
      if ( (int)v9 >= 0 )
      {
        v22 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new[](0x600uLL, 0x4B677844u, PagedPool);
        v26 = v22;
        if ( v22 )
        {
          v27 = 12LL;
          v28 = a3;
          do
          {
            *(_OWORD *)v22->Red = *(_OWORD *)v28->Red;
            *(_OWORD *)&v22->Red[8] = *(_OWORD *)&v28->Red[8];
            *(_OWORD *)&v22->Red[16] = *(_OWORD *)&v28->Red[16];
            *(_OWORD *)&v22->Red[24] = *(_OWORD *)&v28->Red[24];
            *(_OWORD *)&v22->Red[32] = *(_OWORD *)&v28->Red[32];
            *(_OWORD *)&v22->Red[40] = *(_OWORD *)&v28->Red[40];
            *(_OWORD *)&v22->Red[48] = *(_OWORD *)&v28->Red[48];
            v22 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v22 + 128);
            v29 = *(_OWORD *)&v28->Red[56];
            v28 = (const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v28 + 128);
            *(_OWORD *)&v22[-1].Blue[248] = v29;
            --v27;
          }
          while ( v27 );
          LODWORD(v9) = ADAPTER_DISPLAY::UpdateGdiGammaRamp(v21[248], *((_DWORD *)PrimaryDisplaySource + 4), v26);
          if ( (int)v9 < 0
            || (LODWORD(v9) = ADAPTER_DISPLAY::SetGammaRamp(
                                (PERESOURCE **)v21[248],
                                *((_DWORD *)PrimaryDisplaySource + 4),
                                0LL),
                (int)v9 < 0) )
          {
            ADAPTER_DISPLAY::UpdateGdiGammaRamp(v21[248], *((_DWORD *)PrimaryDisplaySource + 4), 0LL);
          }
          else
          {
            v6 = 0;
          }
        }
        else
        {
          LODWORD(v9) = -1073741801;
          v43 = WdLogNewEntry5_WdWarning(v24, v23, 0LL, v25);
          *(_QWORD *)(v43 + 24) = v21;
          *(_QWORD *)(v43 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v43);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(
                               (SESSION_VIEW *)SessionViewFromSource,
                               PrimaryDisplaySource);
    }
    while ( PrimaryDisplaySource );
    if ( !v6 )
      LODWORD(v9) = 0;
  }
LABEL_16:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v46);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 3009);
  return (unsigned int)v9;
}
