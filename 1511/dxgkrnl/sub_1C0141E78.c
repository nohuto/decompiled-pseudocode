/*
 * XREFs of sub_1C0141E78 @ 0x1C0141E78
 * Callers:
 *     sub_1C0141B0C @ 0x1C0141B0C (sub_1C0141B0C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0141E78(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)a1 == *a2
      && *(_DWORD *)(a1 + 4) == a2[1]
      && *(_DWORD *)(a1 + 8) == a2[2]
      && *(_DWORD *)(a1 + 12) == a2[3]
      && *(_DWORD *)(a1 + 28) == a2[7]
      && *(_DWORD *)(a1 + 32) == a2[8]
      && *(_DWORD *)(a1 + 24) == a2[6]
      && (((unsigned __int8)a2[10] ^ *(_BYTE *)(a1 + 40)) & 0x10) == 0;
}
