/*
 * XREFs of HvResetUnreconciledData @ 0x1403CD990
 * Callers:
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 */

void __fastcall HvResetUnreconciledData(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 104) )
  {
    RtlClearAllBits((PRTL_BITMAP)(a1 + 96));
    *(_DWORD *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 175) = 0;
  }
}
