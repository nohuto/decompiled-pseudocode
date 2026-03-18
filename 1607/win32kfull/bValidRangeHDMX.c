/*
 * XREFs of bValidRangeHDMX @ 0x1C0019B18
 * Callers:
 *     vFindHdmxTable @ 0x1C001ADA0 (vFindHdmxTable.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bValidRangeHDMX(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, unsigned int *a5)
{
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( a3 >= 4 && !__ROR2__(*(_WORD *)a1, 8) )
  {
    v6 = (unsigned __int16)__ROR2__(*(_WORD *)(a1 + 2), 8);
    v7 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
    *a4 = v6;
    *a5 = v7;
    if ( v7 >= *(_DWORD *)(a2 + 552) + 2 && (v7 & 3) == 0 && v7 && v6 <= ((unsigned __int64)a3 - 4) / v7 )
      return 1;
  }
  return result;
}
