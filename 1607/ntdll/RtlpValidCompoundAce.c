/*
 * XREFs of RtlpValidCompoundAce @ 0x1800E28A0
 * Callers:
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int8 v4; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && *(_BYTE *)(a1 + 13) <= 0xFu
        && (v3 = 4 * *(unsigned __int8 *)(a1 + 13) + 8, v2 >= v3 + 24)
        && *(_BYTE *)(v3 + a1 + 12) == 1
        && (v4 = *(_BYTE *)(v3 + a1 + 13), v4 <= 0xFu)
        && v2 >= 4 * v4 + 8 + v3 + 12;
  return result;
}
