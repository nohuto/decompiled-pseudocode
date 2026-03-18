/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C01523A4
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 */

__int64 xxxNotifyShellOfWallpaperChange(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 160LL);
    if ( v2 )
    {
      v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v6;
      ++*(_DWORD *)(v2 + 8);
      v6[1] = v2;
      v0 = xxxSendNotifyMessage((struct tagWND *)v2, 0x34u, 4uLL, 0LL, 1);
      ThreadUnlock1(v4, v3);
    }
  }
  return v0;
}
