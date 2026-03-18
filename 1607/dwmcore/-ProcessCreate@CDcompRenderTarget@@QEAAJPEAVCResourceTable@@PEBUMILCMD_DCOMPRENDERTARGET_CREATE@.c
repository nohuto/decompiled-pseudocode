/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B6F68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // edi
  CHwndRenderTarget *v5; // rax
  CHwndRenderTarget *v6; // rcx

  v3 = 0;
  *((_QWORD *)this + 15) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 128) = *((_DWORD *)a3 + 8) != 0;
  if ( *((_QWORD *)this + 14) )
    goto LABEL_8;
  v5 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              784LL);
  if ( v5 )
    v6 = CHwndRenderTarget::CHwndRenderTarget(v5, *((struct CComposition **)this + 2));
  else
    v6 = 0LL;
  *((_QWORD *)this + 14) = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v6 + 8LL))(v6);
LABEL_8:
    *(_BYTE *)(*((_QWORD *)this + 14) + 762LL) = *((_BYTE *)this + 128);
    *(_QWORD *)(*((_QWORD *)this + 14) + 424LL) = *((_QWORD *)this + 15);
    return v3;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28u);
  return v3;
}
