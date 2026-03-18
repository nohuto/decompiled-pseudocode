/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B2C08
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007E82C (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // esi
  CHwndRenderTarget *v6; // rax
  CHwndRenderTarget *v7; // rdi

  v3 = 0;
  *((_QWORD *)this + 6) = *((_QWORD *)a3 + 2);
  *((_BYTE *)this + 56) = *((_DWORD *)a3 + 6) != 0;
  v6 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              592LL);
  if ( v6 )
    v7 = CHwndRenderTarget::CHwndRenderTarget(v6, *((struct CComposition **)this + 2));
  else
    v7 = 0LL;
  if ( v7 )
  {
    if ( *((_DWORD *)a3 + 6) )
      *((_BYTE *)v7 + 569) = 1;
    *((_QWORD *)this + 5) = v7;
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x25u);
  }
  return v3;
}
