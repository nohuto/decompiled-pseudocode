/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x1404AE400
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int16 v8; // bx
  unsigned __int8 *v9; // rbp
  unsigned __int8 *v10; // rsi
  unsigned __int16 v11; // di
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  int v14; // ecx
  bool v15; // sf
  unsigned __int8 v16; // bl
  __int64 v18; // r8
  __int64 v19; // r8
  UNICODE_STRING String2; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = -1;
  v23 = -1;
  *(_QWORD *)&String2.Length = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a3, &v22);
  v5 = *(_QWORD *)&String2.Length;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v23);
  v7 = v6;
  if ( !*(_QWORD *)&String2.Length || !v6 )
    goto LABEL_29;
  if ( (*(_BYTE *)(*(_QWORD *)&String2.Length + 2LL) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
    {
      v18 = *(unsigned __int16 *)(v6 + 72);
      String2.Buffer = (wchar_t *)(*(_QWORD *)&String2.Length + 76LL);
      String2.Length = *(_WORD *)(*(_QWORD *)&String2.Length + 72LL);
      String2.MaximumLength = String2.Length;
      if ( (int)((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64, _QWORD))CmpCompareCompressedName)(
                  &String2,
                  v6 + 76,
                  v18,
                  0LL) <= 0 )
        goto LABEL_29;
    }
    else
    {
      String1.Buffer = (wchar_t *)(v6 + 76);
      String1.Length = *(_WORD *)(v6 + 72);
      String1.MaximumLength = String1.Length;
      String2.Buffer = (wchar_t *)(*(_QWORD *)&String2.Length + 76LL);
      String2.Length = *(_WORD *)(*(_QWORD *)&String2.Length + 72LL);
      String2.MaximumLength = String2.Length;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
        goto LABEL_29;
    }
LABEL_15:
    v16 = 1;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v8 = *(_WORD *)(*(_QWORD *)&String2.Length + 72LL);
    v9 = (unsigned __int8 *)(*(_QWORD *)&String2.Length + 76LL);
    v10 = (unsigned __int8 *)(v6 + 76);
    v11 = *(_WORD *)(v6 + 72);
    if ( v11 )
    {
      while ( v8 )
      {
        v12 = *v10++;
        v13 = *v9++;
        if ( (_WORD)v12 != (_WORD)v13 )
        {
          if ( v12 >= 0x61 )
          {
            if ( v12 > 0x7A )
              LOWORD(v12) = RtlUpcaseUnicodeChar(v12);
            else
              LOWORD(v12) = v12 - 32;
          }
          if ( v13 >= 0x61 )
          {
            if ( v13 > 0x7A )
              LOWORD(v13) = RtlUpcaseUnicodeChar(v13);
            else
              LOWORD(v13) = v13 - 32;
          }
          v14 = (unsigned __int16)v12 - (unsigned __int16)v13;
          if ( (unsigned __int16)v12 != (unsigned __int16)v13 )
            goto LABEL_13;
        }
        --v8;
        if ( !--v11 )
          break;
      }
    }
    v14 = v11 - v8;
LABEL_13:
    v15 = v14 < 0;
    v5 = *(_QWORD *)&String2.Length;
  }
  else
  {
    v19 = *(unsigned __int16 *)(*(_QWORD *)&String2.Length + 72LL);
    String1.Buffer = (wchar_t *)(v6 + 76);
    String1.Length = *(_WORD *)(v6 + 72);
    String1.MaximumLength = String1.Length;
    v15 = (int)CmpCompareCompressedName(
                 &String1,
                 *(_QWORD *)&String2.Length + 76LL,
                 v19,
                 0LL,
                 *(_QWORD *)&String2.Length) < 0;
  }
  if ( v15 )
    goto LABEL_15;
LABEL_29:
  v16 = 0;
LABEL_16:
  if ( v5 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v22);
  if ( v7 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
  return v16;
}
