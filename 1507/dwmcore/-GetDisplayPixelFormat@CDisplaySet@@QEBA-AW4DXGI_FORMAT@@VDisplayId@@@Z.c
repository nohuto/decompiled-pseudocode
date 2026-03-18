/*
 * XREFs of ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180054DD0
 * Callers:
 *     ?GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180049450 (-GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1800EC190 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180132EE0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800553D8 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayPixelFormat(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( (_DWORD)a2 == DisplayId::None )
  {
    if ( !*(_DWORD *)(a1 + 72) )
      return v2;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * *(unsigned int *)(a1 + 40));
  }
  else
  {
    if ( (int)CDisplaySet::GetDisplayIndexFromDisplayId(a1, a2, &v6) < 0 )
      return v2;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v6);
  }
  if ( v4 )
    return *(unsigned int *)(v4 + 884);
  return v2;
}
