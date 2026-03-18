/*
 * XREFs of ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180126460
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800F798C (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180123A0C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetAlphaMode(CHwndBitmap *this)
{
  __int64 v1; // r14
  unsigned int v3; // edi
  CWindowNode *v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4

  v1 = *((_QWORD *)this + 56);
  v3 = 1;
  if ( v1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 56), 33LL) )
    {
      v4 = (CWindowNode *)*((_QWORD *)this + 56);
      if ( (*((_BYTE *)v4 + 1096) & 1) != 0
        && CWindowNode::IsClipSimpleRect(v4)
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetEffectAlpha(*((CVisual **)this + 56)) - 1.0)) & _xmm) < 0.0000011920929 )
      {
        v5 = *(float *)(*((_QWORD *)this + 56) + 384LL);
        if ( v5 <= 1.0 )
        {
          if ( v5 < 0.0 )
            v5 = 0.0;
        }
        else
        {
          v5 = FLOAT_1_0;
        }
        v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - 1.0)) & _xmm);
        if ( v6 < 0.0000011920929 )
          return 3;
      }
    }
  }
  return v3;
}
