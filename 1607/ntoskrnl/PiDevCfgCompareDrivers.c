/*
 * XREFs of PiDevCfgCompareDrivers @ 0x1401CE878
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgCompareDrivers(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8

  v2 = *(_DWORD *)(a1 + 168);
  v3 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 4) != 0 )
  {
    if ( (v3 & 4) == 0 )
      return 1LL;
  }
  else if ( (v3 & 4) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (v2 & 2) != 0 )
  {
    if ( (v3 & 2) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 1LL;
  }
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(a2 + 108);
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  if ( v4 != v5 )
    return 1LL;
  v7 = *(_QWORD *)(a1 + 112);
  v8 = *(_QWORD *)(a2 + 112);
  if ( v7 > v8 )
    return 0xFFFFFFFFLL;
  if ( v7 != v8 )
    return 1LL;
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(_QWORD *)(a2 + 120);
  if ( v9 > v10 )
    return 0xFFFFFFFFLL;
  if ( v9 != v10 )
    return 1LL;
  result = 0LL;
  if ( !*(_QWORD *)(a1 + 136) )
  {
    if ( !*(_QWORD *)(a2 + 136) )
      return result;
    return 1LL;
  }
  if ( !*(_QWORD *)(a2 + 136) )
    return 0xFFFFFFFFLL;
  return result;
}
