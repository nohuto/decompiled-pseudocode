/*
 * XREFs of sub_140008270 @ 0x140008270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008B74 @ 0x140008B74 (sub_140008B74.c)
 *     sub_140008DA4 @ 0x140008DA4 (sub_140008DA4.c)
 */

__int64 __fastcall sub_140008270(const wchar_t *a1, __int64 a2, const WCHAR *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  bool v7; // r12
  UNICODE_STRING *v8; // rax
  UNICODE_STRING *v9; // rbx
  __int64 v10; // rcx
  UNICODE_STRING **Buffer; // rax
  USHORT Length; // bp
  __int64 **v13; // rax
  __int64 **v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v7 = wcsicmp(a1, L"Required") == 0;
  while ( *a3 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v8 = (UNICODE_STRING *)sub_140008B74(a6 + 2, &DestinationString);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(_QWORD *)&v8->Length;
      Buffer = (UNICODE_STRING **)v8->Buffer;
      if ( *(UNICODE_STRING **)(v10 + 8) != v9 || *Buffer != v9 )
        __fastfail(3u);
      *Buffer = (UNICODE_STRING *)v10;
      *(_QWORD *)(v10 + 8) = Buffer;
      Length = v9[1].Length;
      if ( !v9[2].Length || (RtlInitUnicodeString(&String2, L"Posix"), RtlEqualUnicodeString(v9 + 1, &String2, 0)) )
      {
        sub_140008DA4(v9);
      }
      else if ( v7 )
      {
        v13 = (__int64 **)qword_140020138;
        *(_QWORD *)&v9->Length = &qword_140020130;
        v9->Buffer = (PWSTR)v13;
        if ( *v13 != &qword_140020130 )
          __fastfail(3u);
        *v13 = (__int64 *)v9;
        qword_140020138 = (__int64)v9;
        *a6 += 2;
        a6[1] += v9[2].Length + v9[1].Length + 4;
      }
      else
      {
        v15 = (__int64 **)qword_140020148;
        *(_QWORD *)&v9->Length = &qword_140020140;
        v9->Buffer = (PWSTR)v15;
        if ( *v15 != &qword_140020140 )
          __fastfail(3u);
        *v15 = (__int64 *)v9;
        qword_140020148 = (__int64)v9;
      }
      a3 = (const WCHAR *)((char *)a3 + Length + 2);
    }
    else
    {
      while ( *a3++ )
        ;
    }
  }
  return 0LL;
}
