/*
 * XREFs of SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404CFF94 (SeObjectReferenceAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x1406D3C14 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SepAdtObjectReferenceAuditAlarm(PEPROCESS Process, _QWORD *a2, unsigned int a3, char a4)
{
  void *v4; // rdi
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  int NameString; // eax
  unsigned __int16 *v13; // rsi
  int v14; // r14d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int16 *v19; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-C8h]
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v4 = 0LL;
  v5 = *a2;
  v7 = a2[2];
  v21 = a2;
  v19 = 0LL;
  if ( v5 )
    v9 = *(__int64 **)(v5 + 152);
  else
    v9 = *(__int64 **)(v7 + 152);
  v10 = *v9;
  v11 = *(_QWORD *)(v7 + 24);
  memset(Src, 0, 0x418uLL);
  LODWORD(Src[1]) = 0;
  LODWORD(Src[2]) = 524408;
  Src[0] = 0x125300000003LL;
  if ( !a4 )
    WORD1(Src[2]) = 16;
  NameString = SepQueryNameString(Process, (PUNICODE_STRING *)&P);
  v13 = (unsigned __int16 *)P;
  v14 = NameString;
  if ( NameString >= 0 )
  {
    v14 = SepQueryTypeString(Process, &v19);
    if ( v14 < 0 )
    {
      v4 = v19;
    }
    else
    {
      v15 = *(unsigned __int8 *)(v10 + 1);
      LODWORD(Src[3]) = 4;
      Src[6] = v10;
      Src[11] = 0x800000005LL;
      HIDWORD(Src[3]) = 4 * v15 + 8;
      Src[7] = 0x2000000001LL;
      Src[10] = SeSubsystemName;
      if ( v5 )
        Src[12] = *(_QWORD *)(v5 + 24);
      else
        Src[12] = v11;
      v4 = v19;
      if ( v19 )
      {
        v16 = *v19;
        LODWORD(Src[15]) = 1;
        HIDWORD(Src[15]) = v16 + 16;
        Src[18] = v19;
      }
      if ( v13 )
      {
        v17 = *v13;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v17 + 16;
        Src[22] = v13;
      }
      Src[24] = a3;
      Src[28] = a3;
      LODWORD(Src[1]) = 8;
      Src[23] = 0x400000007LL;
      Src[32] = v21[3];
      Src[25] = 3LL;
      Src[27] = 0x40000000ALL;
      Src[31] = 0x80000000BLL;
      SepAdtLogAuditRecord(Src);
    }
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v14 < 0 )
    SepAuditFailed((unsigned int)v14);
}
