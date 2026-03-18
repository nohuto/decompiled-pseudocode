/*
 * XREFs of NVMeHwUnitControl @ 0x1C0004F40
 * Callers:
 *     <none>
 * Callees:
 *     NVMeLunCompleteAllIORequests @ 0x1C00078E0 (NVMeLunCompleteAllIORequests.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000A784 (NVMeGetRichDeviceDescription.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax

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
    if ( *(_DWORD *)a3 > 9u )
      *(_BYTE *)(a3 + 13) = 1;
    if ( *(_DWORD *)a3 > 0xAu )
      *(_BYTE *)(a3 + 14) = 1;
    if ( *(_DWORD *)a3 > 0xBu )
      *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a3 + 8) == 2 )
      *(_DWORD *)(a1 + 20) ^= (*(_DWORD *)(a1 + 20) ^ ((*(_BYTE *)(a3 + 12) != 0) << 6)) & 0x40;
    return 0;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v11 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v11 >= *(_DWORD *)(a1 + 148) || !*(_QWORD *)(a1 + 8 * v11 + 1184);
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0;
  v6 = v5 - 6;
  if ( !v6 )
  {
    v10 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1184);
    if ( v10 )
      *(_DWORD *)(v10 + 20) |= 4u;
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1184);
    if ( v9 )
      *(_DWORD *)(v9 + 20) |= 4u;
    NVMeLunCompleteAllIORequests(a1, *(unsigned __int8 *)(a3 + 10));
    return 0;
  }
  if ( v7 != 1 )
    return 1;
  return NVMeGetRichDeviceDescription(a1, a3) != 0;
}
