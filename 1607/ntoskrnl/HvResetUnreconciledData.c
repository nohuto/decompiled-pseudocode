/*
 * XREFs of HvResetUnreconciledData @ 0x14047E8D0
 * Callers:
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x14060635C (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
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
