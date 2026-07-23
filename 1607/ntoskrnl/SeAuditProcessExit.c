/*
 * XREFs of SeAuditProcessExit @ 0x14068E478
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessExit(PEPROCESS Process, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  _QWORD *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P[0] = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = PsReferencePrimaryToken(Process);
    LODWORD(Src[2]) = 524423;
    Src[0] = 0x125100000005LL;
    v6 = (__int64 *)v5[19];
    Src[10] = &SeSubsystemName;
    Src[12] = v5[3];
    v7 = *v6;
    Src[20] = Process[1].Header.WaitListHead.Blink;
    LODWORD(Src[3]) = 4;
    LODWORD(v6) = *(unsigned __int8 *)(v7 + 1);
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)v6 + 8;
    Src[26] = P[0];
    Src[15] = 0x40000000ALL;
    HIDWORD(Src[23]) = *(unsigned __int16 *)P[0] + 16;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject(v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
