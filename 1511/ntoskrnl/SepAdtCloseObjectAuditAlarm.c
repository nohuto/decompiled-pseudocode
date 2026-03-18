/*
 * XREFs of SepAdtCloseObjectAuditAlarm @ 0x14064F5A4
 * Callers:
 *     NtCloseObjectAuditAlarm @ 0x1404AC788 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14065206C (SeCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x1406520BC (SeCloseObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x14062DFC4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SepAdtCloseObjectAuditAlarm(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        char a5)
{
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // r14
  NTSTATUS v10; // eax
  PUNICODE_STRING v11; // rdi
  unsigned __int16 *p_Length; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  _QWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned __int16 v22; // [rsp+40h] [rbp-C0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  pImageFileName = 0LL;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, a3, a5, &v22)
    && (unsigned __int8)SepAdtAuditThisEventWithContext(123LL, 1u, 0, (__int64)a3) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Blink = Process[1].Header.WaitListHead.Blink;
    v10 = SeLocateProcessImageName(Process, &pImageFileName);
    v11 = pImageFileName;
    if ( v10 < 0 )
    {
      SepAuditFailed((unsigned int)v10);
    }
    else
    {
      memset(Src, 0, 0x418uLL);
      p_Length = SeSubsystemName;
      ClientToken = (_QWORD **)a3->ClientToken;
      LOWORD(Src[2]) = v22;
      if ( a1 )
        p_Length = &a1->Length;
      Src[0] = 0x123200000003LL;
      PrimaryToken = ClientToken;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)a3->PrimaryToken;
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v15 = ClientToken;
      if ( !ClientToken )
        v15 = a3->PrimaryToken;
      v16 = (_QWORD *)v15[19];
      LODWORD(Src[7]) = 1;
      Src[10] = p_Length;
      Src[11] = 0x800000005LL;
      Src[6] = *v16;
      v17 = *p_Length + 16;
      HIDWORD(Src[7]) = v17;
      if ( !ClientToken )
        ClientToken = (_QWORD **)a3->PrimaryToken;
      v18 = ClientToken[3];
      HIDWORD(Src[15]) = v17;
      Src[18] = p_Length;
      Src[19] = 0x80000000BLL;
      Src[12] = v18;
      LODWORD(Src[15]) = 1;
      Src[20] = ObNormalizeHandleValue(a2);
      v19 = v11->Length + 16;
      Src[23] = __PAIR64__(v21, v20);
      HIDWORD(Src[27]) = v19;
      Src[24] = Blink;
      LODWORD(Src[27]) = 2;
      Src[30] = v11;
      LODWORD(Src[1]) = 7;
      SepAdtLogAuditRecord(Src);
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
}
