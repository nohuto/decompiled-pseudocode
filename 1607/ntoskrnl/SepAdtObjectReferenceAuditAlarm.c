/*
 * XREFs of SepAdtObjectReferenceAuditAlarm @ 0x14068F3E8
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404058E0 (SeObjectReferenceAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SepAdtObjectReferenceAuditAlarm(char *a1, __int64 *a2, unsigned int a3, char a4)
{
  void *v4; // rdi
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int16 *v20; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v4 = 0LL;
  v5 = *a2;
  v7 = a2[2];
  v20 = 0LL;
  if ( v5 )
    v10 = *(__int64 **)(v5 + 152);
  else
    v10 = *(__int64 **)(v7 + 152);
  v11 = *v10;
  v12 = *(_QWORD *)(v7 + 24);
  memset(Src, 0, 0x418uLL);
  LODWORD(Src[1]) = 0;
  LODWORD(Src[2]) = 524409;
  Src[0] = 0x125300000003LL;
  if ( !a4 )
    WORD1(Src[2]) = 16;
  v13 = SepQueryNameString(a1, &P);
  if ( v13 >= 0 )
  {
    v13 = SepQueryTypeString(a1, &v20, v14, v15);
    if ( v13 < 0 )
    {
      v4 = v20;
    }
    else
    {
      v16 = *(unsigned __int8 *)(v11 + 1);
      LODWORD(Src[3]) = 4;
      Src[6] = v11;
      Src[11] = 0x800000005LL;
      HIDWORD(Src[3]) = 4 * v16 + 8;
      Src[10] = &SeSubsystemName;
      Src[7] = 0x2000000001LL;
      if ( v5 )
        Src[12] = *(_QWORD *)(v5 + 24);
      else
        Src[12] = v12;
      v4 = v20;
      if ( v20 )
      {
        v17 = *v20;
        LODWORD(Src[15]) = 1;
        HIDWORD(Src[15]) = v17 + 16;
        Src[18] = v20;
      }
      if ( P )
      {
        v18 = *(unsigned __int16 *)P;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v18 + 16;
        Src[22] = P;
      }
      Src[24] = a3;
      Src[28] = a3;
      Src[32] = a2[3];
      Src[23] = 0x400000007LL;
      Src[25] = 3LL;
      Src[27] = 0x40000000ALL;
      Src[31] = 0x80000000BLL;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v13 < 0 )
    SepAuditFailed((unsigned int)v13);
}
