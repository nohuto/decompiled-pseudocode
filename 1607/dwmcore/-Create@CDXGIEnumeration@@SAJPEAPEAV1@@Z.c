/*
 * XREFs of ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800B6EA8
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DD4 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800367F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ??0CDXGIEnumeration@@AEAA@XZ @ 0x180036D44 (--0CDXGIEnumeration@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::Create(struct CDXGIEnumeration **a1)
{
  CDXGIEnumeration *v2; // rax
  CDXGIEnumeration *v3; // rbx
  int inited; // eax
  unsigned int v5; // edi

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
      MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, inited, 0x3Cu);
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      *a1 = v3;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, -2147024882, 0x38u);
  }
  return v5;
}
