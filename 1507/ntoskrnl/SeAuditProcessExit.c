/*
 * XREFs of SeAuditProcessExit @ 0x1406D1F2C
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessExit(PEPROCESS Process, unsigned int a2)
{
  __int64 v3; // r14
  NTSTATUS v4; // eax
  PUNICODE_STRING v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  PUNICODE_STRING pImageFileName; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+30h] [rbp-D0h] BYREF

  pImageFileName = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  v4 = SeLocateProcessImageName(Process, &pImageFileName);
  v5 = pImageFileName;
  if ( v4 < 0 )
  {
    SepAuditFailed((unsigned int)v4);
  }
  else
  {
    v6 = PsReferencePrimaryToken(Process);
    LODWORD(Src[2]) = 524422;
    Src[0] = 0x125100000005LL;
    v7 = (__int64 *)v6[19];
    Src[10] = SeSubsystemName;
    Src[12] = v6[3];
    v8 = *v7;
    Src[20] = Process[1].Header.WaitListHead.Blink;
    LODWORD(v7) = *(unsigned __int8 *)(v8 + 1);
    v9 = v5->Length + 16;
    LODWORD(Src[3]) = 4;
    Src[6] = v8;
    Src[7] = 0x2000000001LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)v7 + 8;
    Src[11] = 0x800000005LL;
    Src[15] = 0x40000000ALL;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v9;
    Src[26] = v5;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject(v6);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
