/*
 * XREFs of ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180142CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801097CC (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMXZ @ 0x180109850 (-GetVisualAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x18014032C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetAlphaMode(CHwndBitmap *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  CWindowNode *v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm4_4

  v2 = 1;
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 34LL) )
    {
      v4 = (CWindowNode *)*((_QWORD *)this + 66);
      if ( (*((_BYTE *)v4 + 904) & 1) != 0 )
      {
        if ( CWindowNode::IsClipSimpleRect(v4) )
        {
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetEffectAlpha(*((CVisual **)this + 66)) - 1.0)) & _xmm) < 0.0000011920929 )
          {
            v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetVisualAlpha(*((CVisual **)this + 66)) - 1.0)) & _xmm);
            if ( v6 > v5 )
              return 3;
          }
        }
      }
    }
  }
  return v2;
}
