/*
 * XREFs of ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18008991C
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801192B8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180046B70 (-AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180046CB4 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::AddRealization(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct CBitmapRealization *a2)
{
  __int64 v2; // rsi
  char v4; // r14
  struct IDeviceResourceNotify *v5; // rbx
  CBitmapRealization *v6; // r15
  __int64 (__fastcall *v7)(CBitmapRealization *, struct IDeviceResourceNotify *); // rbp
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 (__fastcall *v12)(CBitmapOfDeviceBitmaps *); // r15
  int v14; // eax
  int v15; // ebx
  struct _LUID v16; // [rsp+60h] [rbp+8h] BYREF
  CBitmapRealization *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v2 = 0LL;
  v4 = 0;
  if ( *(_QWORD *)this )
    v5 = (struct IDeviceResourceNotify *)(*(_QWORD *)this + 16LL);
  else
    v5 = 0LL;
  v6 = (struct CBitmapRealization *)((char *)a2 + 120);
  v7 = *(__int64 (__fastcall **)(CBitmapRealization *, struct IDeviceResourceNotify *))(*((_QWORD *)a2 + 15) + 24LL);
  if ( v7 == CBitmapRealization::AddResourceNotifier )
    v8 = CBitmapRealization::AddResourceNotifier(v6, v5);
  else
    v8 = v7(v6, v5);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x60Bu);
    goto LABEL_13;
  }
  v10 = *((_DWORD *)this + 16);
  v4 = 1;
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v9 = -2147024362;
    goto LABEL_23;
  }
  v9 = 0;
  if ( v11 > *((_DWORD *)this + 15) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v17);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    v9 = v15;
    if ( v15 >= 0 )
      goto LABEL_9;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x60Eu);
    goto LABEL_13;
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v10) = v17;
  *((_DWORD *)this + 16) = v11;
LABEL_9:
  v12 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v17 + 8LL);
  if ( v12 == CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef(v17);
  else
    v12(v17);
  if ( *((_DWORD *)this + 16) == 1 )
    *(_QWORD *)((char *)this + 100) = **(_QWORD **)&CBitmapRealization::GetAdapterLuid(v17, &v16);
LABEL_13:
  if ( v9 < 0 && v4 )
  {
    if ( *(_QWORD *)this )
      v2 = *(_QWORD *)this + 16LL;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v17 + 15) + 32LL))((char *)v17 + 120, v2);
  }
  return (unsigned int)v9;
}
