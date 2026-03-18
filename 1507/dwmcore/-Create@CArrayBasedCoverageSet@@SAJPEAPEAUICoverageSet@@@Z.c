/*
 * XREFs of ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18005ECCC
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800221EC (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Create(struct ICoverageSet **a1)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rbx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         256LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)v3 = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
    *(_QWORD *)(v3 + 8) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v3 + 24) = v3 + 56;
    *(_QWORD *)(v3 + 32) = v3 + 56;
    *(_DWORD *)(v3 + 40) = 10;
    *(_QWORD *)(v3 + 44) = 10LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v4 + 8));
    *a1 = (struct ICoverageSet *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v2;
}
