/*
 * XREFs of PfpSourceGetPrefetchSupport @ 0x1404EB13C
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     NtOpenProcess @ 0x140472B20 (NtOpenProcess.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     NtOpenSession @ 0x1404EADB8 (NtOpenSession.c)
 */

__int64 __fastcall PfpSourceGetPrefetchSupport(int *a1, __int64 a2)
{
  PVOID v2; // rsi
  HANDLE v3; // rbx
  HANDLE UniqueProcess; // r14
  int v6; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rax
  NTSTATUS v10; // edi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-81h] BYREF
  CLIENT_ID ClientId; // [rsp+50h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-29h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  *(_DWORD *)a2 = *a1;
  UniqueProcess = 0LL;
  Object = 0LL;
  ProcessHandle = 0LL;
  v6 = *a1;
  ClientId.UniqueProcess = 0LL;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_9;
  }
  v8 = v6 - 1;
  if ( !v8 )
  {
    RtlStringCbPrintfW(pszDest, 0x50uLL, L"\\KernelObjects\\Session%d", (unsigned int)a1[1]);
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenSession(&ClientId.UniqueProcess, 0xF0003u, &ObjectAttributes);
    if ( v10 < 0 )
    {
      UniqueProcess = ClientId.UniqueProcess;
      goto LABEL_22;
    }
    *(_QWORD *)(a2 + 8) = ClientId.UniqueProcess;
    goto LABEL_9;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741637;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  v9 = (unsigned int)a1[1];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)v9;
  v10 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v10 >= 0 )
  {
    v3 = ProcessHandle;
    v11 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            0x1FFFFFu,
            (POBJECT_TYPE)PsProcessType,
            0,
            0x73576650u,
            &Object,
            0LL);
    v2 = Object;
    v10 = v11;
    if ( v11 < 0 )
      goto LABEL_10;
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 && v12 != (((unsigned __int64)Object ^ *((_QWORD *)Object + 97)) & 0x1FFFFFFFFFFFFFFFLL) )
    {
      v10 = -1073741275;
LABEL_10:
      if ( v2 )
        ObfDereferenceObjectWithTag(v2, 0x73576650u);
      goto LABEL_12;
    }
    *(_QWORD *)(a2 + 8) = v3;
    v3 = 0LL;
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
  v3 = ProcessHandle;
LABEL_12:
  if ( !v3 )
    return (unsigned int)v10;
  NtClose(v3);
LABEL_22:
  if ( UniqueProcess )
    NtClose(UniqueProcess);
  return (unsigned int)v10;
}
