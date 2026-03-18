/*
 * XREFs of CmpFindNameInListWithStatus @ 0x140429D80
 * Callers:
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x14065E874 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        _DWORD *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  bool v6; // zf
  int v7; // edi
  const UNICODE_STRING *v8; // rbx
  _DWORD *v9; // rsi
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  unsigned __int16 v15; // r15
  WCHAR *Buffer; // rsi
  unsigned __int16 v17; // r14
  WCHAR v18; // bx
  unsigned int v19; // edi
  int v20; // ecx
  unsigned int v21; // ebp
  LONG v23; // eax
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-48h] BYREF

  v6 = *a2 == 0;
  v7 = a4;
  v8 = a3;
  v24 = -1LL;
  v9 = a2;
  if ( v6 )
  {
    if ( a5 )
      *a5 = 0;
    v21 = -1073741772;
    *a6 = -1;
    return v21;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, (unsigned int)a2[1], (char *)&v24 + 4);
  v11 = v25;
  if ( !v25 )
  {
    *a6 = -1;
    return 3221225626LL;
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v11 + 4LL * v12), &v24);
    if ( !v13 )
      break;
    if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
    {
      if ( (v7 & 0x10000) != 0 )
      {
        v23 = CmpCompareTwoCompressedNames(v8->Buffer, v8->Length, v13 + 20, *(unsigned __int16 *)(v13 + 2));
        goto LABEL_35;
      }
      v14 = (unsigned __int8 *)(v13 + 20);
      v15 = v8->Length >> 1;
      Buffer = v8->Buffer;
      v17 = *(_WORD *)(v13 + 2);
      if ( v15 )
      {
        while ( v17 )
        {
          v18 = *Buffer++;
          v19 = *v14++;
          if ( v18 != (_WORD)v19 )
          {
            if ( v18 >= 0x61u )
            {
              if ( v18 > 0x7Au )
                v18 = RtlUpcaseUnicodeChar(v18);
              else
                v18 -= 32;
            }
            if ( v19 >= 0x61 )
            {
              if ( v19 > 0x7A )
                LOWORD(v19) = RtlUpcaseUnicodeChar(v19);
              else
                LOWORD(v19) = v19 - 32;
            }
            v20 = v18 - (unsigned __int16)v19;
            if ( v18 != (unsigned __int16)v19 )
              goto LABEL_15;
          }
          --v17;
          if ( !--v15 )
            break;
        }
      }
      v20 = v15 - v17;
LABEL_15:
      v9 = a2;
      v11 = v25;
    }
    else
    {
      String2.Length = *(_WORD *)(v13 + 2);
      String2.MaximumLength = String2.Length;
      String2.Buffer = (wchar_t *)(v13 + 20);
      if ( (v7 & 0x10000) == 0 )
      {
        v23 = RtlCompareUnicodeString(v8, &String2, 1u);
LABEL_35:
        v20 = v23;
        goto LABEL_16;
      }
      v20 = -(int)CmpCompareCompressedName(&String2, v8->Buffer, v8->Length, 0LL, v24);
    }
LABEL_16:
    if ( !v20 )
    {
      if ( a5 )
        *a5 = v12;
      v21 = 0;
      *a6 = *(_DWORD *)(v11 + 4LL * v12);
      goto LABEL_26;
    }
    if ( ++v12 == *v9 )
    {
      if ( a5 )
        *a5 = v12;
      v21 = -1073741772;
      *a6 = -1;
LABEL_26:
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v24);
      goto LABEL_27;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v24);
    v8 = a3;
    v7 = a4;
  }
  v21 = -1073741670;
  *a6 = -1;
LABEL_27:
  (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, (char *)&v24 + 4);
  return v21;
}
