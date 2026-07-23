/*
 * XREFs of HvIsCurrentLogSwappable @ 0x14047D5E4
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14047F848 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // r8

  v1 = *(_DWORD *)(a1 + 148);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = 4LL;
  if ( v1 == 4 )
    v2 = 5LL;
  v3 = HvpLogTypeToLogArrayIndex(v2);
  return *(_BYTE *)(v3 + v4 + 172) == 0;
}
