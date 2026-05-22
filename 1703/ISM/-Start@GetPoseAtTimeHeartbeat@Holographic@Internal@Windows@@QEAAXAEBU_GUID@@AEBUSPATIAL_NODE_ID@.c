/*
 * XREFs of ?Start@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x180090C84
 * Callers:
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Start(
        Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  volatile __int32 *v6; // rcx
  volatile __int32 *v7; // rdx
  __int64 v8; // r8
  volatile __int32 *v9; // rdx
  __int64 v10; // r8
  volatile __int32 *v11; // rdx
  __int64 v12; // r8
  volatile __int32 *v13; // rdx
  __int64 v14; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 6, PerformanceCount.QuadPart, 0LL) )
  {
    *(struct _GUID *)this = *a2;
    CoCreateGuid((GUID *)this + 1);
    *((_OWORD *)this + 2) = *(_OWORD *)a3;
    if ( (char *)this + 60 != (char *)this + 244 )
    {
      v6 = (volatile __int32 *)((char *)this + 96);
      do
      {
        v7 = v6 - 9;
        v8 = 3LL;
        do
        {
          _InterlockedExchange(v7++, 0);
          --v8;
        }
        while ( v8 );
        v9 = v6 - 6;
        v10 = 6LL;
        do
        {
          _InterlockedExchange(v9++, 0);
          --v10;
        }
        while ( v10 );
        v11 = v6;
        v12 = 6LL;
        do
        {
          _InterlockedExchange(v11++, 0);
          --v12;
        }
        while ( v12 );
        v13 = v6 + 6;
        v14 = 4LL;
        do
        {
          _InterlockedExchange(v13, 0);
          _InterlockedExchange(v13 + 1, 0);
          v13 += 2;
          --v14;
        }
        while ( v14 );
        v6 += 23;
      }
      while ( v6 - 9 != (volatile __int32 *)((char *)this + 244) );
    }
  }
}
