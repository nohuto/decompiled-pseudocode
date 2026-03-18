/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x140611640
 * Callers:
 *     CmpStartCLFSLog @ 0x1404DAE78 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x140605258 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     sprintf_s @ 0x140152AEC (sprintf_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     PsDisableImpersonation @ 0x140413A60 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140413BB0 (PsRestoreImpersonation.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
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
  NTSTATUS v14; // ebx
  BOOLEAN v15; // si
  NTSTATUS v16; // eax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-81h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-71h] BYREF
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+50h] [rbp-61h] BYREF
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
  v14 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v14 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v15 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
    if ( a8 == 1 )
      v16 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    else
      v16 = ClfsRemoveLogContainer(plfoLog, &Destination, 1u);
    v14 = v16;
    KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
    if ( v15 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v14;
}
