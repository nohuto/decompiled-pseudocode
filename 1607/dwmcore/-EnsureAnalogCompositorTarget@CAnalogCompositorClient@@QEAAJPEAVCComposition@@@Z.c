/*
 * XREFs of ?EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z @ 0x180167488
 * Callers:
 *     ?Initialize@CAnalogCompositor@@EEAAJXZ @ 0x180165270 (-Initialize@CAnalogCompositor@@EEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CAnalogCompositorTarget@@AEAA@PEAVCComposition@@@Z @ 0x180166E04 (--0CAnalogCompositorTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CAnalogCompositorTarget@@EEAAJXZ @ 0x180167180 (-Initialize@CAnalogCompositorTarget@@EEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorClient::EnsureAnalogCompositorTarget(
        CAnalogCompositorClient *this,
        struct CComposition *a2)
{
  int v2; // ebx
  CAnalogCompositorTarget *v4; // rax
  CAnalogCompositorTarget *v5; // rdi

  v2 = 0;
  if ( !*((_QWORD *)&xmmword_1801F03A0 + 1) )
  {
    *((_QWORD *)&xmmword_1801F03A0 + 1) = 0LL;
    v2 = -2147024882;
    v4 = (CAnalogCompositorTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      192LL);
    if ( v4 )
      v5 = CAnalogCompositorTarget::CAnalogCompositorTarget(v4, a2);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v2 = CAnalogCompositorTarget::Initialize(v5);
      if ( v2 >= 0 )
      {
        *((_QWORD *)&xmmword_1801F03A0 + 1) = v5;
        CBitmapOfDeviceBitmaps::AddRef(v5);
      }
    }
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Au);
  }
  return (unsigned int)v2;
}
