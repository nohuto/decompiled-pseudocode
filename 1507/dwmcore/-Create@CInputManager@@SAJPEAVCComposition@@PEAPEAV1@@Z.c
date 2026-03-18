/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092134
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180092B18 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180092CBC (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CBitmapOfDeviceBitmaps *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CInputManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          416LL);
  if ( v4 )
    v5 = CInputManager::CInputManager(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v5);
    v6 = CInputManager::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26u);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23u);
  }
  return v7;
}
