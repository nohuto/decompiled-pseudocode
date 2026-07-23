/*
 * XREFs of SepAdtTokenRightAdjusted @ 0x14045F320
 * Callers:
 *     SepAdjustPrivileges @ 0x14045ED98 (SepAdjustPrivileges.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepAdtAuditablePrivilege @ 0x140219F08 (SepAdtAuditablePrivilege.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 */

void __fastcall SepAdtTokenRightAdjusted(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  __int64 v8; // r12
  int *v9; // r14
  int *v10; // rsi
  _QWORD **ClientToken; // rdi
  _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *PrimaryToken; // rcx
  _QWORD **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  int *PoolWithTag; // rax
  char *v18; // rcx
  signed __int64 v19; // rdx
  __int64 v20; // r9
  int *v21; // rax
  __int64 v22; // rdx
  signed __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h]
  char *v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Blink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v31 = a1;
  v32 = a4;
  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(139LL)
    && (SepAdtAuditablePrivilege(a2, v8) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    LODWORD(Src[1]) = 0;
    LODWORD(Src[2]) = 524427;
    Src[0] = 0x125F00000005LL;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].ActiveProcessors.Bitmap[15] )
    {
      Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P) >= 0 )
      {
        PrimaryToken = SubjectContext.PrimaryToken;
        v14 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v14 = ClientToken;
          PrimaryToken = ClientToken;
        }
        v15 = PrimaryToken[3];
        v16 = *(_QWORD *)(v31 + 24);
        v33 = *v14[19];
        if ( a5 )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12 * a5 + 20LL, 0x70416553u);
          v9 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_2;
          PoolWithTag[1] = 1;
          *PoolWithTag = a5;
          v18 = v32;
          v19 = (char *)PoolWithTag - v32;
          v20 = a5;
          do
          {
            *(_QWORD *)&v18[v19 + 8] = *(_QWORD *)v18;
            *(_DWORD *)&v18[v19 + 16] = *((_DWORD *)v18 + 2);
            v18 += 12;
            --v20;
          }
          while ( v20 );
        }
        if ( (_DWORD)v8 )
        {
          v21 = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v8) + 20LL, 0x70416553u);
          v10 = v21;
          if ( !v21 )
            goto LABEL_2;
          v21[1] = 1;
          *v21 = v8;
          v22 = v8;
          v23 = (char *)v21 - a2;
          do
          {
            *(_QWORD *)&a2[v23 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v23 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v22;
          }
          while ( v22 );
        }
        Src[6] = v33;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v24 = *(unsigned __int8 *)(v33 + 1);
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * v24 + 8;
        Src[10] = &SeSubsystemName;
        v25 = *(unsigned __int16 *)P + 16;
        Src[12] = v15;
        HIDWORD(Src[19]) = v25;
        Src[24] = Blink;
        Src[15] = 0x800000023LL;
        Src[16] = v16;
        LODWORD(Src[19]) = 2;
        Src[22] = P;
        Src[23] = 0x80000000BLL;
        if ( v9 )
        {
          v26 = *v9;
          LODWORD(Src[27]) = 8;
          if ( v26 )
            v27 = 12 * (v26 - 1) + 20;
          else
            v27 = 8;
          HIDWORD(Src[27]) = v27;
          Src[30] = v9;
        }
        if ( v10 )
        {
          v28 = *v10;
          LODWORD(Src[31]) = 8;
          if ( v28 )
            v29 = 12 * (v28 - 1) + 20;
          else
            v29 = 8;
          HIDWORD(Src[31]) = v29;
          Src[34] = v10;
        }
        LODWORD(Src[1]) = 8;
        SepAdtLogAuditRecord(Src);
      }
    }
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
