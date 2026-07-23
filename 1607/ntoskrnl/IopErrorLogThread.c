/*
 * XREFs of IopErrorLogThread @ 0x140542C34
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchCopyNW @ 0x14010B264 (RtlStringCchCopyNW.c)
 *     IopErrorLogGetEntry @ 0x14012FCA0 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x1401CB3D4 (IopErrorLogRequeueEntry.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401CB430 (IopVerifierExAllocatePool_3.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404C6DC8 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwWriteErrorLogEntry @ 0x140542EAC (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x140628100 (IopErrorLogQueueRequest.c)
 */

__int64 IopErrorLogThread()
{
  __int64 v0; // rdi
  __int64 v1; // r12
  unsigned __int16 Length; // si
  wchar_t *Buffer; // rbx
  __int16 v4; // ax
  UNICODE_STRING *p_P; // r14
  char v6; // r15
  unsigned int v7; // r8d
  int v8; // ecx
  void *v9; // rcx
  __int64 result; // rax
  const WCHAR *v11; // rdx
  int v12; // eax
  __int16 v13; // r9
  unsigned int v14; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v15; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v19; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v21; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v23[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  v15 = 0;
  v18 = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_29:
      v14 = 0;
      result = IopErrorLogGetEntry();
      if ( !result )
        return result;
      v0 = result - 8;
      v1 = *(_QWORD *)(result - 8 + 32);
      LODWORD(v17) = *(unsigned __int16 *)(result - 8 + 2) - 48;
      if ( v1 )
      {
        RtlInitUnicodeString(&v16, 0LL);
        if ( *(_QWORD *)(v1 + 64) )
          v16 = *(UNICODE_STRING *)(v1 + 56);
        Length = v16.Length;
        if ( v16.Length )
        {
LABEL_8:
          Buffer = &v16.Buffer[((unsigned __int64)Length >> 1) - 1];
          if ( *Buffer == 92 )
            goto LABEL_12;
          do
          {
            if ( Buffer == v16.Buffer )
              break;
            --Buffer;
          }
          while ( *Buffer != 92 );
          if ( *Buffer == 92 )
LABEL_12:
            ++Buffer;
          v4 = LOWORD(v16.Buffer) - (_WORD)Buffer;
          v16.Buffer = Buffer;
          Length += v4;
          v16.Length = Length;
          goto LABEL_14;
        }
        v14 = 0;
        if ( (int)ObQueryNameStringMode((char *)v1, (__int64)&v21, 0x110u, &v14, 0) >= 0 && v14 )
        {
          v16 = v21;
          goto LABEL_38;
        }
        v11 = &word_1405841A0;
      }
      else
      {
        v11 = L"Application Popup";
      }
      RtlInitUnicodeString(&v16, v11);
LABEL_38:
      Length = v16.Length;
      if ( v16.Length )
        goto LABEL_8;
      Buffer = v16.Buffer;
LABEL_14:
      p_P = (UNICODE_STRING *)&P;
      v14 = 0;
      v6 = 0;
      v7 = 272;
      if ( !*(_QWORD *)(v0 + 24) )
        goto LABEL_15;
      while ( 1 )
      {
        v12 = ObQueryNameStringMode(*(char **)(v0 + 24), (__int64)p_P, v7, &v14, 0);
        if ( v12 != -1073741820 )
          break;
        if ( v6 )
          goto LABEL_15;
        p_P = (UNICODE_STRING *)IopVerifierExAllocatePool_3(PagedPool, v14);
        if ( !p_P )
          goto LABEL_15;
        v7 = v14;
        v6 = 1;
      }
      v8 = 0;
      if ( v12 >= 0 && v14 )
      {
        v19 = *p_P;
      }
      else
      {
LABEL_15:
        RtlInitUnicodeString(&v19, &word_1405841A0);
        v8 = 0;
      }
      pszDest[0] = 0;
      v23[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v19.Buffer )
        RtlStringCchCopyNW(v23, 0x100uLL, v19.Buffer, (unsigned __int64)v19.Length >> 1);
      if ( v6 == 1 )
        ExFreePoolWithTag(p_P, 0);
      if ( (unsigned int)(*(_DWORD *)(v0 + 60) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v18 = v0 + 128;
        v13 = *(_WORD *)(v0 + 92);
        *(_WORD *)(v0 + 50) -= v13;
        v15 = v13;
      }
      if ( (int)EtwWriteErrorLogEntry(v8, (int)v0 + 48, v17, (int)v0 + 40, (__int64)pszDest, (__int64)v23, v15, v18) < 0 )
      {
        IopErrorLogRequeueEntry((_QWORD *)(v0 + 8));
        return IopErrorLogQueueRequest();
      }
      _InterlockedExchangeAdd(&IopErrorLogAllocation, -*(unsigned __int16 *)(v0 + 2));
      v9 = *(void **)(v0 + 24);
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v1 )
        ObfDereferenceObject(*(PVOID *)(v0 + 32));
      ExFreePoolWithTag((PVOID)v0, 0);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName((__int64)&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_29;
  }
  return IopErrorLogQueueRequest();
}
