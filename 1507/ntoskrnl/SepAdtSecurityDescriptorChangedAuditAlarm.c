/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x140587094 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x1406D7F28 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SepAdtSecurityDescriptorChangedAuditAlarm(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  _KPROCESS *Process; // rcx
  NTSTATUS v14; // eax
  PUNICODE_STRING v15; // rdi
  int v16; // esi
  __int16 v17; // ax
  int v18; // edx
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  PUNICODE_STRING pImageFileName; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h]
  struct _LIST_ENTRY *Blink; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  pImageFileName = 0LL;
  v32 = a7;
  v30 = a9;
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = Process[1].Header.WaitListHead.Blink;
  v14 = SeLocateProcessImageName(Process, &pImageFileName);
  v15 = pImageFileName;
  v16 = v14;
  if ( v14 >= 0 )
  {
    memset(Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src[0] = 0x132B00000006LL;
      v17 = 138;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        HIDWORD(Src[0]) = 4911;
      }
      else
      {
        HIDWORD(Src[0]) = 4913;
        if ( (a8 & 0x40) == 0 )
          HIDWORD(Src[0]) = 4670;
      }
      LODWORD(Src[0]) = 3;
      v17 = 140;
    }
    v18 = *a2;
    LOWORD(Src[2]) = v17;
    v19 = v18 + 16;
    WORD1(Src[2]) = 8;
    v20 = *(unsigned __int8 *)(a6 + 1);
    LODWORD(Src[3]) = 4;
    Src[6] = a6;
    LODWORD(Src[7]) = 1;
    HIDWORD(Src[7]) = v19;
    HIDWORD(Src[3]) = 4 * v20 + 8;
    v21 = *a1;
    Src[10] = a2;
    Src[11] = 0x800000005LL;
    if ( v21 )
      Src[12] = *(_QWORD *)(v21 + 24);
    else
      Src[12] = *(_QWORD *)(a1[2] + 24);
    v22 = *a3 + 16;
    Src[22] = a3;
    LODWORD(Src[15]) = 1;
    HIDWORD(Src[15]) = v19;
    Src[18] = a2;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v22;
    if ( a4 )
    {
      v23 = *a4;
      LODWORD(Src[23]) = 2;
      HIDWORD(Src[23]) = v23 + 16;
      Src[26] = a4;
    }
    Src[27] = 0x80000000BLL;
    v24 = ObNormalizeHandleValue(a5);
    v25 = v32;
    Src[28] = v24;
    LODWORD(Src[31]) = 24;
    v26 = SepSecurityDescriptorStrictLength(v32);
    Src[34] = v25;
    v27 = v30;
    HIDWORD(Src[31]) = v26;
    Src[32] = a8;
    Src[33] = 4LL;
    LODWORD(Src[35]) = 24;
    HIDWORD(Src[35]) = SepSecurityDescriptorStrictLength(v30);
    Src[40] = Blink;
    v28 = v15->Length + 16;
    Src[38] = v27;
    HIDWORD(Src[43]) = v28;
    Src[36] = a8;
    Src[37] = 4LL;
    Src[39] = 0x80000000BLL;
    LODWORD(Src[43]) = 2;
    Src[46] = v15;
    LODWORD(Src[1]) = 11;
    SepAdtLogAuditRecord(Src);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v16 < 0 )
    SepAuditFailed((unsigned int)v16);
}
