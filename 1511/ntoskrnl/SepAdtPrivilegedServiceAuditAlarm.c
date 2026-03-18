/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74
 * Callers:
 *     SePrivilegedServiceAuditAlarm @ 0x140472A30 (SePrivilegedServiceAuditAlarm.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404BB38C (NtPrivilegedServiceAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140478B20 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        char a7)
{
  __int64 *v8; // r8
  _KPROCESS *Process; // rcx
  NTSTATUS v10; // eax
  PUNICODE_STRING v11; // rdi
  int v12; // esi
  __int64 v13; // r12
  unsigned __int16 *v14; // r13
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v23; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY *Blink; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *v25; // [rsp+58h] [rbp-B0h]
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF

  pImageFileName = 0LL;
  v25 = a3;
  v8 = &v21;
  v23 = a2;
  LOBYTE(a2) = a7;
  LOBYTE(v8) = a7 == 0;
  if ( (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a6, (_DWORD)a2, (_DWORD)v8, a1, (__int64)&v21) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Blink = Process[1].Header.WaitListHead.Blink;
    v10 = SeLocateProcessImageName(Process, &pImageFileName);
    v11 = pImageFileName;
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( a4 )
        v13 = **(_QWORD **)(a4 + 152);
      else
        v13 = **(_QWORD **)(a5 + 152);
      v14 = (unsigned __int16 *)&SeSubsystemName;
      v15 = *(_QWORD *)(a5 + 24);
      if ( v23 )
        v14 = v23;
      memset(Src, 0, 0x418uLL);
      Src[0] = 0x124100000004LL;
      LOWORD(Src[2]) = v21;
      WORD1(Src[2]) = 8;
      if ( !a7 )
        WORD1(Src[2]) = 16;
      v16 = *(unsigned __int8 *)(v13 + 1);
      LODWORD(Src[3]) = 4;
      v17 = *v14 + 16;
      Src[6] = v13;
      LODWORD(Src[7]) = 1;
      HIDWORD(Src[3]) = 4 * v16 + 8;
      HIDWORD(Src[7]) = v17;
      Src[10] = v14;
      Src[11] = 0x800000005LL;
      if ( a4 )
        Src[12] = *(_QWORD *)(a4 + 24);
      else
        Src[12] = v15;
      HIDWORD(Src[15]) = v17;
      LODWORD(Src[15]) = 1;
      Src[18] = v14;
      if ( v25 )
      {
        v18 = *v25;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v18 + 16;
        Src[22] = v25;
      }
      if ( a6 )
      {
        v19 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * (v19 - 1) + 20;
        }
      }
      Src[28] = Blink;
      v20 = pImageFileName->Length + 16;
      Src[27] = 0x80000000BLL;
      HIDWORD(Src[31]) = v20;
      LODWORD(Src[31]) = 2;
      Src[34] = pImageFileName;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v12 < 0 )
      SepAuditFailed((unsigned int)v12);
  }
}
