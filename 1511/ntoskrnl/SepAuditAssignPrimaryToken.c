/*
 * XREFs of SepAuditAssignPrimaryToken @ 0x14054A524
 * Callers:
 *     SeAssignPrimaryToken @ 0x14054A4B8 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SepAuditAssignPrimaryToken(PEPROCESS Process, __int64 a2)
{
  _KPROCESS *v3; // rbx
  struct _LIST_ENTRY *Blink; // r13
  _QWORD **PrimaryToken; // rdi
  int v6; // ebx
  __int64 v7; // r15
  NTSTATUS v8; // eax
  PUNICODE_STRING v9; // r14
  struct _LIST_ENTRY *v10; // r12
  NTSTATUS v11; // eax
  PUNICODE_STRING v12; // rsi
  int v13; // eax
  int v14; // eax
  PUNICODE_STRING pImageFileName; // [rsp+28h] [rbp-E0h] BYREF
  PUNICODE_STRING v16; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF

  pImageFileName = 0LL;
  v16 = 0LL;
  v17 = a2;
  memset(Src, 0, 0x418uLL);
  v3 = KeGetCurrentThread()->ApcState.Process;
  if ( v3[1].ActiveProcessors.Bitmap[15] )
  {
    Blink = v3[1].Header.WaitListHead.Blink;
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
    if ( PrimaryToken )
    {
      v7 = *PrimaryToken[19];
      v8 = SeLocateProcessImageName(v3, &pImageFileName);
      v9 = pImageFileName;
      v6 = v8;
      if ( v8 >= 0 )
      {
        v10 = Process[1].Header.WaitListHead.Blink;
        v11 = SeLocateProcessImageName(Process, &v16);
        v12 = v16;
        v6 = v11;
        if ( v11 >= 0 )
        {
          v13 = *(unsigned __int8 *)(v7 + 1);
          Src[0] = 0x125800000005LL;
          Src[11] = 0x800000005LL;
          LODWORD(Src[2]) = 524421;
          HIDWORD(Src[3]) = 4 * v13 + 8;
          LODWORD(Src[3]) = 4;
          Src[6] = v7;
          LODWORD(Src[23]) = 2;
          Src[10] = SeSubsystemName;
          Src[12] = PrimaryToken[3];
          LODWORD(Src[31]) = 2;
          Src[7] = 0x2000000001LL;
          Src[16] = *(_QWORD *)(v17 + 24);
          HIDWORD(Src[23]) = v16->Length + 16;
          v14 = v9->Length + 16;
          Src[15] = 0x800000023LL;
          HIDWORD(Src[31]) = v14;
          Src[19] = 0x80000000BLL;
          Src[20] = v10;
          Src[26] = v16;
          Src[27] = 0x80000000BLL;
          Src[28] = Blink;
          Src[34] = v9;
          LODWORD(Src[1]) = 8;
          SepAdtLogAuditRecord(Src);
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( v6 >= 0 )
        goto LABEL_15;
    }
    else
    {
      v6 = -1073741700;
    }
    SepAuditFailed((unsigned int)v6);
LABEL_15:
    SeReleaseSubjectContext(&SubjectContext);
  }
}
