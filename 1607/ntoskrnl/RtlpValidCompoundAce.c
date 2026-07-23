/*
 * XREFs of RtlpValidCompoundAce @ 0x1406851CC
 * Callers:
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al
  __int64 v4; // r8
  unsigned __int8 v5; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && (v3 = *(_BYTE *)(a1 + 13), v3 <= 0xFu)
        && (v4 = 4 * v3 + 8, v2 >= v4 + 24)
        && *(_BYTE *)(v4 + a1 + 12) == 1
        && (v5 = *(_BYTE *)(v4 + a1 + 13), v5 <= 0xFu)
        && v2 >= 4 * v5 + 8 + v4 + 12;
  return result;
}
