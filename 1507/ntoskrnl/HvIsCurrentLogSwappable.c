/*
 * XREFs of HvIsCurrentLogSwappable @ 0x1405599F8
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14044CDD8 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // r9
  unsigned __int8 v3; // dl
  unsigned int v4; // eax

  v1 = *(_DWORD *)(a1 + 148);
  v2 = a1;
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v3 = 0;
  if ( v1 == 4 )
    v4 = HvpLogTypeToLogArrayIndex(5);
  else
    v4 = 0;
  return *(_BYTE *)(v4 + v2 + 172) == v3;
}
