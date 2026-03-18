/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18009ED68
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18007CEB0 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180002DA0 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18009DB24 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009EC78 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  unsigned int v3; // edi
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CD2DResource *v8; // rax
  CBoundsBitmap *v9; // rbx
  unsigned int (__fastcall *v10)(CBoundsBitmap *); // rax
  struct ID2D1PrivateCompositorCommandList *v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v7 == WPF::ProcessHeapImpl::Alloc )
    v8 = (CD2DResource *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x80uLL);
  else
    v8 = (CD2DResource *)v7(WPF::g_pProcessHeap, 128LL);
  v9 = v8;
  if ( v8 )
  {
    CD2DResource::CD2DResource(v8, a1, 0);
    *((_QWORD *)v9 + 2) = &CD2DResource::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 13) = 0LL;
    *((_QWORD *)v9 + 14) = 0LL;
    *((_DWORD *)v9 + 30) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = *(unsigned int (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v9);
    else
      v10(v9);
    v12 = a2;
    v13 = 0LL;
    if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                         (__int64)v9 + 104,
                         &v13,
                         &v12) )
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
      *a3 = v9;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16u);
      (*(void (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v3;
}
