/*
 * XREFs of HvResetDirtyData @ 0x140481C90
 * Callers:
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x14060635C (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1404B1F40 (HvpResetPageProtection.c)
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
