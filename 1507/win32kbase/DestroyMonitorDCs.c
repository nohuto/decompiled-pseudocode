/*
 * XREFs of DestroyMonitorDCs @ 0x1C000AF60
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     HdevFromMonitor @ 0x1C000AFD0 (HdevFromMonitor.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 */

__int64 DestroyMonitorDCs()
{
  _QWORD *v0; // rcx
  __int64 *v1; // rdi
  __int64 v2; // rbx
  int v4; // eax
  int v5; // eax

  GreLockVisRgn(*(_QWORD *)gpDispInfo);
  v0 = (_QWORD *)gpDispInfo;
  v1 = (__int64 *)(gpDispInfo + 64);
  v2 = *(_QWORD *)(gpDispInfo + 64);
  if ( v2 )
  {
    do
    {
      if ( *(_QWORD *)(v2 + 88) && (unsigned int)HdevFromMonitor() == -1 )
      {
        v4 = *(_DWORD *)(v2 + 64);
        if ( v4 >= 0 )
        {
          DestroyCacheDC(v1, *(_QWORD *)(v2 + 8));
        }
        else
        {
          *(_QWORD *)(v2 + 88) = 0LL;
          v5 = v4 | 0x4000000;
          *(_DWORD *)(v2 + 64) = v5;
          if ( (v5 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap_0();
            *(_DWORD *)(v2 + 64) &= ~0x4000u;
            *(_QWORD *)(v2 + 32) = 0LL;
          }
        }
      }
      if ( v2 == *v1 )
        v1 = (__int64 *)v2;
      v2 = *v1;
    }
    while ( *v1 );
    v0 = (_QWORD *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v0);
}
