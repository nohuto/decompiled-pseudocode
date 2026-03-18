/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C00011F4
 * Callers:
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C005CC58 (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005D724 (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     sub_1C00012C8 @ 0x1C00012C8 (sub_1C00012C8.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  wchar_t *v7; // r10
  NTSTATUS v8; // r11d
  wchar_t *Buffer; // r14
  unsigned __int64 v10; // rdi
  NTSTATUS v11; // r10d
  __int16 v12; // cx
  __int64 v13; // r15

  v3 = 0LL;
  v4 = 0LL;
  v8 = ((__int64 (*)(void))sub_1C00012C8)();
  if ( v8 >= 0 )
  {
    if ( v6 )
    {
      v3 = *(_QWORD *)(v6 + 8);
      v4 = (unsigned __int64)*(unsigned __int16 *)(v6 + 2) >> 1;
    }
    Buffer = v7;
    v10 = (unsigned __int64)v7;
    v8 = sub_1C00012C8(SourceString);
    if ( v8 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v10 = (unsigned __int64)SourceString->Length >> 1;
      }
      v8 = v11;
      v12 = v11;
      if ( !v4 )
        goto LABEL_15;
      v13 = v3 - (_QWORD)Buffer;
      do
      {
        if ( !v10 )
          break;
        --v10;
        *(wchar_t *)((char *)Buffer + v13) = *Buffer;
        ++v12;
        ++Buffer;
        --v4;
      }
      while ( v4 );
      if ( !v4 )
      {
LABEL_15:
        if ( v10 )
          v8 = -2147483643;
      }
      LOWORD(v11) = v12;
    }
    DestinationString->Length = 2 * v11;
  }
  return v8;
}
