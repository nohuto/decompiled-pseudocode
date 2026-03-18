/*
 * XREFs of CmpDoCompareKeyName @ 0x1403FBB80
 * Callers:
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 *     CmpSearchKCBForTransChildByName @ 0x1403DF018 (CmpSearchKCBForTransChildByName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x1404C6074 (CmpSelectLeaf.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1403FBC30 (CmpCompareCompressedName.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rax
  LONG v6; // eax
  int v7; // edi
  __int64 result; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = -1;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a3, &v10);
  if ( !v5 )
    return 2LL;
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v6 = CmpCompareCompressedName(a2, v5 + 76, *(unsigned __int16 *)(v5 + 72), 0LL, *(_QWORD *)&String2.Length);
  }
  else
  {
    String2.Buffer = (wchar_t *)(v5 + 76);
    String2.Length = *(_WORD *)(v5 + 72);
    String2.MaximumLength = String2.Length;
    v6 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
  v7 = v6;
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
  if ( !v7 )
    return 0LL;
  result = 1LL;
  if ( v7 < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
