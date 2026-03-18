/*
 * XREFs of ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800B8944
 * Callers:
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AE114 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x1801256A0 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800AE328 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B08C8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x1800F4A90 (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 */

__int64 __fastcall CFlipChain::CacheSharedHandle(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int a5)
{
  CDisplaySet *v5; // r14
  char v6; // r15
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // r15
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // ecx
  int v23; // edx
  __int64 v24; // rcx
  int SharedHandleBitmap; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-60h]
  unsigned int v28; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v29[12]; // [rsp+64h] [rbp-1Ch] BYREF
  int v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+74h] [rbp-Ch]
  struct CBitmapOfDeviceBitmaps *v32; // [rsp+78h] [rbp-8h] BYREF

  v5 = 0LL;
  v28 = 0;
  v6 = a4;
  *(_QWORD *)&v29[4] = 0LL;
  v9 = CFlipChain::SurfaceIndexFromDisplayIds(this, a2, a3, a4, &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179120, 4u, v9, 0x356u);
    goto LABEL_17;
  }
  if ( !*((_DWORD *)this + 38) )
  {
    v11 = CBitmapOfDeviceBitmaps::Create(
            *((_DWORD *)this + 14),
            *((_DWORD *)this + 15),
            (CFlipChain *)((char *)this + 280),
            &v32);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D1u);
    if ( v10 < 0 )
    {
      v27 = 860;
      v12 = v10;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, &dword_180179120, 4u, v12, v27);
      goto LABEL_17;
    }
    v13 = CFlipChain::AddBuffer(this, &v32);
    v10 = v13;
    if ( v13 < 0 )
    {
      v27 = 863;
      v12 = v13;
      goto LABEL_10;
    }
  }
  v14 = v28;
  v15 = a5;
  v16 = a5 + 11LL * v28;
  v32 = *(struct CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 27) + 8 * v16 + 24);
  if ( v32 )
  {
LABEL_16:
    v6 = a4;
    goto LABEL_17;
  }
  *(_DWORD *)v29 = 0;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(0LL, (const struct CDisplaySet **)&v29[4]);
    v10 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179120, 4u, CurrentDisplaySet, 0x373u);
      v5 = *(CDisplaySet **)&v29[4];
      goto LABEL_16;
    }
    v5 = *(CDisplaySet **)&v29[4];
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(*(CDisplaySet **)&v29[4], a3, (struct DisplayId *)v29);
    v10 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179120, 4u, DisplayIdFromMonitor, 0x376u);
      goto LABEL_16;
    }
    v20 = *(_DWORD *)v29;
    v15 = a5;
  }
  else
  {
    v20 = DisplayId::None;
  }
  v21 = *((_DWORD *)this + 15);
  v22 = *((_DWORD *)this + 70);
  v23 = *((_DWORD *)this + 14);
  *(_DWORD *)&v29[8] = 0;
  *(_QWORD *)v29 = v22;
  v24 = *((_QWORD *)this + 4);
  v31 = v21;
  v30 = v23;
  SharedHandleBitmap = CD3DDeviceManager::CreateSharedHandleBitmap(
                         (int)&qword_1801A3D80,
                         *(_QWORD *)(*((_QWORD *)this + 16) + 16 * v15),
                         v28,
                         (int)&v29[4],
                         (__int64)v29,
                         1,
                         1,
                         (struct _GUID *)(v24 + 252),
                         a2,
                         v20,
                         (__int64)&v32);
  v10 = SharedHandleBitmap;
  if ( SharedHandleBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179120, 4u, SharedHandleBitmap, 0x39Cu);
    goto LABEL_16;
  }
  *(_DWORD *)(88 * v14 + *((_QWORD *)this + 27) + 20) = *(_DWORD *)v29;
  *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v16 + 24) = v32;
  v6 = a4;
  if ( a4 && !*((_BYTE *)this + 274) )
  {
    v26 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 274) = 1;
    ++*(_DWORD *)(v26 + 208);
  }
LABEL_17:
  if ( v10 == -2003304294 )
    *((_BYTE *)this + 272) |= 1u;
  if ( v6 && a3 == *((HMONITOR *)this + 32) && v10 == -2147024809 )
    *((_BYTE *)this + 272) |= 2u;
  if ( v5 )
    CDisplaySet::Release(v5);
  return (unsigned int)v10;
}
