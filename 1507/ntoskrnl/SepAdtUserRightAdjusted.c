/*
 * XREFs of SepAdtUserRightAdjusted @ 0x14046E0F4
 * Callers:
 *     SepAdjustPrivileges @ 0x14046DB50 (SepAdjustPrivileges.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAdtAuditablePrivilege @ 0x14024F6E8 (SepAdtAuditablePrivilege.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __fastcall SepAdtUserRightAdjusted(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  __int64 v8; // r12
  int *v10; // r14
  int *v11; // rsi
  PACCESS_TOKEN PrimaryToken; // rdx
  _KPROCESS *Process; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  _QWORD **ClientToken; // rax
  __int64 v17; // rbx
  int *PoolWithTag; // rax
  char *v19; // rcx
  signed __int64 v20; // rdx
  __int64 v21; // r9
  int *v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  PUNICODE_STRING pImageFileName; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *Blink; // [rsp+30h] [rbp-D0h]
  char *v34; // [rsp+38h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD Src[132]; // [rsp+60h] [rbp-A0h] BYREF

  pImageFileName = 0LL;
  v34 = a4;
  v8 = a3;
  v10 = 0LL;
  v11 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(140LL, PrimaryToken)
    && (SepAdtAuditablePrivilege(a2, v8) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    LODWORD(Src[0]) = 6;
    LODWORD(Src[2]) = 524428;
    *(_QWORD *)((char *)Src + 4) = 4703LL;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ActiveProcessors.Bitmap[14] )
    {
      Blink = Process[1].Header.WaitListHead.Blink;
      if ( SeLocateProcessImageName(Process, &pImageFileName) >= 0 )
      {
        v14 = SubjectContext.PrimaryToken;
        v15 = *(_QWORD *)(a1 + 24);
        ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
        if ( SubjectContext.ClientToken )
        {
          ClientToken = (_QWORD **)SubjectContext.ClientToken;
          v14 = SubjectContext.ClientToken;
        }
        v17 = v14[3];
        v32 = *ClientToken[19];
        if ( a5 )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12 * a5 + 20LL, 0x70416553u);
          v10 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_34;
          PoolWithTag[1] = 1;
          *PoolWithTag = a5;
          v19 = v34;
          v20 = (char *)PoolWithTag - v34;
          v21 = a5;
          do
          {
            *(_QWORD *)&v19[v20 + 8] = *(_QWORD *)v19;
            *(_DWORD *)&v19[v20 + 16] = *((_DWORD *)v19 + 2);
            v19 += 12;
            --v21;
          }
          while ( v21 );
        }
        if ( !(_DWORD)v8 )
        {
LABEL_23:
          Src[6] = v32;
          LODWORD(Src[3]) = 4;
          Src[7] = 0x2000000001LL;
          v25 = *(unsigned __int8 *)(v32 + 1);
          Src[11] = 0x800000005LL;
          HIDWORD(Src[3]) = 4 * v25 + 8;
          Src[10] = SeSubsystemName;
          v26 = pImageFileName->Length + 16;
          Src[12] = v17;
          HIDWORD(Src[19]) = v26;
          Src[24] = Blink;
          Src[15] = 0x800000023LL;
          Src[16] = v15;
          LODWORD(Src[19]) = 2;
          Src[22] = pImageFileName;
          Src[23] = 0x80000000BLL;
          if ( v10 )
          {
            v27 = *v10;
            LODWORD(Src[27]) = 8;
            if ( v27 )
              v28 = 12 * (v27 - 1) + 20;
            else
              v28 = 8;
            HIDWORD(Src[27]) = v28;
            Src[30] = v10;
          }
          if ( v11 )
          {
            v29 = *v11;
            LODWORD(Src[31]) = 8;
            if ( v29 )
              v30 = 12 * (v29 - 1) + 20;
            else
              v30 = 8;
            HIDWORD(Src[31]) = v30;
            Src[34] = v11;
          }
          LODWORD(Src[1]) = 8;
          SepAdtLogAuditRecord(Src);
          goto LABEL_34;
        }
        v22 = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v8) + 20LL, 0x70416553u);
        v11 = v22;
        if ( v22 )
        {
          v22[1] = 1;
          *v22 = v8;
          v23 = v8;
          v24 = (char *)v22 - a2;
          do
          {
            *(_QWORD *)&a2[v24 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v24 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v23;
          }
          while ( v23 );
          goto LABEL_23;
        }
      }
LABEL_34:
      if ( pImageFileName )
        ExFreePoolWithTag(pImageFileName, 0);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  SeReleaseSubjectContext(&SubjectContext);
}
