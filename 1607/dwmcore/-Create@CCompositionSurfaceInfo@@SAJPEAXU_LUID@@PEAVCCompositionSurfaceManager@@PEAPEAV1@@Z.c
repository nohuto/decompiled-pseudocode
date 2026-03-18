/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800B25AC
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180037D5C (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  unsigned int v4; // edi
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v9; // rax
  CBitmapOfDeviceBitmaps *v10; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v8 == WPF::ProcessHeapImpl::AllocClear )
    v9 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x168uLL);
  else
    v9 = (_QWORD *)v8(WPF::g_pProcessHeap, 360LL);
  v10 = (CBitmapOfDeviceBitmaps *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    v9[3] = a3;
    *v9 = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
    v9[2] = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
    v9[5] = a2;
    v9[6] = v9;
    v9[10] = v9 + 14;
    v9[11] = v9 + 14;
    *((_DWORD *)v9 + 24) = 1;
    *(_QWORD *)((char *)v9 + 100) = 1LL;
    *((_DWORD *)v9 + 34) = 2;
    v9[39] = v9 + 43;
    v9[40] = v9 + 43;
    *((_DWORD *)v9 + 82) = 1;
    *(_QWORD *)((char *)v9 + 332) = 1LL;
    *((_BYTE *)v9 + 352) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v10);
    v11 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v10 + 3) + 8LL);
    Buffer[0] = *((_QWORD *)v10 + 5);
    Buffer[1] = v10;
    if ( RtlInsertElementGenericTable(v11, Buffer, 0x10u, &NewElement) )
    {
      *((_QWORD *)v10 + 4) = a1;
      *a4 = v10;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Cu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Au);
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
      CMILCOMBase::InternalRelease(v10);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Au);
  }
  return v4;
}
