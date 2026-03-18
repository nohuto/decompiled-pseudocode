/*
 * XREFs of ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164918
 * Callers:
 *     ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x18010BF40 (-ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x1800B87F0 (-FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164A18 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 */

__int64 __fastcall RealizeBitmapSource(
        CDisplayManager *a1,
        const struct _GUID *a2,
        struct IBitmapSource *a3,
        const struct PixelFormatInfo *a4)
{
  int CurrentDisplaySet; // eax
  __int64 v9; // rdx
  unsigned int *v10; // r8
  CDisplaySet *v11; // rbx
  HMONITOR *DisplayByHMonitor; // rax
  unsigned int v13; // ebp
  unsigned int v14; // edi
  __int64 v15; // rsi
  CDisplaySet *v17; // [rsp+30h] [rbp-28h] BYREF

  v17 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(a1, &v17);
  v11 = v17;
  if ( CurrentDisplaySet >= 0 )
  {
    if ( a1 )
    {
      DisplayByHMonitor = CDisplaySet::FindDisplayByHMonitor(v17, (HMONITOR)a1, v10);
      if ( DisplayByHMonitor )
        RealizeBitmapSourceHelper(
          (struct CD3DDeviceManager *)&g_D3DDeviceManager,
          a2,
          (const struct CDisplay *)DisplayByHMonitor,
          a3,
          a4);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x3D5u);
    }
    else
    {
      v13 = *((_DWORD *)v17 + 18);
      v14 = 0;
      if ( v13 )
      {
        v15 = 0LL;
        do
        {
          if ( (int)RealizeBitmapSourceHelper(
                      (struct CD3DDeviceManager *)&g_D3DDeviceManager,
                      a2,
                      *(const struct CDisplay **)(v15 + *((_QWORD *)v11 + 6)),
                      a3,
                      a4) < 0 )
            break;
          ++v14;
          v15 += 8LL;
        }
        while ( v14 < v13 );
      }
    }
  }
  if ( v11 )
    CDisplaySet::Release(v11, v9, (__int64)v10);
  return 0LL;
}
