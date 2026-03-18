/*
 * XREFs of EtwpExpandFileName @ 0x1404C72C8
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x1404C74D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r15
  unsigned __int64 Length; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  char v12; // r12
  SIZE_T v13; // rbx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v15; // rdi
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  unsigned int v18; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // rbx
  __int64 v23; // rcx
  const WCHAR *v24; // rdx
  SIZE_T v25; // [rsp+40h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  const WCHAR *Buffer; // [rsp+A8h] [rbp+10h]

  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"%SystemRoot%");
  Length = a2->Length;
  v10 = Length;
  if ( (unsigned int)Length > DestinationString.Length )
    v10 = DestinationString.Length;
  v25 = (unsigned __int64)DestinationString.Length >> 1;
  Buffer = a2->Buffer;
  v11 = -1LL;
  if ( RtlCompareUnicodeStrings(Buffer, v10 >> 1, DestinationString.Buffer, v25, 1u) )
  {
    v12 = 0;
    if ( !a3 && !a1 )
      return 0LL;
    v13 = Length + 2;
  }
  else
  {
    v12 = 1;
    if ( (_WORD)Length == DestinationString.Length )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( aSystem32Logfil_0[v23] );
      v13 = NtSystemRoot.Length + (unsigned int)*a4 + 2 + 2 * (_DWORD)v23;
    }
    else
    {
      v13 = (unsigned int)Length + NtSystemRoot.Length - DestinationString.Length + 2;
      if ( Buffer[((unsigned __int64)(unsigned int)Length >> 1) - 1] == 92 )
      {
        v6 = 1;
        v13 += *a4;
      }
    }
  }
  if ( a3 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a000[v20] );
    v13 += 2 * v20;
  }
  if ( a1 && !v12 )
  {
    v6 = 1;
    v13 += *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v12 )
    {
      if ( a2->Length == DestinationString.Length )
      {
        v17 = RtlStringCbPrintfW(
                PoolWithTag,
                v13,
                L"%ws%ws%ws%ws",
                NtSystemRoot.Buffer,
                L"\\system32\\Logfiles\\WMI\\",
                *((_QWORD *)a4 + 1),
                L".etl");
      }
      else
      {
        if ( v6 )
          v16 = (const WCHAR *)*((_QWORD *)a4 + 1);
        else
          v16 = &word_140551830;
        v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws%ws%ws", NtSystemRoot.Buffer, &a2->Buffer[v25], v16);
      }
    }
    else if ( a1 )
    {
      if ( v6 )
        v24 = (const WCHAR *)*((_QWORD *)a4 + 1);
      else
        v24 = &word_140551830;
      v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws%ws", a2->Buffer, v24);
    }
    else
    {
      v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws", a2->Buffer);
    }
    v18 = v17;
    if ( a3 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v15[v21] );
      v22 = v13 - 2 * v21;
      do
        ++v11;
      while ( v15[v11] );
      v18 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)&v15[v11], v22, L".%03d", a3);
    }
    RtlFreeAnsiString(a2);
    RtlInitUnicodeString(a2, v15);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v18;
}
