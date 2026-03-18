/*
 * XREFs of DestroyMonitorDCs @ 0x1C006BF80
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C006BFF0 (HdevFromMonitor.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v10; // eax
  int v11; // eax

  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
  v5 = (__int64 *)gpDispInfo;
  v6 = (__int64 *)(gpDispInfo + 64);
  v7 = *(_QWORD *)(gpDispInfo + 64);
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)(v7 + 88);
      if ( v8 && (unsigned int)HdevFromMonitor(v8) == -1 )
      {
        v10 = *(_DWORD *)(v7 + 64);
        if ( v10 >= 0 )
        {
          DestroyCacheDC(v6, *(_QWORD *)(v7 + 8), v4);
        }
        else
        {
          *(_QWORD *)(v7 + 88) = 0LL;
          v11 = v10 | 0x4000000;
          *(_DWORD *)(v7 + 64) = v11;
          if ( (v11 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap_0();
            *(_DWORD *)(v7 + 64) &= ~0x4000u;
            *(_QWORD *)(v7 + 32) = 0LL;
          }
        }
      }
      if ( v7 == *v6 )
        v6 = (__int64 *)v7;
      v7 = *v6;
    }
    while ( *v6 );
    v5 = (__int64 *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v5, v3, v4);
}
