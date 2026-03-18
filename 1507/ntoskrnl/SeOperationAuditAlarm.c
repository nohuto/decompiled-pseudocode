/*
 * XREFs of SeOperationAuditAlarm @ 0x1406D2494
 * Callers:
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14024F73C (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     ObNormalizeHandleValue @ 0x140587094 (ObNormalizeHandleValue.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406D3E38 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepSecurityDescriptorStrictLength @ 0x1406D7F28 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        void *a7)
{
  unsigned __int64 v9; // r12
  unsigned __int16 v10; // bx
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // r13
  NTSTATUS v13; // eax
  PUNICODE_STRING v14; // r14
  int v15; // esi
  _QWORD **PrimaryToken; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  PVOID v20; // rdi
  int v21; // eax
  int v22; // r10d
  int Length; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  int v26; // r11d
  PVOID v27; // rbx
  int v28; // eax
  int v29; // eax
  _BYTE v30[8]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v32; // [rsp+30h] [rbp-D0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = a7;
  v9 = a3;
  pImageFileName = 0LL;
  LOBYTE(a3) = 1;
  v32 = 0LL;
  v30[0] = 0;
  v10 = SepAdtClassifyObjectIntoSubCategory(a2, a4, a3, 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = Process[1].Header.WaitListHead.Blink;
  v13 = SeLocateProcessImageName(Process, &pImageFileName);
  v14 = pImageFileName;
  v15 = v13;
  if ( v13 < 0 )
  {
    v20 = v32;
LABEL_25:
    SepAuditFailed((unsigned int)v15);
    goto LABEL_26;
  }
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123700000003LL;
  WORD1(Src[2]) = 8;
  LOWORD(Src[2]) = v10;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[10] = SeSubsystemName;
  Src[11] = 0x800000005LL;
  Src[6] = *PrimaryToken[19];
  v17 = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v17 + 8;
  if ( SubjectContext.ClientToken )
    v18 = *((_QWORD *)SubjectContext.ClientToken + 3);
  else
    v18 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[12] = v18;
  v19 = *a4 + 16;
  Src[15] = 0x2000000001LL;
  LODWORD(Src[19]) = 1;
  HIDWORD(Src[19]) = v19;
  Src[18] = SeSubsystemName;
  Src[22] = a4;
  SepQueryNameString(a2, (PUNICODE_STRING *)&v32);
  v20 = v32;
  if ( v32 )
  {
    if ( v10 == 116 || (LODWORD(Src[23]) = 1, v10 == 128) )
      LODWORD(Src[23]) = 2;
    v21 = *(unsigned __int16 *)v32;
    Src[26] = v32;
    HIDWORD(Src[23]) = v21 + 16;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v9);
  Src[32] = a5;
  Src[36] = a5;
  Length = v14->Length;
  HIDWORD(Src[31]) = v24 - 7;
  Src[33] = v24 - 7;
  HIDWORD(Src[35]) = v24 - 7;
  LODWORD(Src[31]) = 7;
  LODWORD(Src[35]) = 10;
  Src[39] = __PAIR64__(v25, v24);
  Src[40] = Blink;
  LODWORD(Src[43]) = v26;
  HIDWORD(Src[43]) = Length + 16;
  Src[46] = v14;
  LODWORD(Src[1]) = v24;
  if ( v10 != v22 && v10 - v22 != 12 )
  {
    v27 = P;
LABEL_18:
    LODWORD(Src[1]) = 12;
    SepAdtLogAuditRecord(Src);
    SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_19;
  }
  v27 = P;
  if ( !P )
    goto LABEL_18;
  v28 = SepCheckAndCopySelfRelativeSD((__int16 *)P, &P, &v34, v30);
  v27 = P;
  v15 = v28;
  if ( v28 >= 0 )
  {
    LODWORD(Src[47]) = 31;
    v29 = SepSecurityDescriptorStrictLength(P);
    Src[49] = 0LL;
    HIDWORD(Src[47]) = v29;
    Src[50] = v27;
    Src[48] = 32LL;
    goto LABEL_18;
  }
LABEL_19:
  if ( v30[0] && v27 )
    ExFreePoolWithTag(v27, 0);
  if ( v15 < 0 )
    goto LABEL_25;
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
}
