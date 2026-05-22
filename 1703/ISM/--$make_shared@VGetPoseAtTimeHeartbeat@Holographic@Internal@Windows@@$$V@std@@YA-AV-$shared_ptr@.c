/*
 * XREFs of ??$make_shared@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@$$V@std@@YA?AV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@0@XZ @ 0x18008CA64
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Windows::Internal::Holographic::GetPoseAtTimeHeartbeat,>(_QWORD *a1)
{
  char *v2; // r8
  _DWORD *v3; // rdx
  volatile __int32 *v4; // rcx
  volatile __int32 *v5; // r9
  __int64 v6; // r10
  volatile __int32 *v7; // r9
  __int64 v8; // r10
  volatile __int32 *v9; // r9
  __int64 v10; // r10
  volatile __int32 *v11; // r9
  __int64 v12; // r10
  _QWORD *result; // rax

  v2 = (char *)operator new(0x108uLL);
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<Windows::Internal::Holographic::GetPoseAtTimeHeartbeat>::`vftable';
  if ( v2 != (char *)-16LL )
  {
    *v3 = 0;
    *(_QWORD *)(v2 + 20) = 0LL;
    *((_DWORD *)v2 + 7) = 0;
    *((_DWORD *)v2 + 8) = 0;
    *(_QWORD *)(v2 + 36) = 0LL;
    *((_DWORD *)v2 + 11) = 0;
    *((_DWORD *)v2 + 12) = 0;
    *(_QWORD *)(v2 + 52) = 0LL;
    *((_DWORD *)v2 + 15) = 0;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_DWORD *)v2 + 18) = 0;
    if ( v2 + 76 != v2 + 260 )
    {
      v4 = (volatile __int32 *)(v2 + 112);
      do
      {
        v5 = v4 - 9;
        v6 = 3LL;
        do
        {
          _InterlockedExchange(v5++, 0);
          --v6;
        }
        while ( v6 );
        v7 = v4 - 6;
        v8 = 6LL;
        do
        {
          _InterlockedExchange(v7++, 0);
          --v8;
        }
        while ( v8 );
        v9 = v4;
        v10 = 6LL;
        do
        {
          _InterlockedExchange(v9++, 0);
          --v10;
        }
        while ( v10 );
        v11 = v4 + 6;
        v12 = 4LL;
        do
        {
          _InterlockedExchange(v11, 0);
          _InterlockedExchange(v11 + 1, 0);
          v11 += 2;
          --v12;
        }
        while ( v12 );
        v4 += 23;
      }
      while ( v4 - 9 != (volatile __int32 *)(v2 + 260) );
    }
  }
  a1[1] = v2;
  result = a1;
  *a1 = v3;
  return result;
}
