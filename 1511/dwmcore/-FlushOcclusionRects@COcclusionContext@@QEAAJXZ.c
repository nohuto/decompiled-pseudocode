/*
 * XREFs of ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FDC80
 * Callers:
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FDE98 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     Template_dffffq @ 0x180114A28 (Template_dffffq.c)
 */

__int64 __fastcall COcclusionContext::FlushOcclusionRects(COcclusionContext *this, int a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v8; // r13d
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  int v16; // eax
  float v18[4]; // [rsp+40h] [rbp-58h] BYREF

  LODWORD(v4) = *((_DWORD *)this + 32);
  v5 = 0;
  v6 = *((_QWORD *)this + 13);
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)this + 163);
      v4 = (unsigned int)(v4 - 1);
      *((_DWORD *)this + 163) = v8 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_dffffq(
          (_DWORD)this,
          a2,
          v8,
          a4,
          *(_DWORD *)(v6 + 20 * v4 + 4),
          *(_DWORD *)(v6 + 20 * v4 + 8),
          *(_DWORD *)(v6 + 20 * v4 + 12),
          *(_DWORD *)(v6 + 20 * v4 + 16));
      if ( !*(_DWORD *)(v6 + 20 * v4 + 16) )
      {
        v9 = *(float *)(v6 + 20 * v4);
        v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
        if ( v10 < 8388608.0 )
          v9 = (float)(int)ceilf_0(*(float *)(v6 + 20 * v4));
        v11 = *(float *)(v6 + 20 * v4 + 4);
        v18[0] = v9;
        v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
        if ( v12 < 8388608.0 )
          v11 = (float)(int)ceilf_0(v11);
        v13 = *(float *)(v6 + 20 * v4 + 8);
        v18[1] = v11;
        v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
        if ( v14 < 8388608.0 )
          v13 = (float)(int)floorf_0(v13);
        v18[2] = v13;
        v15 = *(float *)(v6 + 20 * v4 + 12);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm) < 8388608.0 )
          v15 = (float)(int)floorf_0(*(float *)(v6 + 20 * v4 + 12));
        v18[3] = v15;
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v18) )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 12) + 24LL))(
                  *((_QWORD *)this + 12),
                  v18,
                  v8);
          v5 = v16;
          if ( v16 < 0 )
            break;
        }
      }
      if ( !(_DWORD)v4 )
        goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x32Bu);
  }
LABEL_18:
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 13, 0x14u);
  return v5;
}
