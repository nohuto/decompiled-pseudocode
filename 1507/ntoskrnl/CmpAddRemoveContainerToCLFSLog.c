/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8
 * Callers:
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x14065CDC8 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsRestoreImpersonation @ 0x140435590 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140435730 (PsDisableImpersonation.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer,
        char a8)
{
  __int16 v12; // cx
  NTSTATUS v13; // ebx
  BOOLEAN v14; // si
  NTSTATUS v15; // eax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-81h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+40h] [rbp-71h] BYREF
  _STRING SourceString; // [rsp+50h] [rbp-61h] BYREF
  char v21[48]; // [rsp+60h] [rbp-51h] BYREF
  char DstBuf[16]; // [rsp+90h] [rbp-21h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v12 = Sourcea->Length + 34;
  Destination.Length = 0;
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + v12;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v13 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v13 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v14 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
    if ( a8 == 1 )
      v15 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    else
      v15 = ClfsRemoveLogContainer(plfoLog, &Destination, 1u);
    v13 = v15;
    KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
    if ( v14 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v13;
}
