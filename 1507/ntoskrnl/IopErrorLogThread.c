/*
 * XREFs of IopErrorLogThread @ 0x14057B2A4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCchCopyNW @ 0x140154884 (RtlStringCchCopyNW.c)
 *     IopErrorLogGetEntry @ 0x140154924 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x1401F8DA4 (IopErrorLogRequeueEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405522A8 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwWriteErrorLogEntry @ 0x14057C26C (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
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
  int v11; // eax
  const WCHAR *v12; // rdx
  UNICODE_STRING *v13; // rax
  __int16 v14; // r9
  unsigned int v15; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v20; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v22; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v24[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  v16 = 0;
  v19 = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_29:
      v15 = 0;
      result = IopErrorLogGetEntry();
      if ( !result )
        return result;
      v0 = result - 8;
      v1 = *(_QWORD *)(result - 8 + 32);
      LODWORD(v18) = *(unsigned __int16 *)(result - 8 + 2) - 48;
      if ( v1 )
      {
        RtlInitUnicodeString(&v17, 0LL);
        if ( *(_QWORD *)(v1 + 64) )
          v17 = *(UNICODE_STRING *)(v1 + 56);
        Length = v17.Length;
        if ( v17.Length )
        {
LABEL_8:
          Buffer = &v17.Buffer[((unsigned __int64)Length >> 1) - 1];
          if ( *Buffer == 92 )
            goto LABEL_12;
          do
          {
            if ( Buffer == v17.Buffer )
              break;
            --Buffer;
          }
          while ( *Buffer != 92 );
          if ( *Buffer == 92 )
LABEL_12:
            ++Buffer;
          v4 = LOWORD(v17.Buffer) - (_WORD)Buffer;
          v17.Buffer = Buffer;
          Length += v4;
          v17.Length = Length;
          goto LABEL_14;
        }
        v15 = 0;
        if ( (int)ObQueryNameStringMode((char *)v1, (__int64)&v22, 0x110u, &v15, 0) >= 0 && v15 )
        {
          v17 = v22;
          goto LABEL_41;
        }
        v12 = &word_1405C95F0;
      }
      else
      {
        v12 = L"Application Popup";
      }
      RtlInitUnicodeString(&v17, v12);
LABEL_41:
      Length = v17.Length;
      if ( v17.Length )
        goto LABEL_8;
      Buffer = v17.Buffer;
LABEL_14:
      p_P = (UNICODE_STRING *)&P;
      v15 = 0;
      v6 = 0;
      v7 = 272;
      if ( !*(_QWORD *)(v0 + 24) )
        goto LABEL_15;
      while ( 1 )
      {
        v11 = ObQueryNameStringMode(*(char **)(v0 + 24), (__int64)p_P, v7, &v15, 0);
        if ( v11 != -1073741820 )
          break;
        if ( v6 )
          goto LABEL_15;
        v13 = (UNICODE_STRING *)(ViVerifierDriverAddedThunkListHead
                               ? ExAllocatePoolWithTagPriority(
                                   PagedPool,
                                   v15,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                               : ExAllocatePoolWithTag(PagedPool, v15, 0x20206F49u));
        p_P = v13;
        if ( !v13 )
          goto LABEL_15;
        v7 = v15;
        v6 = 1;
      }
      v8 = 0;
      if ( v11 >= 0 && v15 )
      {
        v20 = *p_P;
      }
      else
      {
LABEL_15:
        RtlInitUnicodeString(&v20, &word_1405C95F0);
        v8 = 0;
      }
      pszDest[0] = 0;
      v24[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v20.Buffer )
        RtlStringCchCopyNW(v24, 0x100uLL, v20.Buffer, (unsigned __int64)v20.Length >> 1);
      if ( v6 == 1 )
        ExFreePoolWithTag(p_P, 0);
      if ( (unsigned int)(*(_DWORD *)(v0 + 60) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v19 = v0 + 128;
        v14 = *(_WORD *)(v0 + 92);
        *(_WORD *)(v0 + 50) -= v14;
        v16 = v14;
      }
      if ( (int)EtwWriteErrorLogEntry(v8, (int)v0 + 48, v18, (int)v0 + 40, (__int64)pszDest, (__int64)v24, v16, v19) < 0 )
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
  if ( (int)EtwQueryTraceHandleByLoggerName(&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_29;
  }
  return IopErrorLogQueueRequest();
}
