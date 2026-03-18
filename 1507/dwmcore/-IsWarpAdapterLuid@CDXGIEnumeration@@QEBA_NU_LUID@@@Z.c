/*
 * XREFs of ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18005655C
 * Callers:
 *     ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180005564 (-IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18005577C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDXGIEnumeration::IsWarpAdapterLuid(CDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  v4 = *((_QWORD *)this + 8);
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8 * v3);
    if ( a2 == *(_QWORD *)(v5 + 336) && *(_DWORD *)(v5 + 296) == 5140 && *(_DWORD *)(v5 + 300) == 140 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
