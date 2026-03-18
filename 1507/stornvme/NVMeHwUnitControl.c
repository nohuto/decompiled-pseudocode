/*
 * XREFs of NVMeHwUnitControl @ 0x1C0001D90
 * Callers:
 *     <none>
 * Callees:
 *     NVMeDeviceCompleteAllIORequests @ 0x1C0004BCC (NVMeDeviceCompleteAllIORequests.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rax

  if ( !a2 )
  {
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( *(_DWORD *)a3 > 1u )
      *(_BYTE *)(a3 + 5) = 1;
    if ( *(_DWORD *)a3 > 2u )
      *(_BYTE *)(a3 + 6) = 1;
    if ( *(_DWORD *)a3 > 3u )
      *(_BYTE *)(a3 + 7) = 1;
    if ( *(_DWORD *)a3 > 0xAu )
      *(_BYTE *)(a3 + 14) = 1;
    return 0LL;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a3 + 8) == 2 )
      *(_DWORD *)(a1 + 20) ^= (*(_DWORD *)(a1 + 20) ^ ((*(_BYTE *)(a3 + 12) != 0) << 6)) & 0x40;
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v6 >= *(_DWORD *)(a1 + 140) || !*(_QWORD *)(a1 + 8 * v6 + 1168);
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 7 )
    {
      NVMeDeviceCompleteAllIORequests(a1, *(unsigned __int8 *)(a3 + 10));
      return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
