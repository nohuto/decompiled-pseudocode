/*
 * XREFs of HvResetLogFileStatusAll @ 0x14055BA34
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 */

void __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  bool v1; // zf
  unsigned int v2; // eax
  __int64 v3; // rdx

  v1 = *(_DWORD *)(a1 + 148) == 1;
  *(_BYTE *)(a1 + 172) = 0;
  if ( !v1 )
  {
    v2 = HvpLogTypeToLogArrayIndex(5);
    *(_BYTE *)(v2 + v3 + 172) = 0;
  }
}
