/*
 * XREFs of ?Create@CRippleEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180083E48
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180084420 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z @ 0x180083F40 (-Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CRippleEffect::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CBitmapSource **a2,
        struct CRippleEffect **a3)
{
  CVisual *v6; // rax
  CVisual *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    408LL);
  v7 = v6;
  if ( v6 )
  {
    CVisual::CVisual(v6);
    *((_QWORD *)v7 + 36) = 0LL;
    *((_QWORD *)v7 + 38) = 0LL;
    *(_QWORD *)v7 = &CRippleEffect::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = CRippleEffect::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x34u);
    }
    CBaseObject::Release(v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x32u);
  }
  return v8;
}
