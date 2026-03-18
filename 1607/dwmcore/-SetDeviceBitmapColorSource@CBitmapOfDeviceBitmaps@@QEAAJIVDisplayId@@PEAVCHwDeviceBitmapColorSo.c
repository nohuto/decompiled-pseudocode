/*
 * XREFs of ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180083320 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180083360 (-AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800A4064 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800A40B0 (-Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  const struct IDeviceResourceNotify *v4; // rbx
  char v6; // r14
  struct IDeviceResourceNotify *v9; // rdx
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rcx
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v13; // rdi
  int v14; // eax
  __int64 v16; // rcx
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v4 = 0LL;
  v6 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v9 = (struct IDeviceResourceNotify *)(a1 + 264);
  if ( !a1 )
    v9 = 0LL;
  v10 = CHwBitmapColorSource::AddResourceNotifier((CHwBitmapColorSource *)(a4 + 104), v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2B2u);
    goto LABEL_11;
  }
  LODWORD(v12) = *(_DWORD *)(a1 + 320);
  v6 = 1;
  while ( (_DWORD)v12 )
  {
    v12 = (unsigned int)(v12 - 1);
    v13 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(*(_QWORD *)(a1 + 296) + 96 * v12);
    if ( *(_DWORD *)v13 == a2 )
      goto LABEL_7;
  }
  v13 = 0LL;
LABEL_7:
  v17 = v13;
  if ( v13 )
  {
    v16 = *((_QWORD *)v13 + 2);
    if ( v16 )
      CHwBitmapColorSource::RemoveResourceNotifier(
        (CHwBitmapColorSource *)(v16 + 104),
        (const struct IDeviceResourceNotify *)(a1 + 264));
    CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct(v13);
  }
  else
  {
    v14 = DynArrayImpl<1>::AddMultiple(a1 + 296, 96LL, 1LL, &v17);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2C3u);
      goto LABEL_11;
    }
    v13 = v17;
  }
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct(v13, a2, v18, a4);
LABEL_11:
  if ( v11 < 0 && v6 )
  {
    if ( a1 )
      v4 = (const struct IDeviceResourceNotify *)(a1 + 264);
    CHwBitmapColorSource::RemoveResourceNotifier((CHwBitmapColorSource *)(a4 + 104), v4);
  }
  return (unsigned int)v11;
}
