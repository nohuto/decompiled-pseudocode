/*
 * XREFs of CmpStartCLFSLog @ 0x1404BE47C
 * Callers:
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsDisableImpersonation @ 0x140412920 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140412A70 (PsRestoreImpersonation.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int64 *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  unsigned __int16 v12; // cx
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v15; // rsi
  int TotalContainers; // edi
  FILE_OBJECT *v17; // rax
  BOOLEAN v19; // [rsp+60h] [rbp-79h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-69h] BYREF
  ULONG pcbInfoBuffer; // [rsp+80h] [rbp-59h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-51h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-49h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v26[48]; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  *a8 = 0LL;
  *a9 = 0LL;
  v12 = Source->Length + 26 + a2->Length;
  Destination.Length = 0;
  Destination.MaximumLength = v12;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v19 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation < 0 )
  {
    if ( LogFileInformation == -1073741772 )
    {
      LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
      if ( LogFileInformation >= 0 )
      {
        TotalContainers = 0;
        while ( 1 )
        {
          LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                                 pplfoLog,
                                 Source,
                                 a2,
                                 &CmpLogExt,
                                 &CmpContainerSuffix,
                                 TotalContainers,
                                 pcbContainer,
                                 1);
          if ( LogFileInformation < 0 )
            break;
          if ( (unsigned int)++TotalContainers >= 3 )
            goto LABEL_6;
        }
      }
    }
  }
  else
  {
    pcbInfoBuffer = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, PoolWithTag, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        TotalContainers = v15->TotalContainers;
        ExFreePoolWithTag(v15, 0);
LABEL_6:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          v17 = pplfoLog;
          *a7 = TotalContainers;
          *a8 = v17;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
  if ( v19 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
