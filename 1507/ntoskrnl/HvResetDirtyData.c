/*
 * XREFs of HvResetDirtyData @ 0x14044D6FC
 * Callers:
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1405205A0 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 80) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 72));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 88) = 0;
  }
  return result;
}
