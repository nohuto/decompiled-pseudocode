/*
 * XREFs of ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013A9D4
 * Callers:
 *     ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x1800F4C80 (-ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x18006F890 (-FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013AAD4 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 */

__int64 __fastcall RealizeBitmapSource(
        CDisplayManager *a1,
        const struct _GUID *a2,
        struct IBitmapSource *a3,
        const struct PixelFormatInfo *a4)
{
  int CurrentDisplaySet; // eax
  unsigned int *v9; // r8
  CDisplaySet *v10; // rbx
  HMONITOR *DisplayByHMonitor; // rax
  unsigned int v12; // ebp
  unsigned int v13; // edi
  __int64 v14; // rsi
  CDisplaySet *v16; // [rsp+30h] [rbp-28h] BYREF

  v16 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(a1, &v16);
  v10 = v16;
  if ( CurrentDisplaySet >= 0 )
  {
    if ( a1 )
    {
      DisplayByHMonitor = CDisplaySet::FindDisplayByHMonitor(v16, (HMONITOR)a1, v9);
      if ( DisplayByHMonitor )
        RealizeBitmapSourceHelper(
          (struct CD3DDeviceManager *)&g_D3DDeviceManager,
          a2,
          (const struct CDisplay *)DisplayByHMonitor,
          a3,
          a4);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x3E5u);
    }
    else
    {
      v12 = *((_DWORD *)v16 + 18);
      v13 = 0;
      if ( v12 )
      {
        v14 = 0LL;
        do
        {
          if ( (int)RealizeBitmapSourceHelper(
                      (struct CD3DDeviceManager *)&g_D3DDeviceManager,
                      a2,
                      *(const struct CDisplay **)(v14 + *((_QWORD *)v10 + 6)),
                      a3,
                      a4) < 0 )
            break;
          ++v13;
          v14 += 8LL;
        }
        while ( v13 < v12 );
      }
    }
  }
  if ( v10 )
    CDisplaySet::Release(v10);
  return 0LL;
}
