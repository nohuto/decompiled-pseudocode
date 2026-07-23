/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x140401A80
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14060B704 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x140606A64 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  const UNICODE_STRING *v8; // rbx
  unsigned int v9; // esi
  unsigned int *v10; // rdx
  int v11; // r8d
  __int64 v12; // r12
  int v13; // r15d
  unsigned int *i; // r13
  __int64 v15; // rax
  unsigned __int16 v16; // r14
  wchar_t *v17; // rbp
  unsigned __int16 v18; // r15
  WCHAR *Buffer; // rsi
  WCHAR v20; // di
  unsigned int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 result; // rax
  LONG v25; // eax
  int v26; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-60h] BYREF

  v7 = a1;
  v8 = a4;
  v9 = a3;
  HvpGetCellContextReinitialize((__int64)&v26);
  if ( v11 )
  {
    v12 = 0LL;
    v13 = a5;
    for ( i = v10; ; ++i )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v7 + 8))(v7, *i, &v26);
      v16 = *(_WORD *)(v15 + 2);
      v17 = (wchar_t *)(v15 + 20);
      LOBYTE(v15) = *(_BYTE *)(v15 + 16);
      String2.Buffer = v17;
      String2.Length = v16;
      String2.MaximumLength = v16;
      if ( (v15 & 1) != 0 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v25 = CmpCompareTwoCompressedNames(v8->Buffer, v8->Length, v17, v16);
          goto LABEL_29;
        }
        v18 = v8->Length >> 1;
        Buffer = v8->Buffer;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( !v16 )
            {
LABEL_9:
              v7 = a1;
              goto LABEL_10;
            }
            v20 = *Buffer++;
            v21 = *(unsigned __int8 *)v17;
            v17 = (wchar_t *)((char *)v17 + 1);
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 = RtlUpcaseUnicodeChar(v20);
                else
                  v20 -= 32;
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                  LOWORD(v21) = RtlUpcaseUnicodeChar(v21);
                else
                  LOWORD(v21) = v21 - 32;
              }
              v23 = v20 - (unsigned __int16)v21;
              if ( v23 )
                break;
            }
            --v16;
            if ( !--v18 )
              goto LABEL_9;
          }
          v7 = a1;
          v9 = a3;
          v13 = a5;
        }
        else
        {
LABEL_10:
          v9 = a3;
          v22 = v18;
          v13 = a5;
          v23 = v22 - v16;
        }
      }
      else
      {
        if ( (v13 & 0x10000) == 0 )
        {
          v25 = RtlCompareUnicodeString(v8, &String2, 1u);
LABEL_29:
          v23 = v25;
          goto LABEL_15;
        }
        v23 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, wchar_t *, _QWORD, _QWORD, int))CmpCompareCompressedName)(
                      &String2,
                      v8->Buffer,
                      v8->Length,
                      0LL,
                      v26);
      }
LABEL_15:
      (*(void (__fastcall **)(__int64, int *))(v7 + 16))(v7, &v26);
      if ( !v23 )
      {
        result = 0LL;
        *a7 = *(_DWORD *)(a2 + 4 * v12);
        if ( a6 )
          *a6 = v12;
        return result;
      }
      v8 = a4;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v9 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = v9;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
