/*
 * XREFs of _TTLimitDeepTargetingPoint @ 0x1C024CC24
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C024C3B8 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     _TTHmToPixels @ 0x1C024C914 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C024CC78 (_TTPixelsToHm.c)
 */

__int64 __fastcall TTLimitDeepTargetingPoint(int a1, unsigned int a2, int *a3)
{
  int v3; // edi
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  int v8; // r10d

  v3 = *a3;
  result = TTPixelsToHm(abs32(a1 - *a3), a2);
  if ( (int)result > 200 )
  {
    result = TTHmToPixels(200, a2);
    if ( v6 <= v3 )
      v8 = result + v6;
    else
      v8 = v6 - result;
    *v7 = v8;
  }
  return result;
}
