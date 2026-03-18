/*
 * XREFs of ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180099634
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180151C84 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180090140 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180090220 (-AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::AddRealization(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct CBitmapRealization *a2)
{
  __int64 v2; // rbx
  char v5; // bp
  struct IDeviceResourceNotify *v6; // rdx
  CBitmapRealization *v7; // rcx
  __int64 (__fastcall *v8)(CBitmapRealization *, struct IDeviceResourceNotify *); // rax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edx
  void (*v13)(void); // rax
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  CBitmapRealization *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v2 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)this )
    v6 = (struct IDeviceResourceNotify *)(*(_QWORD *)this + 16LL);
  else
    v6 = 0LL;
  v7 = (struct CBitmapRealization *)((char *)a2 + 120);
  v8 = *(__int64 (__fastcall **)(CBitmapRealization *, struct IDeviceResourceNotify *))(*((_QWORD *)a2 + 15) + 24LL);
  if ( v8 == CBitmapRealization::AddResourceNotifier )
    v9 = CBitmapRealization::AddResourceNotifier(v7, v6);
  else
    v9 = v8(v7, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x643u);
    goto LABEL_13;
  }
  v11 = *((_DWORD *)this + 14);
  v5 = 1;
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v10 = 0;
    if ( v12 <= *((_DWORD *)this + 13) )
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v11) = v17;
      *((_DWORD *)this + 14) = v12;
      goto LABEL_9;
    }
    v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 32, 8LL, 1LL, &v17);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x646u);
    goto LABEL_13;
  }
LABEL_9:
  v13 = *(void (**)(void))(*(_QWORD *)v17 + 8LL);
  if ( (char *)v13 == (char *)CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef(v17);
  else
    v13();
  if ( *((_DWORD *)this + 14) == 1 )
    *((_QWORD *)this + 16) = **(_QWORD **)&CBitmapRealization::GetAdapterLuid(v17, &v16);
LABEL_13:
  if ( v10 < 0 && v5 )
  {
    if ( *(_QWORD *)this )
      v2 = *(_QWORD *)this + 16LL;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v17 + 15) + 32LL))((char *)v17 + 120, v2);
  }
  return (unsigned int)v10;
}
