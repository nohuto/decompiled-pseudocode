/*
 * XREFs of SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0
 * Callers:
 *     SePrivilegeObjectAuditAlarm @ 0x140435954 (SePrivilegeObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x140554E5C (SeAuditHandleCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405BCDE4 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140434B7C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x140587094 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
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
        unsigned int *a9,
        unsigned __int8 a10)
{
  PSID *v13; // rax
  unsigned __int8 *v14; // rsi
  NTSTATUS v15; // eax
  unsigned __int16 *v16; // r15
  __int64 v17; // rbx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // r9
  unsigned int v24; // r10d
  int v25; // r11d
  unsigned int v26; // eax
  PUNICODE_STRING v27; // rbx
  int v28; // edx
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  pImageFileName = 0LL;
  v31 = a1;
  v32 = a4;
  if ( !SepAdtAuditPrivilegeUseWithContext(a9, a10, a10 == 0, 0LL, &v29) )
    return 0;
  v13 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v14 = (unsigned __int8 *)*v13;
  if ( RtlEqualSid(SeLocalSystemSid, *v13) )
    return 0;
  v15 = SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName);
  if ( v15 < 0 )
  {
    SepAuditFailed((unsigned int)v15);
    return 0;
  }
  v16 = SeSubsystemName;
  v17 = *(_QWORD *)(a6 + 24);
  if ( v31 )
    v16 = v31;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v29;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v18 = v14[1];
  v19 = *v16 + 16;
  Src[6] = v14;
  LODWORD(Src[3]) = 4;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[3]) = 4 * v18 + 8;
  HIDWORD(Src[7]) = v19;
  Src[10] = v16;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v17;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v19;
  Src[18] = v16;
  if ( a2 )
  {
    v20 = *a2 + 16;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v20;
    Src[22] = a2;
  }
  if ( a3 )
  {
    v21 = *a3 + 16;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v21;
    Src[26] = a3;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v32);
  Src[32] = a8;
  HIDWORD(Src[31]) = v23;
  if ( a2 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v23;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v26 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v22;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * (v26 - 1) + 20;
    }
  }
  LODWORD(Src[43]) = 2;
  v27 = pImageFileName;
  Src[40] = a7;
  Src[39] = __PAIR64__(v22, v24);
  v28 = v25 + pImageFileName->Length;
  Src[46] = pImageFileName;
  HIDWORD(Src[43]) = v28;
  LODWORD(Src[1]) = v24;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(v27, 0);
  return 1;
}
