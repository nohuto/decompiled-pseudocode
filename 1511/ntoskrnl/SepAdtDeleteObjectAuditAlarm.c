/*
 * XREFs of SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1403B584C (NtDeleteObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406520E0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x14062DFC4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void SepAdtDeleteObjectAuditAlarm(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        char a6,
        ...)
{
  NTSTATUS v9; // eax
  int *v10; // rsi
  unsigned __int16 *p_Length; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  PUNICODE_STRING v18; // rbx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  _KPROCESS *Process; // rcx
  unsigned __int16 v22; // [rsp+40h] [rbp-C0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+470h] [rbp+370h] BYREF
  __int64 v26; // [rsp+474h] [rbp+374h]
  int v27; // [rsp+47Ch] [rbp+37Ch]

  pImageFileName = 0LL;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, 0LL, a6, &v22) )
  {
    v9 = SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName);
    if ( v9 < 0 )
    {
      SepAuditFailed((unsigned int)v9);
      v18 = pImageFileName;
    }
    else
    {
      v10 = &v25;
      if ( a5 )
        v10 = a5;
      memset(Src, 0, 0x418uLL);
      p_Length = SeSubsystemName;
      v12 = *a3;
      LOWORD(Src[2]) = v22;
      if ( a1 )
        p_Length = &a1->Length;
      Src[0] = 0x123400000003LL;
      v13 = v12;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !v12 )
        v13 = a3[2];
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(**(_QWORD **)(v13 + 152) + 1LL) + 8;
      v14 = v12;
      if ( !v12 )
        v14 = a3[2];
      v15 = *(_QWORD **)(v14 + 152);
      LODWORD(Src[7]) = 1;
      Src[10] = p_Length;
      Src[11] = 0x800000005LL;
      Src[6] = *v15;
      v16 = *p_Length + 16;
      HIDWORD(Src[7]) = v16;
      if ( !v12 )
        v12 = a3[2];
      v17 = *(_QWORD *)(v12 + 24);
      HIDWORD(Src[15]) = v16;
      Src[18] = p_Length;
      Src[19] = 0x80000000BLL;
      Src[12] = v17;
      LODWORD(Src[15]) = 1;
      Src[20] = ObNormalizeHandleValue(a2);
      v18 = pImageFileName;
      Src[23] = __PAIR64__(v20, v19);
      Process = KeGetCurrentThread()->ApcState.Process;
      LODWORD(Src[27]) = 2;
      Src[30] = pImageFileName;
      Src[31] = 0x100000000DLL;
      Src[24] = Process[1].Header.WaitListHead.Blink;
      HIDWORD(Src[27]) = pImageFileName->Length + 16;
      Src[34] = v10;
      LODWORD(Src[1]) = v20;
      SepAdtLogAuditRecord(Src);
    }
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
}
