/*
 * XREFs of ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508
 * Callers:
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AA714 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180141D98 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800AA560 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B40F8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18010BB5C (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 */

__int64 __fastcall CFlipChain::CacheSharedHandle(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int a5)
{
  CDisplaySet *v5; // r14
  int DisplayIdFromMonitor; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r15
  int CurrentDisplaySet; // eax
  int v17; // eax
  int v18; // r8d
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  CDisplaySet *v26; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]
  struct CBitmapOfDeviceBitmaps *v29; // [rsp+78h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+D8h] [rbp+58h] BYREF

  v5 = 0LL;
  v31 = 0;
  v26 = 0LL;
  DisplayIdFromMonitor = CFlipChain::SurfaceIndexFromDisplayIds(this, a2, a3, a4, &v31);
  v12 = DisplayIdFromMonitor;
  if ( DisplayIdFromMonitor < 0 )
  {
    v24 = 854;
LABEL_5:
    MilInstrumentationCheckHR(0x14u, &dword_1801AE658, 4u, DisplayIdFromMonitor, v24);
    goto LABEL_10;
  }
  if ( !*((_DWORD *)this + 56) )
  {
    v23 = CBitmapOfDeviceBitmaps::Create(
            *((_DWORD *)this + 32),
            *((_DWORD *)this + 33),
            (CFlipChain *)((char *)this + 352),
            &v29);
    v12 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1D1u);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AE658, 4u, v12, 0x35Cu);
      goto LABEL_10;
    }
    DisplayIdFromMonitor = CFlipChain::AddBuffer(this, &v29);
    v12 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      v24 = 863;
      goto LABEL_5;
    }
  }
  v13 = a5;
  v14 = a5 + 11LL * v31;
  v29 = *(struct CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 36) + 8 * v14 + 24);
  if ( v29 )
    goto LABEL_10;
  LODWORD(v25) = 0;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(0LL, &v26);
    v12 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AE658, 4u, CurrentDisplaySet, 0x373u);
      v5 = v26;
      goto LABEL_10;
    }
    v5 = v26;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v26, a3, (struct DisplayId *)&v25);
    v12 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      v24 = 886;
      goto LABEL_5;
    }
    v17 = v25;
    v13 = a5;
  }
  else
  {
    v17 = DisplayId::None;
  }
  v18 = *((_DWORD *)this + 33);
  v19 = *((_DWORD *)this + 88);
  v20 = *((_DWORD *)this + 32);
  v26 = 0LL;
  LODWORD(v25) = v19;
  v21 = *((_QWORD *)this + 4);
  v28 = v18;
  v27 = v20;
  DisplayIdFromMonitor = CD3DDeviceManager::CreateSharedHandleBitmap(
                           (int)&qword_1801F0020,
                           *(_QWORD *)(*((_QWORD *)this + 25) + 16 * v13),
                           v31,
                           (int)&v26,
                           (__int64)&v25,
                           1,
                           1,
                           (struct _GUID *)(v21 + 252),
                           a2,
                           v17,
                           (__int64)&v29);
  v12 = DisplayIdFromMonitor;
  if ( DisplayIdFromMonitor < 0 )
  {
    v24 = 924;
    goto LABEL_5;
  }
  v10 = 88LL * v31;
  *(_DWORD *)(v10 + *((_QWORD *)this + 36) + 20) = v25;
  *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v14 + 24) = v29;
  if ( a4 && !*((_BYTE *)this + 346) )
  {
    v22 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 346) = 1;
    ++*(_DWORD *)(v22 + 208);
  }
LABEL_10:
  if ( v12 == -2003304294 )
    *((_BYTE *)this + 344) |= 1u;
  if ( a4 && v12 == -2147024809 && a3 == *((HMONITOR *)this + 41) )
    *((_BYTE *)this + 344) |= 2u;
  if ( v5 )
    CDisplaySet::Release(v5, v10, v11);
  return (unsigned int)v12;
}
