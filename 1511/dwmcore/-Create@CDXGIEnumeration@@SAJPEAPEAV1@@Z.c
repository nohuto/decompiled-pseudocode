/*
 * XREFs of ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18006A534
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006A454 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18006B890 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ??0CDXGIEnumeration@@AEAA@XZ @ 0x18006BEF8 (--0CDXGIEnumeration@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::Create(struct CDXGIEnumeration **a1)
{
  CDXGIEnumeration *v2; // rax
  CDXGIEnumeration *v3; // rdi
  int inited; // eax
  unsigned int v5; // esi

  v2 = (CDXGIEnumeration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             112LL);
  if ( v2 )
    v3 = CDXGIEnumeration::CDXGIEnumeration(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    (**(void (__fastcall ***)(CDXGIEnumeration *))v3)(v3);
    inited = CDXGIEnumeration::InitDXGI(v3);
    v5 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, inited, 0x3Cu);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, -2147024882, 0x38u);
  }
  return v5;
}
