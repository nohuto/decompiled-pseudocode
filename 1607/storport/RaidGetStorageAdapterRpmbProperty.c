/*
 * XREFs of RaidGetStorageAdapterRpmbProperty @ 0x1C002A070
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005736C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterRpmbProperty(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r8

  v2 = 0;
  v3 = *(_DWORD **)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 0x14u )
  {
    *v3 = 1;
    v3[1] = 20;
    v3[3] = a1[1411];
    v3[2] = a1[1410];
    v3[4] = a1[1418];
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v2;
}
