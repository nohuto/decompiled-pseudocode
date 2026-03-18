/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00BBBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00CEC74 (-UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v3; // rbp
  __int64 v4; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  ADAPTER_DISPLAY **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v21; // r8
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD v31[8]; // [rsp+20h] [rbp-48h] BYREF
  struct DXGADAPTER *v32; // [rsp+70h] [rbp+8h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v4, 0LL, &v32);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    v28[3] = a1;
    v28[4] = v4;
    v28[5] = v11;
    WdLogEvent5_WdEvent(v28);
    goto LABEL_15;
  }
  v12 = (ADAPTER_DISPLAY **)v32;
  if ( !v32 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v29 + 24) = 24961LL;
    WdLogEvent5_WdAssertion(v29);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, (struct DXGADAPTER *const)v12, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
  LODWORD(v11) = COREADAPTERACCESS::AcquireExclusive(v31);
  if ( (int)v11 >= 0 )
  {
    if ( !v12[247] )
    {
      v27 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v27 + 24) = 24975LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( *((_DWORD *)v12[247] + 20) <= (unsigned int)v4 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      LODWORD(v11) = -1073741811;
      v30[4] = v4;
      v30[5] = -1073741811LL;
    }
    else
    {
      v17 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new[](0x600uLL, 0x4B677844u, PagedPool);
      v21 = v17;
      if ( v17 )
      {
        v22 = 12LL;
        do
        {
          *(_OWORD *)v17->Red = *(_OWORD *)v3->Red;
          *(_OWORD *)&v17->Red[8] = *(_OWORD *)&v3->Red[8];
          *(_OWORD *)&v17->Red[16] = *(_OWORD *)&v3->Red[16];
          *(_OWORD *)&v17->Red[24] = *(_OWORD *)&v3->Red[24];
          *(_OWORD *)&v17->Red[32] = *(_OWORD *)&v3->Red[32];
          *(_OWORD *)&v17->Red[40] = *(_OWORD *)&v3->Red[40];
          *(_OWORD *)&v17->Red[48] = *(_OWORD *)&v3->Red[48];
          v17 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v17 + 128);
          v23 = *(_OWORD *)&v3->Red[56];
          v3 = (const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v3 + 128);
          *(_OWORD *)&v17[-1].Blue[248] = v23;
          --v22;
        }
        while ( v22 );
        LODWORD(v11) = ADAPTER_DISPLAY::UpdateGdiGammaRamp(v12[247], v4, v21);
        if ( (int)v11 < 0
          || (LODWORD(v11) = ADAPTER_DISPLAY::SetGammaRamp((PERESOURCE **)v12[247], v4, 0LL), (int)v11 < 0) )
        {
          ADAPTER_DISPLAY::UpdateGdiGammaRamp(v12[247], v4, 0LL);
        }
        goto LABEL_14;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, 0LL, v20);
      LODWORD(v11) = -1073741801;
      v30[4] = -1073741801LL;
    }
    v30[3] = v12;
    WdLogEvent5_WdWarning(v30);
  }
LABEL_14:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
LABEL_15:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 3009);
  return (unsigned int)v11;
}
