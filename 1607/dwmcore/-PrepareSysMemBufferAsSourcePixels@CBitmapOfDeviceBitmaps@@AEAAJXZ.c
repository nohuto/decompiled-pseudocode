/*
 * XREFs of ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x180179D40
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180179AC0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(CBitmapOfDeviceBitmaps *this)
{
  unsigned __int8 PixelFormatSize; // al
  int v3; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  void **v7; // rsi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  bool IsEmpty; // al
  __int64 v15; // rdx
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-18h]

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 50));
  if ( (PixelFormatSize & 7) != 0 )
  {
    v3 = -2003292288;
    v18 = 1364;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v18);
    return (unsigned int)v3;
  }
  v4 = PixelFormatSize >> 3;
  v5 = v4 * (unsigned __int64)*((unsigned int *)this + 46);
  *((_DWORD *)this + 72) = v4;
  if ( v5 <= 0xFFFFFFFF )
  {
    v6 = (unsigned int)v5 * (unsigned __int64)*((unsigned int *)this + 47);
    *((_DWORD *)this + 71) = v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      *((_DWORD *)this + 70) = v6;
      v7 = (void **)((char *)this + 272);
      v3 = 0;
      if ( this == (CBitmapOfDeviceBitmaps *)-272LL || !(_DWORD)v6 )
      {
        v3 = -2147024809;
      }
      else
      {
        v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v8 == WPF::ProcessHeapImpl::Alloc )
          v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v6);
        else
          v9 = v8(WPF::g_pProcessHeap, (unsigned int)v6);
        *v7 = v9;
        if ( !v9 )
          v3 = -2147024882;
      }
      if ( v3 < 0 )
      {
        v18 = 1382;
        goto LABEL_21;
      }
      memset_0(*v7, 0, *((unsigned int *)this + 70));
      v10 = *((unsigned int *)this + 80);
      if ( (_DWORD)v10 )
      {
        v11 = 96 * v10;
        do
        {
          v12 = *((_QWORD *)this + 37);
          v13 = v11 - 96;
          *(_DWORD *)(v13 + v12 + 68) = 0;
          *(_DWORD *)(v13 + v12 + 64) = 0;
          *(_DWORD *)(v13 + v12 + 60) = 0;
          *(_DWORD *)(v13 + v12 + 56) = 0;
          *(_DWORD *)(v13 + v12 + 84) = 0;
          *(_DWORD *)(v13 + v12 + 80) = 0;
          *(_DWORD *)(v13 + v12 + 76) = 0;
          *(_DWORD *)(v13 + v12 + 72) = 0;
          IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(v13 + v12 + 24));
          *(_BYTE *)(v11 + v15 + 88) = !IsEmpty;
        }
        while ( v16 != 1 );
      }
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x562u);
    }
  }
  else
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x560u);
  }
  return (unsigned int)v3;
}
