/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC
 * Callers:
 *     SePrivilegedServiceAuditAlarm @ 0x14041423C (SePrivilegedServiceAuditAlarm.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404A084C (NtPrivilegedServiceAuditAlarm.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140413B78 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        int a1,
        const int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        char a7)
{
  __int64 *v8; // r8
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int64 v12; // r15
  const int *v13; // r12
  __int64 v14; // rbx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v22; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY *Blink; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  P = 0LL;
  v8 = &v20;
  v22 = a2;
  LOBYTE(a2) = a7;
  LOBYTE(v8) = a7 == 0;
  if ( (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a6, (_DWORD)a2, (_DWORD)v8, a1, (__int64)&v20) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      if ( a4 )
        v12 = **(_QWORD **)(a4 + 152);
      else
        v12 = **(_QWORD **)(a5 + 152);
      v13 = &SeSubsystemName;
      v14 = *(_QWORD *)(a5 + 24);
      if ( v22 )
        v13 = v22;
      memset(Src, 0, 0x418uLL);
      Src[0] = 0x124100000004LL;
      LOWORD(Src[2]) = v20;
      WORD1(Src[2]) = 8;
      if ( !a7 )
        WORD1(Src[2]) = 16;
      v15 = *(unsigned __int8 *)(v12 + 1);
      LODWORD(Src[3]) = 4;
      v16 = *(unsigned __int16 *)v13 + 16;
      Src[6] = v12;
      LODWORD(Src[7]) = 1;
      HIDWORD(Src[3]) = 4 * v15 + 8;
      HIDWORD(Src[7]) = v16;
      Src[10] = v13;
      Src[11] = 0x800000005LL;
      if ( a4 )
        Src[12] = *(_QWORD *)(a4 + 24);
      else
        Src[12] = v14;
      LODWORD(Src[15]) = 1;
      HIDWORD(Src[15]) = v16;
      Src[18] = v13;
      if ( a3 )
      {
        v17 = *a3;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v17 + 16;
        Src[22] = a3;
      }
      if ( a6 )
      {
        v18 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * (v18 - 1) + 20;
        }
      }
      Src[28] = Blink;
      Src[34] = P;
      v19 = *(unsigned __int16 *)P + 16;
      Src[27] = 0x80000000BLL;
      HIDWORD(Src[31]) = v19;
      LODWORD(Src[31]) = 2;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
}
