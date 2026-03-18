/*
 * XREFs of DestroyMonitorDCs @ 0x1C0054CC0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     HdevFromMonitor @ 0x1C0054D30 (HdevFromMonitor.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  int v7; // eax
  int v8; // eax

  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
  v3 = (__int64 *)gpDispInfo;
  v4 = (__int64 *)(gpDispInfo + 64);
  v5 = *(_QWORD *)(gpDispInfo + 64);
  if ( v5 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 88) && (unsigned int)HdevFromMonitor() == -1 )
      {
        v7 = *(_DWORD *)(v5 + 64);
        if ( v7 >= 0 )
        {
          DestroyCacheDC(v4, *(_QWORD *)(v5 + 8));
        }
        else
        {
          *(_QWORD *)(v5 + 88) = 0LL;
          v8 = v7 | 0x4000000;
          *(_DWORD *)(v5 + 64) = v8;
          if ( (v8 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap_0();
            *(_DWORD *)(v5 + 64) &= ~0x4000u;
            *(_QWORD *)(v5 + 32) = 0LL;
          }
        }
      }
      if ( v5 == *v4 )
        v4 = (__int64 *)v5;
      v5 = *v4;
    }
    while ( *v4 );
    v3 = (__int64 *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v3);
}
