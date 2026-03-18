/*
 * XREFs of ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800FDF30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x18000B0B0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x180055D90 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800F798C (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800F7A84 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FDE98 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  char v5; // bp
  __int64 v7; // r15
  struct COcclusionInfo *OcclusionInfo; // rax
  struct COcclusionInfo *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float EffectAlpha; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18; // eax

  *a3 = 1;
  v3 = 0;
  v4 = *((_QWORD *)this + 6);
  v5 = 0;
  v7 = *(_QWORD *)(v4 + 8);
  if ( (*(_BYTE *)(v7 + 74) & 0x10) == 0 )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v4 + 8), a2);
    v9 = OcclusionInfo;
    if ( OcclusionInfo )
    {
      (*(void (__fastcall **)(struct COcclusionInfo *, _QWORD))(*(_QWORD *)OcclusionInfo + 16LL))(
        OcclusionInfo,
        *((unsigned int *)this + 163));
      v10 = *((_DWORD *)this + 164);
      if ( v10 )
      {
        *((_DWORD *)this + 164) = v10 - 1;
      }
      else
      {
        v5 = 1;
        if ( (*((_BYTE *)v9 + 8) & 1) != 0 )
          goto LABEL_27;
        v11 = COcclusionContext::CollectOcclusion(this, v9, (struct CVisual *)v7);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x265u);
          goto LABEL_27;
        }
        v12 = *((_DWORD *)this + 174);
        if ( v12 )
          *((_DWORD *)this + 174) = v12 - 1;
        if ( (*((_BYTE *)v9 + 8) & 4) != 0 )
        {
          v13 = *((_DWORD *)this + 4);
          if ( v13 )
            *((_DWORD *)this + 4) = v13 - 1;
        }
        if ( (*((_BYTE *)v9 + 8) & 2) != 0 )
        {
          v14 = COcclusionContext::Pop((COcclusionContext *)((char *)this + 8));
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x27Bu);
            goto LABEL_27;
          }
        }
      }
      if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(this) && !*((_DWORD *)this + 164) )
      {
        EffectAlpha = CVisual::GetEffectAlpha((CVisual *)v7);
        if ( !IsCloseRealZero(EffectAlpha, 0.0000011920929) )
        {
          v16 = *(float *)(v7 + 384);
          v17 = FLOAT_1_0;
          if ( v16 <= 1.0 )
          {
            v17 = 0.0;
            if ( v16 >= 0.0 )
              v17 = *(float *)(v7 + 384);
          }
          if ( !IsCloseRealZero(v17, 0.0000011920929)
            && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7) || !v5) )
          {
            v18 = COcclusionContext::CheckAndNotifyOverlayContextOfContent(this, (struct CVisual *)v7);
            v3 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x2A7u);
          }
        }
      }
    }
  }
LABEL_27:
  *((_DWORD *)this + 163) += 2;
  return v3;
}
