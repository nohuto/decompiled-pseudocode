/*
 * XREFs of SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14047896C (SePrivilegeObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x1404BD7B8 (SeAuditHandleCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140509D38 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14054A420 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140478B20 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x14062DFC4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

char __fastcall SepAdtPrivilegeObjectAuditAlarm(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        char a10)
{
  __int64 *v11; // rdx
  unsigned __int16 *v12; // r13
  PSID *v14; // rax
  unsigned __int8 *v15; // rsi
  NTSTATUS v16; // eax
  unsigned __int16 *v17; // r15
  __int64 v18; // rbx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // r9
  unsigned int v25; // r10d
  int v26; // r11d
  int v27; // eax
  PUNICODE_STRING v28; // rbx
  int v29; // edx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  pImageFileName = 0LL;
  v11 = &v30;
  v32 = a1;
  v12 = a3;
  v33 = a4;
  LOBYTE(v11) = a10;
  LOBYTE(a3) = a10 == 0;
  if ( !(unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a9, (_DWORD)v11, (_DWORD)a3, 0, (__int64)&v30) )
    return 0;
  v14 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v15 = (unsigned __int8 *)*v14;
  if ( RtlEqualSid(SeLocalSystemSid, *v14) )
    return 0;
  v16 = SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName);
  if ( v16 < 0 )
  {
    SepAuditFailed((unsigned int)v16);
    return 0;
  }
  v17 = (unsigned __int16 *)&SeSubsystemName;
  v18 = *(_QWORD *)(a6 + 24);
  if ( v32 )
    v17 = v32;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v30;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v19 = v15[1];
  v20 = *v17 + 16;
  Src[6] = v15;
  LODWORD(Src[3]) = 4;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[3]) = 4 * v19 + 8;
  HIDWORD(Src[7]) = v20;
  Src[10] = v17;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v18;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v20;
  Src[18] = v17;
  if ( a2 )
  {
    v21 = *a2 + 16;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v21;
    Src[22] = a2;
  }
  if ( v12 )
  {
    v22 = *v12 + 16;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v22;
    Src[26] = v12;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v33);
  Src[32] = a8;
  HIDWORD(Src[31]) = v24;
  if ( a2 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v24;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v27 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v23;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * (v27 - 1) + 20;
    }
  }
  LODWORD(Src[43]) = 2;
  v28 = pImageFileName;
  Src[40] = a7;
  Src[39] = __PAIR64__(v23, v25);
  v29 = v26 + pImageFileName->Length;
  Src[46] = pImageFileName;
  HIDWORD(Src[43]) = v29;
  LODWORD(Src[1]) = v25;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(v28, 0);
  return 1;
}
