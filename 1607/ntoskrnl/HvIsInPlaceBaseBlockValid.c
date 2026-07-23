/*
 * XREFs of HvIsInPlaceBaseBlockValid @ 0x140603AB8
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 */

bool __fastcall HvIsInPlaceBaseBlockValid(_DWORD *a1)
{
  unsigned int v2; // ecx
  int v3; // eax
  __int64 v4; // r9
  bool result; // al

  result = 0;
  if ( *a1 == 1718052210 && !a1[7] && a1[5] <= 1u && (unsigned int)(a1[6] - 3) <= 3 && a1[8] == 1 )
  {
    v2 = a1[10];
    if ( v2 )
    {
      if ( (v2 & 0xFFF) == 0 && v2 <= 0x7FFFE000 )
      {
        v3 = HvpHeaderCheckSum(a1);
        if ( v3 == *(_DWORD *)(v4 + 508) )
          return 1;
      }
    }
  }
  return result;
}
