/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18002B674
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002B85C (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180051FB0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  void *(*v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CCompositionSurfaceInfo *v8; // rax
  struct CCompositionSurfaceInfo *v9; // rbx
  struct _RTL_GENERIC_TABLE *v10; // rcx
  unsigned int v11; // esi
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v7 == WPF::ProcessHeapImpl::AllocClear )
    v8 = (struct CCompositionSurfaceInfo *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0xE8uLL);
  else
    v8 = (struct CCompositionSurfaceInfo *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v7)(
                                             WPF::g_pProcessHeap,
                                             232LL);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 3) = a3;
    *(_QWORD *)v8 = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
    *((struct _LUID *)v8 + 5) = a2;
    *((_QWORD *)v8 + 6) = v8;
    *((_DWORD *)v8 + 26) = 0;
    *((_QWORD *)v8 + 10) = (char *)v8 + 112;
    *((_QWORD *)v8 + 11) = (char *)v8 + 112;
    *((_DWORD *)v8 + 24) = 1;
    *((_DWORD *)v8 + 25) = 1;
    *((_DWORD *)v8 + 34) = 2;
    *((_DWORD *)v8 + 54) = 0;
    *((_QWORD *)v8 + 24) = (char *)v8 + 224;
    *((_QWORD *)v8 + 25) = (char *)v8 + 224;
    *((_DWORD *)v8 + 52) = 1;
    *((_DWORD *)v8 + 53) = 1;
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v10 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v9 + 3) + 8LL);
    Buffer[0] = *((_QWORD *)v9 + 5);
    Buffer[1] = v9;
    if ( RtlInsertElementGenericTable(v10, Buffer, 0x10u, &NewElement) )
    {
      *((_QWORD *)v9 + 4) = a1;
      v11 = 0;
      *a4 = v9;
      v9 = 0LL;
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Au);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
    }
    if ( v9 )
      CMILCOMBase::InternalRelease(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Au);
  }
  return v11;
}
