/*
 * XREFs of SeAuditProcessCreation @ 0x14056F30C
 * Callers:
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsQueryProcessCommandLine @ 0x1400B0074 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(PEPROCESS Process, unsigned __int16 *a2)
{
  unsigned __int16 *p_DestinationString; // rdi
  unsigned int v3; // r12d
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int AllocatedFullProcessImageName; // r14d
  PEPROCESS v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // ecx
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  int v16; // ecx
  int v17; // eax
  char v18; // [rsp+30h] [rbp-D0h]
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Blink; // [rsp+68h] [rbp-98h]
  struct _SINGLE_LIST_ENTRY *v26; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  Processa = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  p_DestinationString = 0LL;
  v20 = 0LL;
  v3 = 0;
  v23 = a2;
  v18 = 0;
  v22 = DestinationSid;
  if ( !Process[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = Process[1].SwapListEntry.Next;
  Blink = Process[1].Header.WaitListHead.Blink;
  v26 = Next;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Next, &Processa) < 0 )
    {
      v3 = 1845;
    }
    else
    {
      v7 = Processa;
      if ( Processa[1].ActiveProcessors.Bitmap[15] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Processa, (__int64)&v20);
      else
        v3 = 1844;
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    v8 = PsReferencePrimaryToken(Process);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(_DWORD *)(v8[27] + 32LL);
      if ( (v10 & 4) != 0 )
        v11 = 3;
      else
        v11 = ((v10 & 2) != 0) + 1;
      v12 = *((unsigned int *)v8 + 52);
      v13 = v9[3];
      v24 = v13;
      if ( (unsigned int)v12 >= *((_DWORD *)v9 + 31) )
        v22 = SeNullSid;
      else
        AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v9[19] + 16 * v12));
      ObfDereferenceObject(v9);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        if ( !SepRmAuditProcessCommandLine )
        {
LABEL_14:
          RtlInitUnicodeString(&DestinationString, &word_1405841A0);
          p_DestinationString = (unsigned __int16 *)&DestinationString;
          goto LABEL_15;
        }
        if ( v23 )
        {
          p_DestinationString = v23;
        }
        else
        {
          AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                            (struct _EX_RUNDOWN_REF *)Process,
                                            0LL,
                                            0,
                                            0,
                                            NumberOfBytes);
          if ( AllocatedFullProcessImageName != -1073741820 )
            goto LABEL_14;
          p_DestinationString = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
          if ( !p_DestinationString )
            goto LABEL_14;
          AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                            (struct _EX_RUNDOWN_REF *)Process,
                                            (__int64)p_DestinationString,
                                            NumberOfBytes[0],
                                            0,
                                            NumberOfBytes);
          if ( AllocatedFullProcessImageName < 0 )
          {
            ExFreePoolWithTag(p_DestinationString, 0);
            goto LABEL_14;
          }
          v18 = 1;
        }
LABEL_15:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524422;
        v14 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v15 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v24), v13);
        v16 = *(unsigned __int8 *)(v14 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = Blink;
        Src[6] = v14;
        HIDWORD(Src[3]) = 4 * v16 + 8;
        Src[11] = 0x800000005LL;
        Src[10] = &SeSubsystemName;
        Src[22] = *(_QWORD *)&NumberOfBytes[1];
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        HIDWORD(Src[19]) = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
        Src[28] = v26;
        v17 = *p_DestinationString + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = (unsigned int)(v11 + 1935);
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v17;
        Src[34] = p_DestinationString;
        if ( v15 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v13;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v3 )
        {
          Src[40] = v3;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v20;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v20 + 16;
        }
        Src[46] = v22;
        LODWORD(Src[43]) = 4;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * (unsigned __int8)v22[1] + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        if ( AllocatedFullProcessImageName >= 0 )
          goto LABEL_20;
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_20:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v18 )
  {
    if ( p_DestinationString )
      ExFreePoolWithTag(p_DestinationString, 0);
  }
}
