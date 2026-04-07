/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18003B110 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180042FE0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180043060 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180043100 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180043F60 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180044000 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180044370 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18006E3B0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009C070 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x18009C490 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18009C6B0 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009C900 (-GetAlphaMode@CBitmapLock@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapLock@@UEAA?AW4ColorSpace@@XZ @ 0x18009C950 (-GetColorSpace@CBitmapLock@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18009C9A0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18009CA30 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
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
