/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D88B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0085858 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rsi
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGADAPTER *v14; // r14
  DXGSESSIONDATA **SessionViewFromSource; // r15
  __int64 v16; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  ADAPTER_DISPLAY **v18; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v23; // r8
  __int64 v24; // rdx
  const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v25; // rcx
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  DXGADAPTER *v41; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v43[10]; // [rsp+48h] [rbp-19h] BYREF
  char v44; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = a2;
  v6 = 1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  v44 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v44, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v30[3] = (unsigned int)PsGetCurrentProcessSessionId(v32, v31, v33, v34);
    v30[4] = v9;
LABEL_23:
    WdLogEvent5_WdError(v30);
    goto LABEL_16;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v41, &v42);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
    v35[3] = a1;
    v35[4] = v4;
    v35[5] = v9;
    WdLogEvent5_WdEvent(v35);
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal(v11);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v14 = v41;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionData,
                            (const struct _LUID *)((char *)v41 + 268),
                            v4);
  DXGADAPTER::ReleaseReference(v14);
  if ( !SessionViewFromSource )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v30[3] = v4;
    v30[4] = v14;
    LODWORD(v9) = -1073741811;
    v30[5] = (unsigned int)PsGetCurrentProcessSessionId(v37, v36, v38, v39);
    v30[6] = -1073741811LL;
    goto LABEL_23;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( PrimaryDisplaySource )
  {
    do
    {
      v18 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, (struct DXGADAPTER *const)v18, 0LL);
      LODWORD(v9) = COREADAPTERACCESS::AcquireExclusive(v43);
      if ( (int)v9 >= 0 )
      {
        v19 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new(0x600uLL, 0x4B677844u, PagedPool);
        v23 = v19;
        if ( v19 )
        {
          v24 = 12LL;
          v25 = a3;
          do
          {
            *(_OWORD *)v19->Red = *(_OWORD *)v25->Red;
            *(_OWORD *)&v19->Red[8] = *(_OWORD *)&v25->Red[8];
            *(_OWORD *)&v19->Red[16] = *(_OWORD *)&v25->Red[16];
            *(_OWORD *)&v19->Red[24] = *(_OWORD *)&v25->Red[24];
            *(_OWORD *)&v19->Red[32] = *(_OWORD *)&v25->Red[32];
            *(_OWORD *)&v19->Red[40] = *(_OWORD *)&v25->Red[40];
            *(_OWORD *)&v19->Red[48] = *(_OWORD *)&v25->Red[48];
            v19 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v19 + 128);
            v26 = *(_OWORD *)&v25->Red[56];
            v25 = (const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v25 + 128);
            *(_OWORD *)&v19[-1].Blue[248] = v26;
            --v24;
          }
          while ( v24 );
          LODWORD(v9) = ADAPTER_DISPLAY::UpdateGdiGammaRamp(v18[266], *((_DWORD *)PrimaryDisplaySource + 4), v23);
          if ( (int)v9 < 0
            || (LODWORD(v9) = ADAPTER_DISPLAY::SetGammaRamp(
                                (PERESOURCE **)v18[266],
                                *((_DWORD *)PrimaryDisplaySource + 4),
                                0LL),
                (int)v9 < 0) )
          {
            ADAPTER_DISPLAY::UpdateGdiGammaRamp(v18[266], *((_DWORD *)PrimaryDisplaySource + 4), 0LL);
          }
          else
          {
            v6 = 0;
          }
        }
        else
        {
          LODWORD(v9) = -1073741801;
          v40 = WdLogNewEntry5_WdWarning(v21, v20, 0LL, v22);
          *(_QWORD *)(v40 + 24) = v18;
          *(_QWORD *)(v40 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v40);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(
                               (SESSION_VIEW *)SessionViewFromSource,
                               PrimaryDisplaySource);
    }
    while ( PrimaryDisplaySource );
    if ( !v6 )
      LODWORD(v9) = 0;
  }
LABEL_16:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v44);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 3009);
  return (unsigned int)v9;
}
