/*
 * XREFs of RtlMergeBitMaps @ 0x14009CD90
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     MiSelectRelocationStartHint @ 0x14046E94C (MiSelectRelocationStartHint.c)
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     HvUpdateUnreconciledVector @ 0x1404BEA20 (HvUpdateUnreconciledVector.c)
 *     HvFoldBackUnreconciledData @ 0x140605EFC (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1406112B8 (HvpRecoverData.c)
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
