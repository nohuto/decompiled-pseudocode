/*
 * XREFs of ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180125E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18005053C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ??0CEffectGroup@@IEAA@PEAVCComposition@@@Z @ 0x180056028 (--0CEffectGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetOpacity(CVisual **this, float a2)
{
  unsigned int v2; // ebx
  CBitmapOfDeviceBitmaps *v3; // rdi
  float v5; // xmm1_4
  CEffectGroup *v6; // rax
  int v7; // eax
  struct CEffect *EffectInternal; // rax
  int v9; // eax
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0;
  v3 = 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v5 < 0.0000011920929 || CVisual::GetEffectInternal(this[3]) )
    goto LABEL_17;
  v6 = (CEffectGroup *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         160LL);
  if ( v6 )
    v3 = CEffectGroup::CEffectGroup(v6, *((struct CComposition **)this[3] + 2));
  if ( !v3 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x139u);
    return v2;
  }
  CBitmapOfDeviceBitmaps::AddRef(v3);
  v7 = CVisual::SetEffect(this[3], v3);
  v2 = v7;
  if ( v7 >= 0 )
  {
LABEL_17:
    if ( CVisual::GetEffectInternal(this[3]) )
    {
      EffectInternal = CVisual::GetEffectInternal(this[3]);
      v9 = (*(__int64 (__fastcall **)(struct CEffect *, _QWORD, __int64, float *))(*(_QWORD *)EffectInternal + 80LL))(
             EffectInternal,
             0LL,
             18LL,
             &v11);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x143u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x13Bu);
  }
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v2;
}
