/*
 * XREFs of RtlMergeBitMaps @ 0x1400E1998
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     MiSelectRelocationStartHint @ 0x1403C6B04 (MiSelectRelocationStartHint.c)
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvUpdateUnreconciledVector @ 0x1404A5B34 (HvUpdateUnreconciledVector.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1405ECCC0 (HvpRecoverData.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlMergeBitMaps(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rax

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    v2 = *(_DWORD *)a1;
  v3 = 0LL;
  while ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v2 < 0x20 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v3) |= *(_DWORD *)(v4 + 4 * v3) & ((1 << v2) - 1);
      v2 = 0;
    }
    else
    {
      v2 -= 32;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v3) |= *(_DWORD *)(v4 + 4 * v3);
      v3 = (unsigned int)(v3 + 1);
    }
  }
}
