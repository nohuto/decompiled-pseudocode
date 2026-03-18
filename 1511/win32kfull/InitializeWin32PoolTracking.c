/*
 * XREFs of InitializeWin32PoolTracking @ 0x1C01129A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C0150AE8 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?StopWin32PoolTracking@@YAXXZ @ 0x1C0150E14 (-StopWin32PoolTracking@@YAXXZ.c)
 *     ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C01F6CA8 (-LoadWin32PoolTrackingSettings@@YAXXZ.c)
 */

__int64 InitializeWin32PoolTracking()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdx
  bool v4; // al
  _DWORD *v5; // r8
  int v6; // r9d
  __int64 v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x50uLL, 0x36497355u);
  v1 = 0;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[8] = 0LL;
    *((_BYTE *)PoolWithTag + 72) = 1;
    gpLeakTrackingAllocator = PoolWithTag;
    if ( !gSessionId )
    {
      v4 = IsWin32kRefreshed();
      if ( gpxsGlobals && (*((_DWORD *)gpxsGlobals + 8) = v4, gpxsGlobals) && !v4 )
        LoadWin32PoolTrackingSettings();
      else
        StopWin32PoolTracking();
    }
    v2 = gpxsGlobals;
    if ( gpxsGlobals && !*((_DWORD *)gpxsGlobals + 8) && *((_DWORD *)gpxsGlobals + 9) )
    {
      v5 = gpLeakTrackingAllocator;
      do
      {
        v6 = *(_DWORD *)(v2[5] + 4LL * v1);
        v7 = (unsigned int)v5[11];
        if ( (_DWORD)v7 != 10 )
        {
          v5[v7] = v6;
          ++v5[11];
          v5[10] |= v6;
          v2 = gpxsGlobals;
        }
        ++v1;
      }
      while ( v1 < *((_DWORD *)v2 + 9) );
    }
    return 1LL;
  }
  else
  {
    gpLeakTrackingAllocator = &unk_1C02E09E0;
    return 0LL;
  }
}
