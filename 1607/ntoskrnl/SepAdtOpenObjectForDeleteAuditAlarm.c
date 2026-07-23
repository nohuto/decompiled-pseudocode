/*
 * XREFs of SepAdtOpenObjectForDeleteAuditAlarm @ 0x14068FEA4
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall SepAdtOpenObjectForDeleteAuditAlarm(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        int *a10,
        int a11,
        __int64 a12,
        int *a13)
{
  int *v13; // r12
  __int64 *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  _QWORD Src[132]; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+440h] [rbp+340h] BYREF
  __int64 v26; // [rsp+444h] [rbp+344h]
  int v27; // [rsp+44Ch] [rbp+34Ch]

  v25 = 0;
  v13 = &v25;
  v26 = 0LL;
  v27 = 0;
  if ( a13 )
    v13 = a13;
  if ( a6 )
    v16 = *(__int64 **)(a6 + 152);
  else
    v16 = *(__int64 **)(a7 + 152);
  v17 = *v16;
  v18 = *(_QWORD *)(a7 + 24);
  memset(Src, 0, 0x418uLL);
  v19 = *(unsigned __int8 *)(v17 + 1);
  Src[6] = v17;
  Src[0] = 0x123300000003LL;
  LOWORD(Src[2]) = a1;
  LODWORD(Src[3]) = 4;
  HIDWORD(Src[3]) = 4 * v19 + 8;
  Src[7] = 0x2000000001LL;
  WORD1(Src[2]) = 8;
  Src[10] = &SeSubsystemName;
  Src[11] = 0x800000005LL;
  if ( a6 )
    Src[12] = *(_QWORD *)(a6 + 24);
  else
    Src[12] = v18;
  Src[18] = &SeSubsystemName;
  Src[15] = 0x2000000001LL;
  if ( a4 )
  {
    v20 = *a4;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v20 + 16;
    Src[22] = a4;
  }
  if ( a5 )
  {
    if ( a1 == 117 || (LODWORD(Src[23]) = 1, a1 == 129) )
      LODWORD(Src[23]) = 2;
    v21 = *a5;
    Src[26] = a5;
    HIDWORD(Src[23]) = v21 + 16;
  }
  Src[28] = 0LL;
  Src[37] = 4LL;
  Src[27] = 0x80000000BLL;
  Src[31] = 0x100000000DLL;
  Src[34] = v13;
  Src[35] = 0x400000007LL;
  Src[36] = a9;
  Src[39] = 0x40000000ALL;
  Src[40] = a9;
  if ( a10 )
  {
    v22 = *a10;
    if ( *a10 )
    {
      LODWORD(Src[43]) = 8;
      Src[46] = a10;
      HIDWORD(Src[43]) = 12 * (v22 - 1) + 20;
    }
  }
  Src[48] = a12;
  Src[47] = 0x80000000BLL;
  LODWORD(Src[1]) = 12;
  SepAdtLogAuditRecord(Src);
  return 1;
}
