/*
 * XREFs of ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801383B0
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(CBitmapOfDeviceBitmaps *this)
{
  unsigned __int8 PixelFormatSize; // al
  void **v3; // r9
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  bool IsEmpty; // al
  __int64 v14; // rdx
  int v15; // r9d

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 50));
  if ( (PixelFormatSize & 7) != 0 )
  {
    v4 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x559u);
  }
  else
  {
    v5 = PixelFormatSize >> 3;
    v6 = v5 * *((unsigned int *)this + 46);
    *((_DWORD *)this + 72) = v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = (unsigned int)v6 * (unsigned __int64)*((unsigned int *)this + 47);
      *((_DWORD *)this + 71) = v6;
      if ( v7 <= 0xFFFFFFFF )
      {
        *((_DWORD *)this + 70) = v7;
        v8 = WPF::HrAlloc((WPF *)v6, (unsigned int)v7, (_QWORD *)this + 34, v3);
        v4 = v8;
        if ( v8 >= 0 )
        {
          memset_0(*((void **)this + 34), 0, *((unsigned int *)this + 70));
          v9 = *((unsigned int *)this + 80);
          if ( (_DWORD)v9 )
          {
            v10 = 96 * v9;
            do
            {
              v11 = *((_QWORD *)this + 37);
              v12 = v10 - 96;
              *(_DWORD *)(v12 + v11 + 68) = 0;
              *(_DWORD *)(v12 + v11 + 64) = 0;
              *(_DWORD *)(v12 + v11 + 60) = 0;
              *(_DWORD *)(v12 + v11 + 56) = 0;
              *(_DWORD *)(v12 + v11 + 84) = 0;
              *(_DWORD *)(v12 + v11 + 80) = 0;
              *(_DWORD *)(v12 + v11 + 76) = 0;
              *(_DWORD *)(v12 + v11 + 72) = 0;
              IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(v12 + v11 + 24));
              *(_BYTE *)(v10 + v14 + 88) = !IsEmpty;
            }
            while ( v15 != 1 );
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x56Bu);
        }
      }
      else
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x567u);
      }
    }
    else
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x565u);
    }
  }
  return v4;
}
