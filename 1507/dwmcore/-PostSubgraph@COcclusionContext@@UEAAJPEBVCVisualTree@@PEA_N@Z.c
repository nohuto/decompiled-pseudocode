/*
 * XREFs of ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E0510
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180004C34 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18001FF00 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800DCCD4 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800DF624 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800E0478 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // esi
  char v4; // bp
  float *v6; // r14
  struct COcclusionInfo *OcclusionInfo; // rax
  struct COcclusionInfo *v8; // r15
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v16; // eax

  *a3 = 1;
  v3 = 0;
  v4 = 0;
  v6 = *(float **)(*((_QWORD *)this + 6) + 8LL);
  if ( v6 )
    v6 -= 16;
  OcclusionInfo = CVisual::GetOcclusionInfo((CVisual *)v6, a2);
  v8 = OcclusionInfo;
  if ( OcclusionInfo )
  {
    (*(void (__fastcall **)(struct COcclusionInfo *, _QWORD))(*(_QWORD *)OcclusionInfo + 16LL))(
      OcclusionInfo,
      *((unsigned int *)this + 163));
    v9 = *((_DWORD *)this + 164);
    if ( v9 )
    {
      *((_DWORD *)this + 164) = v9 - 1;
    }
    else
    {
      v4 = 1;
      if ( (*((_BYTE *)v8 + 8) & 1) != 0 )
        goto LABEL_28;
      v10 = COcclusionContext::CollectOcclusion(this, v8, (struct CVisual *)v6);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x251u);
        goto LABEL_28;
      }
      v11 = *((_DWORD *)this + 174);
      if ( v11 )
        *((_DWORD *)this + 174) = v11 - 1;
      if ( (*((_BYTE *)v8 + 8) & 4) != 0 )
      {
        v12 = *((_DWORD *)this + 4);
        if ( v12 )
          *((_DWORD *)this + 4) = v12 - 1;
      }
      if ( (*((_BYTE *)v8 + 8) & 2) != 0 )
      {
        v13 = COcclusionContext::Pop((COcclusionContext *)((char *)this + 8));
        v3 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x267u);
          goto LABEL_28;
        }
      }
    }
    if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(this)
      && !*((_DWORD *)this + 164)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(CVisual::GetEffectAlpha((CVisual *)v6)) & _xmm) >= 0.0000011920929 )
    {
      v14 = v6[100];
      v15 = FLOAT_1_0;
      if ( v14 <= 1.0 )
      {
        v15 = 0.0;
        if ( v14 >= 0.0 )
          v15 = v6[100];
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm) >= 0.0000011920929
        && ((*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)v6 + 184LL))(v6) || !v4) )
      {
        v16 = COcclusionContext::CheckAndNotifyOverlayContextOfContent(this, (struct CVisual *)v6);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x293u);
      }
    }
  }
LABEL_28:
  *((_DWORD *)this + 163) += 2;
  return v3;
}
