/*
 * XREFs of ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x1800836CC
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180084B20 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001DC94 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800837E0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Create(struct IDwmChannel *a1, struct CAnimatedGlassSheet **a2)
{
  CAtlasedRectsVisual *v4; // rax
  CAnimatedGlassSheet *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                WPF::g_pProcessHeap,
                                520LL);
  v5 = v4;
  if ( v4 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v4);
    *(_QWORD *)v5 = &CAnimatedGlassSheet::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CAnimatedGlassSheet::Initialize(v5, a1, 1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x36u);
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x34u);
  }
  return v6;
}
