/*
 * XREFs of SeAuditProcessCreation @ 0x14053D024
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsQueryProcessCommandLine @ 0x1400F1FB4 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(struct _KPROCESS *BugCheckParameter1, unsigned __int16 *a2)
{
  PUNICODE_STRING v3; // rdi
  unsigned __int16 *PoolWithTag; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int v6; // r15d
  PEPROCESS v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  int v10; // ecx
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  int v16; // ecx
  PUNICODE_STRING v17; // r14
  int v18; // eax
  int v19; // eax
  int Length; // eax
  char v21; // [rsp+30h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int NumberOfBytes_4; // [rsp+38h] [rbp-C8h]
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-C0h] BYREF
  PUNICODE_STRING v25; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v26; // [rsp+50h] [rbp-B0h]
  PEPROCESS Process; // [rsp+58h] [rbp-A8h] BYREF
  struct _SINGLE_LIST_ENTRY *v28; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v31; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *Blink; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v31 = a2;
  v3 = 0LL;
  Process = 0LL;
  PoolWithTag = 0LL;
  pImageFileName = 0LL;
  v25 = 0LL;
  v21 = 0;
  v26 = DestinationSid;
  NumberOfBytes_4 = 0;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = BugCheckParameter1[1].SwapListEntry.Next;
  Blink = BugCheckParameter1[1].Header.WaitListHead.Blink;
  v28 = Next;
  v6 = SeLocateProcessImageName(BugCheckParameter1, &pImageFileName);
  if ( v6 < 0 )
    goto LABEL_30;
  if ( PsLookupProcessByProcessId(Next, &Process) < 0 )
  {
    NumberOfBytes_4 = 1845;
  }
  else
  {
    v7 = Process;
    if ( Process[1].ActiveProcessors.Bitmap[15] )
    {
      SeLocateProcessImageName(Process, &v25);
      v3 = v25;
    }
    else
    {
      NumberOfBytes_4 = 1844;
    }
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  v8 = PsReferencePrimaryToken(BugCheckParameter1);
  v9 = v8;
  if ( !v8 )
  {
    v6 = -1073741700;
LABEL_30:
    v17 = pImageFileName;
    goto LABEL_31;
  }
  v10 = *(_DWORD *)(v8[27] + 32LL);
  if ( (v10 & 4) != 0 )
    v11 = 3;
  else
    v11 = ((v10 & 2) != 0) + 1;
  v12 = *((unsigned int *)v8 + 52);
  v13 = v9[3];
  v30 = v13;
  if ( (unsigned int)v12 >= *((_DWORD *)v9 + 31) )
    v26 = SeNullSid;
  else
    v6 = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v9[19] + 16 * v12));
  ObfDereferenceObject(v9);
  if ( v6 < 0 )
  {
    v17 = pImageFileName;
    goto LABEL_20;
  }
  if ( SepRmAuditProcessCommandLine )
  {
    if ( v31 )
    {
      PoolWithTag = v31;
      goto LABEL_15;
    }
    v6 = PsQueryProcessCommandLine((ULONG_PTR)BugCheckParameter1, 0LL, 0, 0, &NumberOfBytes);
    if ( v6 == -1073741820 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4C436553u);
      if ( PoolWithTag )
      {
        v6 = PsQueryProcessCommandLine(
               (ULONG_PTR)BugCheckParameter1,
               (__int64)PoolWithTag,
               NumberOfBytes,
               0,
               &NumberOfBytes);
        if ( v6 >= 0 )
        {
          v21 = 1;
          goto LABEL_15;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, &word_140551830);
  PoolWithTag = (unsigned __int16 *)&DestinationString;
LABEL_15:
  SeCaptureSubjectContext(&SubjectContext);
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x125000000005LL;
  LODWORD(Src[2]) = 524421;
  v14 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
  v15 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v30), v13);
  v16 = *(unsigned __int8 *)(v14 + 1);
  v17 = pImageFileName;
  Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[16] = Blink;
  v18 = pImageFileName->Length + 16;
  HIDWORD(Src[3]) = 4 * v16 + 8;
  HIDWORD(Src[19]) = v18;
  Src[28] = v28;
  v19 = *PoolWithTag + 16;
  Src[10] = SeSubsystemName;
  Src[6] = v14;
  Src[11] = 0x800000005LL;
  LODWORD(Src[3]) = 4;
  Src[7] = 0x2000000001LL;
  Src[15] = 0x80000000BLL;
  LODWORD(Src[19]) = 2;
  Src[22] = pImageFileName;
  Src[23] = 0x400000015LL;
  Src[24] = (unsigned int)(v11 + 1935);
  Src[27] = 0x80000000BLL;
  LODWORD(Src[31]) = 34;
  HIDWORD(Src[31]) = v19;
  Src[34] = PoolWithTag;
  if ( v15 )
  {
    Src[35] = 0x800000023LL;
    Src[36] = v13;
  }
  else
  {
    LODWORD(Src[35]) = 6;
  }
  v3 = v25;
  if ( NumberOfBytes_4 )
  {
    Src[39] = 0x400000015LL;
    Src[40] = NumberOfBytes_4;
  }
  else
  {
    Length = v25->Length;
    LODWORD(Src[39]) = 2;
    HIDWORD(Src[39]) = Length + 16;
    Src[42] = v25;
  }
  Src[46] = v26;
  LODWORD(Src[43]) = 4;
  LODWORD(Src[1]) = 11;
  HIDWORD(Src[43]) = 4 * (unsigned __int8)v26[1] + 8;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
LABEL_20:
  if ( v6 < 0 )
LABEL_31:
    SepAuditFailed((unsigned int)v6);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v21 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
