/*
 * XREFs of HvIsCurrentLogSwappable @ 0x1404C2844
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1403D4100 (CmpGenerateFlushControlData.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // r8

  v1 = *(_DWORD *)(a1 + 148);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = 4;
  if ( v1 == 4 )
    v2 = 5;
  v3 = HvpLogTypeToLogArrayIndex(v2);
  return *(_BYTE *)(v3 + v4 + 172) == 0;
}
