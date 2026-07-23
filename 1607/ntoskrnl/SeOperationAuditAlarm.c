/*
 * XREFs of SeOperationAuditAlarm @ 0x14068E9CC
 * Callers:
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140219F5C (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     ObNormalizeHandleValue @ 0x140666180 (ObNormalizeHandleValue.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140690AA4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepSecurityDescriptorStrictLength @ 0x140695898 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        void *a7)
{
  PVOID v7; // rbx
  unsigned __int64 v10; // r12
  unsigned __int16 v11; // si
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Blink; // r13
  int AllocatedFullProcessImageName; // edi
  _QWORD **PrimaryToken; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // r10d
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // r11d
  int v25; // eax
  int v26; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v29; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v30; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v31; // [rsp+40h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  P = a7;
  v29 = 0LL;
  v10 = a3;
  v30 = 0LL;
  v27[0] = 0;
  LOBYTE(a3) = 1;
  v11 = SepAdtClassifyObjectIntoSubCategory(a2, a4, a3, 0LL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v29);
  if ( AllocatedFullProcessImageName < 0 )
  {
LABEL_22:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    goto LABEL_23;
  }
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123700000003LL;
  WORD1(Src[2]) = 8;
  LOWORD(Src[2]) = v11;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[10] = &SeSubsystemName;
  Src[11] = 0x800000005LL;
  Src[6] = *PrimaryToken[19];
  v16 = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v16 + 8;
  if ( SubjectContext.ClientToken )
    v17 = *((_QWORD *)SubjectContext.ClientToken + 3);
  else
    v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[12] = v17;
  v18 = *a4 + 16;
  Src[15] = 0x2000000001LL;
  LODWORD(Src[19]) = 1;
  HIDWORD(Src[19]) = v18;
  Src[18] = &SeSubsystemName;
  Src[22] = a4;
  SepQueryNameString(a2, &v30);
  if ( v30 )
  {
    if ( v11 == 117 || (LODWORD(Src[23]) = 1, v11 == 129) )
      LODWORD(Src[23]) = 2;
    v19 = *(unsigned __int16 *)v30;
    Src[26] = v30;
    HIDWORD(Src[23]) = v19 + 16;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v10);
  HIDWORD(Src[31]) = v21 - 7;
  Src[33] = v21 - 7;
  HIDWORD(Src[35]) = v21 - 7;
  Src[32] = a5;
  Src[36] = a5;
  Src[46] = v29;
  v22 = *(unsigned __int16 *)v29 + 16;
  LODWORD(Src[31]) = 7;
  LODWORD(Src[35]) = 10;
  Src[39] = __PAIR64__(v23, v21);
  Src[40] = Blink;
  Src[43] = __PAIR64__(v22, v24);
  LODWORD(Src[1]) = v21;
  if ( v11 != v20 && v11 - v20 != 12 || !a7 )
    goto LABEL_17;
  v25 = SepCheckAndCopySelfRelativeSD((__int16 *)a7, &P, &v31, v27);
  v7 = P;
  AllocatedFullProcessImageName = v25;
  if ( v25 >= 0 )
  {
    LODWORD(Src[47]) = 31;
    v26 = SepSecurityDescriptorStrictLength(P);
    Src[49] = 0LL;
    HIDWORD(Src[47]) = v26;
    Src[50] = v7;
    Src[48] = 32LL;
LABEL_17:
    LODWORD(Src[1]) = 12;
    SepAdtLogAuditRecord(Src);
    SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v27[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_22;
LABEL_23:
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
}
