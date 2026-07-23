/*
 * XREFs of PiCompareDDBCacheEntries @ 0x14057E758
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiCompareDDBCacheEntries(_RTL_AVL_TABLE *a1, const UNICODE_STRING *a2, const UNICODE_STRING *a3)
{
  LONG v6; // eax
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  bool v10; // cf
  bool v11; // zf

  v6 = RtlCompareUnicodeString(a2 + 1, a3 + 1, 1u);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 > 0 )
    return 1LL;
  if ( a1->TableContext )
    return 2LL;
  v8 = *(_DWORD *)&a2[2].Length;
  v9 = *(_DWORD *)&a3[2].Length;
  v10 = v8 < v9;
  v11 = v8 == v9;
  if ( v8 < v9 )
    return 0LL;
  result = 1LL;
  if ( v10 || v11 )
    return 2LL;
  return result;
}
