/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658
 * Callers:
 *     ?GetColorSpace@CBitmapLock@@UEAA?AW4ColorSpace@@XZ @ 0x180052190 (-GetColorSpace@CBitmapLock@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800521E0 (-GetAlphaMode@CBitmapLock@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180052230 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800522B0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180052350 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800523D0 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18006FC90 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180080550 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180080750 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180080920 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180083910 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180144570 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1801446B0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801453F0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180145F30 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetAlphaMode@CFormatConverter@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801464D0 (-GetAlphaMode@CFormatConverter@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CFormatConverter@@UEAA?AW4ColorSpace@@XZ @ 0x180146520 (-GetColorSpace@CFormatConverter@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180146580 (-GetPixelFormat@CFormatConverter@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x180146630 (-GetResolution@CFormatConverter@@UEAAJPEAN0@Z.c)
 *     ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1801466F0 (-GetSize@CFormatConverter@@UEAAJPEAI0@Z.c)
 *     ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x1801467D0 (-GetSourceState@CFormatConverter@@UEAA-AW4BitmapSourceState@IBitmapSource@@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180146A10 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
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
