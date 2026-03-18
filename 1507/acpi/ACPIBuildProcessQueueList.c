/*
 * XREFs of ACPIBuildProcessQueueList @ 0x1C001BB70
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001B6A0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     <none>
 */

__int64 ACPIBuildProcessQueueList()
{
  __int64 v0; // rax
  __int64 *v1; // rdx
  __int64 **v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // r8

  v0 = AcpiBuildQueueList;
  if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
  {
    do
    {
      v1 = *(__int64 **)v0;
      if ( (*(_DWORD *)(v0 + 20) & 0x40) == 0 )
      {
        v2 = *(__int64 ***)(v0 + 8);
        if ( v1[1] != v0 || *v2 != (__int64 *)v0 )
          __fastfail(3u);
        *v2 = v1;
        v1[1] = (__int64)v2;
        v3 = *(_QWORD *)(v0 + 128);
        v4 = *(__int64 **)(v3 + 8);
        *(_QWORD *)v0 = v3;
        *(_QWORD *)(v0 + 8) = v4;
        if ( *v4 != v3 )
          __fastfail(3u);
        *v4 = v0;
        *(_QWORD *)(v3 + 8) = v0;
        *(_DWORD *)(v0 + 20) &= ~0x1000u;
        *(_QWORD *)(v0 + 128) = 0LL;
      }
      v0 = (__int64)v1;
    }
    while ( v1 != &AcpiBuildQueueList );
  }
  return 0LL;
}
