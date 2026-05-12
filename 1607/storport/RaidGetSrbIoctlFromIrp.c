/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x1C0001884
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax

  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 24);
  v9 = *(unsigned int *)(v5 + 16);
  if ( (unsigned int)v9 < 0x1C )
    return 3221225485LL;
  if ( *(_DWORD *)v7 != 28 )
    return 3221225561LL;
  v10 = *(unsigned int *)(v7 + 24) + 28LL;
  if ( v10 > 0xFFFFFFFF )
    return 3221225485LL;
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < (unsigned int)v10 && (unsigned int)v9 < (unsigned int)v10 )
    return 3221225507LL;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  if ( a5 != 1 )
  {
LABEL_17:
    v14 = *(_DWORD *)(v7 + 16);
    if ( v14 != 1771008 )
      goto LABEL_18;
    if ( (unsigned int)v9 < 0x22 )
      return 3221225485LL;
    if ( *(_WORD *)(v7 + 32) != 224 || !*(_BYTE *)(a1 + 64) )
    {
LABEL_18:
      if ( v14 != 1771040 )
        return 0LL;
      if ( (unsigned int)v9 < 0x34 )
        return 3221225485LL;
      if ( *(_DWORD *)(v7 + 36) == 1 || !*(_BYTE *)(a1 + 64) )
      {
        if ( (unsigned int)v9 >= (unsigned int)v10
          && *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) <= v9 )
        {
          return 0LL;
        }
        return 3221225485LL;
      }
    }
    return 3221225506LL;
  }
  v12 = *(_QWORD *)(v7 + 4);
  if ( v12 == *(_QWORD *)"HYBRDISK"
    || v12 == *(_QWORD *)"SCSIDISK"
    || v12 == *(_QWORD *)"FIRMWARE"
    || v12 == *(_QWORD *)"UASPSTOR" )
  {
    v13 = *(_QWORD *)(v7 + 4);
    if ( v13 != *(_QWORD *)"HYBRDISK" && v13 != *(_QWORD *)"FIRMWARE" && *(_BYTE *)(a1 + 64) )
      return 3221225506LL;
    goto LABEL_17;
  }
  return 3221225488LL;
}
