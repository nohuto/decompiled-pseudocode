/*
 * XREFs of RaidDriverGetName @ 0x1C00090F8
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDevmapEntry @ 0x1C000D470 (RaidAdapterCreateDevmapEntry.c)
 *     StorEtwMiniportEvent @ 0x1C003594C (StorEtwMiniportEvent.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00375D4 (StorpLogPhysicalTopologyInfo.c)
 *     RaidInitializeAdapter @ 0x1C004DBB8 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 v5; // ax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 result; // ax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (v5 = *(_WORD *)(a1 + 40)) != 0 )
  {
    v6 = v5 >> 1;
    if ( !v6 )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = (unsigned int)(v6 - 1);
      if ( *(_WORD *)(v2 + 2 * v7) == 92 )
        break;
      --v6;
      if ( !(_DWORD)v7 )
        goto LABEL_6;
    }
    v9 = v2 + 2LL * (unsigned int)(v6 - 1);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v8 = v9 + 2;
    goto LABEL_10;
  }
LABEL_6:
  v8 = v2;
LABEL_10:
  v10 = *(_WORD *)(a1 + 40);
  *(_QWORD *)(a2 + 8) = v8;
  v11 = v2 + v10 - v8;
  *(_WORD *)a2 = v11;
  result = v11 + 2;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
