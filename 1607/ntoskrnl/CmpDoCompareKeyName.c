/*
 * XREFs of CmpDoCompareKeyName @ 0x140512350
 * Callers:
 *     CmpFindSubKeyByNameWithStatus @ 0x1405120D0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCompareInIndex @ 0x1405126A0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140512A60 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpSelectLeaf @ 0x14060ACEC (CmpSelectLeaf.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1404FF850 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140512960 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1406069B0 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned __int16 *a3, unsigned int a4)
{
  unsigned int v6; // edi
  bool v7; // si
  __int64 v9; // rax
  LONG v11; // eax
  int v12; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v6 = 1;
  v7 = a3 != 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a4, &v14);
  if ( !v9 )
    return 2LL;
  if ( (*(_BYTE *)(v9 + 2) & 0x20) != 0 )
  {
    if ( v7 )
      v11 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v9 + 76, *(unsigned __int16 *)(v9 + 72));
    else
      v11 = CmpCompareCompressedName(
              a2,
              v9 + 76,
              *(unsigned __int16 *)(v9 + 72),
              0LL,
              *(_DWORD *)&String2.Length,
              String2.Buffer);
  }
  else
  {
    String2.Buffer = (wchar_t *)(v9 + 76);
    String2.Length = *(_WORD *)(v9 + 72);
    String2.MaximumLength = String2.Length;
    if ( v7 )
    {
      v12 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD, _QWORD, _QWORD))CmpCompareCompressedName)(
                    &String2,
                    *((_QWORD *)a3 + 1),
                    *a3,
                    0LL);
      goto LABEL_11;
    }
    v11 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
  v12 = v11;
LABEL_11:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
  if ( !v12 )
    return 0LL;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v6;
}
