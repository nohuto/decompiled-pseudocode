/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180048F10
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004D2FC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E730 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 (__fastcall *v4)(_QWORD, __int64); // rbp
  char v5; // al
  __int64 (__fastcall *v6)(_QWORD, __int64); // rbp
  char v7; // al

  v1 = *((_QWORD *)this + 49);
  v2 = 0LL;
  if ( v1 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL);
    if ( v4 == CEffectGroup::IsOfType )
      v5 = CEffectGroup::IsOfType(*((_QWORD *)this + 49), 24LL);
    else
      v5 = v4(*((_QWORD *)this + 49), 24LL);
    if ( v5 )
    {
      return (struct CTransform3D *)*((_QWORD *)this + 49);
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 49) + 48LL);
      if ( v6 == CEffectGroup::IsOfType )
        v7 = CEffectGroup::IsOfType(*((_QWORD *)this + 49), 8LL);
      else
        v7 = v6(*((_QWORD *)this + 49), 8LL);
      if ( v7 )
        return *(struct CTransform3D **)(*((_QWORD *)this + 49) + 72LL);
    }
  }
  return (struct CTransform3D *)v2;
}
