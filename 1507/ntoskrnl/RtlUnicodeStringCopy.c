/*
 * XREFs of RtlUnicodeStringCopy @ 0x140233C18
 * Callers:
 *     PopUnicodeStringDeepCopy @ 0x1406B0914 (PopUnicodeStringDeepCopy.c)
 * Callees:
 *     sub_1400D197C @ 0x1400D197C (sub_1400D197C.c)
 *     sub_1400D19B4 @ 0x1400D19B4 (sub_1400D19B4.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int16 v2; // bx
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v6; // rcx
  NTSTATUS v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int16 v11; // r8
  __int64 v12; // r14
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  _WORD *v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v7 = sub_1400D19B4(&DestinationString->Length);
  if ( v7 >= 0 )
  {
    if ( v6 )
    {
      v3 = *(_QWORD *)(v6 + 8);
      v4 = (unsigned __int64)*(unsigned __int16 *)(v6 + 2) >> 1;
    }
    v7 = sub_1400D197C(v8, &v15, &v14);
    if ( v7 >= 0 )
    {
      v9 = v14;
      v7 = 0;
      v10 = v15;
      v11 = 0;
      if ( !v4 )
        goto LABEL_10;
      v12 = v3 - (_QWORD)v15;
      do
      {
        if ( !v9 )
          break;
        --v9;
        *(_WORD *)((char *)v10 + v12) = *v10;
        ++v11;
        ++v10;
        --v4;
      }
      while ( v4 );
      if ( !v4 )
      {
LABEL_10:
        if ( v9 )
          v7 = -2147483643;
      }
      v2 = v11;
    }
    DestinationString->Length = 2 * v2;
  }
  return v7;
}
