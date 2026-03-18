/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18008A0A8
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800896B4 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  __int64 v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  unsigned int v10; // esi
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         240LL);
  v8 = (CBitmapOfDeviceBitmaps *)v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 24) = a3;
    *(_QWORD *)v7 = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v7 + 16) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
    *(struct _LUID *)(v7 + 40) = a2;
    *(_QWORD *)(v7 + 72) = -1LL;
    *(_QWORD *)(v7 + 48) = v7;
    *(_DWORD *)(v7 + 112) = 0;
    *(_QWORD *)(v7 + 88) = v7 + 120;
    *(_QWORD *)(v7 + 96) = v7 + 120;
    *(_DWORD *)(v7 + 104) = 1;
    *(_DWORD *)(v7 + 108) = 1;
    *(_DWORD *)(v7 + 144) = 2;
    *(_DWORD *)(v7 + 224) = 0;
    *(_QWORD *)(v7 + 200) = v7 + 232;
    *(_QWORD *)(v7 + 208) = v7 + 232;
    *(_DWORD *)(v7 + 216) = 1;
    *(_DWORD *)(v7 + 220) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v9 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v8 + 3) + 8LL);
    Buffer[0] = *((_QWORD *)v8 + 5);
    Buffer[1] = v8;
    if ( RtlInsertElementGenericTable(v9, Buffer, 0x10u, &NewElement) )
    {
      *((_QWORD *)v8 + 4) = a1;
      v10 = 0;
      *a4 = v8;
      v8 = 0LL;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Au);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
    }
    if ( v8 )
      CMILCOMBase::InternalRelease(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Au);
  }
  return v10;
}
