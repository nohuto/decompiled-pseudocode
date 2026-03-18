/*
 * XREFs of CmpDoSort @ 0x1407BABBC
 * Callers:
 *     CmpSortDriverList @ 0x1407BA9C0 (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x1407BACEC (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(UNICODE_STRING **a1)
{
  unsigned __int16 *v2; // r11
  wchar_t *v3; // r15
  __int16 v4; // r14
  UNICODE_STRING *v5; // r12
  wchar_t *i; // rbx
  UNICODE_STRING *v7; // rbp
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rax
  UNICODE_STRING *v10; // rsi
  _QWORD *p_Buffer; // r13
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF

  if ( !(unsigned __int8)CmpSortByTag() )
    return 0;
  v3 = (wchar_t *)*((_QWORD *)v2 + 1);
  v4 = 0;
  v5 = (UNICODE_STRING *)a1;
  for ( i = &v3[((unsigned __int64)*v2 >> 1) - 1]; i > v3; --i )
  {
    do
    {
      if ( !*i )
        v4 = (__int16)i;
      --i;
    }
    while ( i != v3 && *(i - 1) );
    v7 = a1[1];
    String1.Buffer = i;
    String1.Length = v4 - (_WORD)i;
    String1.MaximumLength = v4 - (_WORD)i;
    while ( v7 != v5 && v7 != (UNICODE_STRING *)a1 )
    {
      v10 = v7;
      p_Buffer = &v7->Buffer;
      v7 = (UNICODE_STRING *)v7->Buffer;
      if ( v10[5].Buffer && RtlEqualUnicodeString(&String1, v10 + 5, 1u) )
      {
        v8 = *(_QWORD *)&v10->Length;
        if ( v5 == (UNICODE_STRING *)a1 )
          v5 = v10;
        if ( *(UNICODE_STRING **)(v8 + 8) != v10 || *(UNICODE_STRING **)&v7->Length != v10 )
          __fastfail(3u);
        *(_QWORD *)&v7->Length = v8;
        *(_QWORD *)(v8 + 8) = v7;
        v9 = *a1;
        *(_QWORD *)&v10->Length = *a1;
        *p_Buffer = a1;
        if ( (UNICODE_STRING **)v9->Buffer != a1 )
          __fastfail(3u);
        v9->Buffer = &v10->Length;
        *a1 = v10;
      }
    }
  }
  return 1;
}
