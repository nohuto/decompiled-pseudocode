/*
 * XREFs of pjTable @ 0x1C00B0FA4
 * Callers:
 *     ttfdQueryTrueTypeTable2 @ 0x1C00B101C (ttfdQueryTrueTypeTable2.c)
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pjTable(int a1, __int64 a2, unsigned __int32 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  _DWORD *i; // r10
  unsigned __int32 v8; // ecx
  unsigned int v9; // edx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = v3 + *(unsigned int *)(a2 + 272);
  v6 = 16LL * (__int16)__ROR2__(*(_WORD *)(v5 + 4), 8) + v5 + 12;
  for ( i = (_DWORD *)(v5 + 12); (unsigned __int64)i < v6; i += 4 )
  {
    if ( a1 == *i )
    {
      v8 = _byteswap_ulong(i[3]);
      v9 = _byteswap_ulong(i[2]);
      if ( v8 && v9 <= -1 - v8 && v8 + v9 <= *(_DWORD *)(a2 + 72) )
      {
        result = v3 + v9;
        *a3 = v8;
        return result;
      }
      return 0LL;
    }
  }
  return 0LL;
}
