/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800270D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180088740 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180088980 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180088B50 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetColorSpace@CBitmapLock@@UEAA?AW4ColorSpace@@XZ @ 0x1800A1FD0 (-GetColorSpace@CBitmapLock@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800A2020 (-GetAlphaMode@CBitmapLock@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800A2070 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800A20F0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800A2190 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800A2210 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A2C10 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180152750 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180152890 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801535D0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180154110 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetAlphaMode@CFormatConverter@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801546B0 (-GetAlphaMode@CFormatConverter@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CFormatConverter@@UEAA?AW4ColorSpace@@XZ @ 0x180154700 (-GetColorSpace@CFormatConverter@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180154760 (-GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x180154810 (-GetResolution@CFormatConverter@@UEAAJPEAN0@Z.c)
 *     ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1801548D0 (-GetSize@CFormatConverter@@UEAAJPEAI0@Z.c)
 *     ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x1801549B0 (-GetSourceState@CFormatConverter@@UEAA-AW4BitmapSourceState@IBitmapSource@@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180154BF0 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CMTALock>::~CGuard<CMTALock>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
    *a1 = 0LL;
  }
}
