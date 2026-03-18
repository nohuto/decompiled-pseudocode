/*
 * XREFs of bConvertDwordToFloat @ 0x1C0071F80
 * Callers:
 *     ProbeAndConvertXFORM @ 0x1C0071ED0 (ProbeAndConvertXFORM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertDwordToFloat(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  *a2 = a1;
  return result;
}
