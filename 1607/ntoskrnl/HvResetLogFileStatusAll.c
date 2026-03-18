/*
 * XREFs of HvResetLogFileStatusAll @ 0x1404F0AF4
 * Callers:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     HvSyncHive @ 0x14060635C (HvSyncHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x140480DF4 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1);
  }
  else
  {
    v1 = HvpLogTypeToLogArrayIndex(4);
    *(_BYTE *)(v1 + v2 + 172) = 0;
    result = HvpLogTypeToLogArrayIndex(5);
  }
  *(_BYTE *)((unsigned int)result + v4 + 172) = 0;
  return result;
}
