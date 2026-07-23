/*
 * XREFs of SepAuditAssignPrimaryToken @ 0x1405804E4
 * Callers:
 *     SeAssignPrimaryToken @ 0x140580478 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SepAuditAssignPrimaryToken(__int64 a1, __int64 a2)
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v5; // rbx
  struct _LIST_ENTRY *Blink; // r12
  _QWORD **PrimaryToken; // rdi
  int AllocatedFullProcessImageName; // ebx
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  PVOID v14; // [rsp+30h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v14 = 0LL;
  P = 0LL;
  memset(Src, 0, 0x418uLL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v5 = (__int64)CurrentThreadProcess;
  if ( CurrentThreadProcess[1].ActiveProcessors.Bitmap[15] )
  {
    Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
    if ( PrimaryToken )
    {
      v9 = *PrimaryToken[19];
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(v5, (__int64)&v14);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 744);
        AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, (__int64)&P);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v11 = *(unsigned __int8 *)(v9 + 1);
          Src[0] = 0x125800000005LL;
          Src[11] = 0x800000005LL;
          LODWORD(Src[2]) = 524422;
          HIDWORD(Src[3]) = 4 * v11 + 8;
          LODWORD(Src[3]) = 4;
          Src[6] = v9;
          Src[10] = &SeSubsystemName;
          Src[12] = PrimaryToken[3];
          Src[16] = *(_QWORD *)(a2 + 24);
          v12 = *(unsigned __int16 *)P + 16;
          Src[26] = P;
          HIDWORD(Src[23]) = v12;
          Src[34] = v14;
          Src[7] = 0x2000000001LL;
          HIDWORD(Src[31]) = *(unsigned __int16 *)v14 + 16;
          Src[15] = 0x800000023LL;
          Src[19] = 0x80000000BLL;
          Src[20] = v10;
          LODWORD(Src[23]) = 2;
          Src[27] = 0x80000000BLL;
          Src[28] = Blink;
          LODWORD(Src[31]) = 2;
          LODWORD(Src[1]) = 8;
          SepAdtLogAuditRecord(Src);
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
