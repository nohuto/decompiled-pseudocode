/*
 * XREFs of HvResetLogFileStatusAll @ 0x1404C4490
 * Callers:
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
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
