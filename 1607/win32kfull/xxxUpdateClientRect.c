/*
 * XREFs of xxxUpdateClientRect @ 0x1C02253D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 */

__int64 __fastcall xxxUpdateClientRect(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 112);
  xxxCalcClientRect(a1, &v3, 0);
  result = 1LL;
  *(_OWORD *)(a1 + 128) = v3;
  return result;
}
