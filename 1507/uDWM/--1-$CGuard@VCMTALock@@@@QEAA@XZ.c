/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003EE44
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18000A260 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18003DC50 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18003DCD0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18003DD70 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18003EA70 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18003ED90 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003F110 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180067700 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009DDC0 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x18009E220 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18009E440 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009E6C0 (-GetAlphaMode@CBitmapLock@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapLock@@UEAA?AW4ColorSpace@@XZ @ 0x18009E710 (-GetColorSpace@CBitmapLock@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18009E760 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18009E7F0 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
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
