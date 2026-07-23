/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x180064638
 * Callers:
 *     RtlpCheckPseudoEnvironmentVariable @ 0x1800355E8 (RtlpCheckPseudoEnvironmentVariable.c)
 * Callees:
 *     RtlFindCharInUnicodeString @ 0x180027030 (RtlFindCharInUnicodeString.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlStringCbPrintfExW @ 0x180064B74 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

NTSTATUS __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v7; // ecx
  NTSTATUS result; // eax
  const wchar_t *Buffer; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  NTSTATUS CharInUnicodeString; // eax
  unsigned __int64 Length; // rax
  char v15; // [rsp+40h] [rbp-C8h]
  NTSTATUS v16; // [rsp+44h] [rbp-C4h]
  USHORT NonInclusivePrefixLength; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  _CURDIR *p_CurrentDirectory; // [rsp+58h] [rbp-B0h]
  _BYTE v20[16]; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+70h] [rbp-98h]
  _BYTE SystemInformation[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Src[32]; // [rsp+C0h] [rbp-48h] BYREF

  v15 = 0;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v15 = 1;
    Buffer = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
LABEL_19:
    v10 = Length >> 1;
    goto LABEL_7;
  }
  v7 = a1 - 1;
  if ( !v7 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &ProcessParameters->ImagePathName,
                            &RtlDosPathSeperatorsString,
                            &NonInclusivePrefixLength);
    Buffer = ProcessParameters->ImagePathName.Buffer;
    if ( CharInUnicodeString >= 0 )
    {
      v10 = (NonInclusivePrefixLength >> 1) + 1;
      goto LABEL_7;
    }
    Length = ProcessParameters->ImagePathName.Length;
    goto LABEL_19;
  }
  if ( v7 == 1 )
  {
    result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v16 = result;
    if ( result < 0 )
      goto LABEL_23;
    result = RtlStringCbPrintfExW(
               (unsigned int)Src,
               32,
               (unsigned int)&v18,
               0,
               0,
               (__int64)L"%u",
               SystemInformation[56]);
    v16 = result;
    if ( result < 0 )
      goto LABEL_23;
    Buffer = (const wchar_t *)Src;
    v10 = (v18 - (__int64)Src) >> 1;
LABEL_7:
    if ( a2 )
    {
      if ( v10 < a3 )
      {
        *a4 = v10;
        v11 = v10;
        memmove(a2, Buffer, 2 * v10);
        a2[v11] = 0;
        result = 0;
LABEL_10:
        v16 = result;
        goto LABEL_23;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v10 + 1;
    result = -1073741789;
    goto LABEL_10;
  }
  result = NtQuerySystemInformation(SystemBootEnvironmentInformation, v20, 0x20u, 0LL);
  v16 = result;
  if ( result >= 0 )
  {
    if ( v21 == 1 )
    {
      Buffer = L"Legacy";
      v10 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v10 = 4LL;
    }
    goto LABEL_7;
  }
LABEL_23:
  if ( v15 )
  {
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
