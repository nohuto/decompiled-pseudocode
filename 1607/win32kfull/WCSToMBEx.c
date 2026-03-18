/*
 * XREFs of WCSToMBEx @ 0x1C0246314
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnIMECONTROL @ 0x1C0205E50 (SfnIMECONTROL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C0017E28 (ConvertToAndFromWideChar.c)
 */

__int64 __fastcall WCSToMBEx(unsigned __int16 a1, WCHAR *a2, int a3, PCHAR *a4, ULONG BytesInMultiByteString)
{
  int v5; // r10d
  __int64 v6; // r10
  __int64 result; // rax
  NTSTATUS v8; // eax

  v5 = a3;
  if ( !BytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v5 = v6 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( (BytesInMultiByteString & 0x80000000) != 0 )
    return 0LL;
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v8 = RtlUnicodeToMultiByteN(*a4, BytesInMultiByteString, &BytesInMultiByteString, a2, 2 * v5);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, 2 * v5, *a4, BytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
