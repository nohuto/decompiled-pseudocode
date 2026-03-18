/*
 * XREFs of SepAdtCloseObjectAuditAlarm @ 0x14068EBFC
 * Callers:
 *     NtCloseObjectAuditAlarm @ 0x1404D3454 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14069134C (SeCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x14069139C (SeCloseObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B2E10 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E6A00 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtAuditThisEventWithContext @ 0x140414D50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404B7E50 (SepAdtAuditObjectAccessWithContext.c)
 *     ObNormalizeHandleValue @ 0x14066609C (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140696078 (SepAuditFailed.c)
 */

void __fastcall SepAdtCloseObjectAuditAlarm(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        char a5)
{
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int AllocatedFullProcessImageName; // eax
  const int *v11; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  unsigned __int16 v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, a3, a5, &v20)
    && (unsigned __int8)SepAdtAuditThisEventWithContext(124LL, 1u, 0, (__int64)a3) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    }
    else
    {
      memset(Src, 0, 0x418uLL);
      v11 = &SeSubsystemName;
      ClientToken = (_QWORD **)a3->ClientToken;
      LOWORD(Src[2]) = v20;
      if ( a1 )
        v11 = (const int *)a1;
      Src[0] = 0x123200000003LL;
      PrimaryToken = ClientToken;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)a3->PrimaryToken;
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v14 = ClientToken;
      if ( !ClientToken )
        v14 = a3->PrimaryToken;
      v15 = (_QWORD *)v14[19];
      LODWORD(Src[7]) = 1;
      Src[10] = v11;
      Src[11] = 0x800000005LL;
      Src[6] = *v15;
      v16 = *(unsigned __int16 *)v11 + 16;
      HIDWORD(Src[7]) = v16;
      if ( !ClientToken )
        ClientToken = (_QWORD **)a3->PrimaryToken;
      v17 = ClientToken[3];
      HIDWORD(Src[15]) = v16;
      Src[18] = v11;
      Src[19] = 0x80000000BLL;
      Src[12] = v17;
      LODWORD(Src[15]) = 1;
      Src[20] = ObNormalizeHandleValue(a2);
      Src[30] = P;
      Src[23] = __PAIR64__(v19, v18);
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      Src[24] = Blink;
      LODWORD(Src[27]) = 2;
      LODWORD(Src[1]) = 7;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
