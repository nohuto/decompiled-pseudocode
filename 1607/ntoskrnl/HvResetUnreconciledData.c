/*
 * XREFs of HvResetUnreconciledData @ 0x14047D624
 * Callers:
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
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
