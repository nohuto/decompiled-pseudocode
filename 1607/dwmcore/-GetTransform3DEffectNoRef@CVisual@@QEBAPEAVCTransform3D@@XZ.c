/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180051324
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasLegacy3DEffectTransform@CVisual@@QEBA_NXZ @ 0x18000BFE8 (-HasLegacy3DEffectTransform@CVisual@@QEBA_NXZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18005053C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rdi
  struct CEffect *EffectInternal; // rbx
  __int64 (__fastcall *v4)(struct CEffect *, __int64); // rax
  char v5; // al
  __int64 (__fastcall *v6)(struct CEffect *, __int64); // rax
  char v7; // al

  v1 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    v4 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
    if ( (char *)v4 == (char *)CEffectGroup::IsOfType )
      v5 = CEffectGroup::IsOfType(EffectInternal, 24LL);
    else
      v5 = v4(EffectInternal, 24LL);
    if ( v5 )
    {
      return EffectInternal;
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
      if ( (char *)v6 == (char *)CEffectGroup::IsOfType )
        v7 = CEffectGroup::IsOfType(EffectInternal, 8LL);
      else
        v7 = v6(EffectInternal, 8LL);
      if ( v7 )
        return (struct CTransform3D *)*((_QWORD *)EffectInternal + 19);
    }
  }
  return (struct CTransform3D *)v1;
}
