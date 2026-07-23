/*
 * XREFs of EtwpExpandFileName @ 0x1404D0974
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x140511FA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r14
  unsigned __int16 Length; // bx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  char v12; // r15
  SIZE_T v13; // rbx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v15; // rdi
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  unsigned int v18; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  size_t v22; // rbx
  const WCHAR *v23; // rdx
  wchar_t *Buffer; // [rsp+40h] [rbp-48h]
  SIZE_T v25; // [rsp+48h] [rbp-40h]
  UNICODE_STRING v26; // [rsp+50h] [rbp-38h] BYREF
  int v27; // [rsp+98h] [rbp+10h]

  v6 = 0;
  RtlInitUnicodeString(&v26, L"%SystemRoot%");
  Length = v26.Length;
  v10 = a2->Length;
  v11 = v10;
  v27 = v26.Length;
  Buffer = a2->Buffer;
  if ( (unsigned int)v10 > v26.Length )
    v11 = v26.Length;
  v25 = (unsigned __int64)v26.Length >> 1;
  if ( RtlCompareUnicodeStrings(a2->Buffer, v11 >> 1, v26.Buffer, v25, 1u) )
  {
    v12 = 0;
    if ( !a3 && !a1 )
      return 0LL;
    v13 = v10 + 2;
  }
  else
  {
    v12 = 1;
    if ( (_WORD)v10 == Length )
    {
      v13 = *a4 + (unsigned int)NtSystemRoot.Length + 56;
    }
    else
    {
      v13 = (unsigned int)v10 + NtSystemRoot.Length - v27 + 2;
      if ( Buffer[((unsigned __int64)(unsigned int)v10 >> 1) - 1] == 92 )
      {
        v6 = 1;
        v13 += *a4;
      }
    }
  }
  if ( a3 )
    v13 += 8LL;
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
      if ( a2->Length == v26.Length )
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
          v16 = &word_1405841A0;
        v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws%ws%ws", NtSystemRoot.Buffer, &a2->Buffer[v25], v16);
      }
    }
    else if ( a1 )
    {
      if ( v6 )
        v23 = (const WCHAR *)*((_QWORD *)a4 + 1);
      else
        v23 = &word_1405841A0;
      v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws%ws", a2->Buffer, v23);
    }
    else
    {
      v17 = RtlStringCbPrintfW(PoolWithTag, v13, L"%ws", a2->Buffer);
    }
    v18 = v17;
    if ( a3 )
    {
      v20 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( v15[v21] );
      v22 = v13 - 2 * v21;
      do
        ++v20;
      while ( v15[v20] );
      v18 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)&v15[v20], v22, L".%03d", a3);
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
