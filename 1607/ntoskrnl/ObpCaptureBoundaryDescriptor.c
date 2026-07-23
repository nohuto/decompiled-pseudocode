/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x140477664
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404773A8 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     ObpCheckDuplicateEntries @ 0x1404778C8 (ObpCheckDuplicateEntries.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140477F64 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, char **a2)
{
  __m128i *v4; // rax
  unsigned int v5; // edi
  char *v6; // rcx
  char *PoolWithTag; // rsi
  char v9; // r13
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  unsigned __int64 v13; // r15
  char *v14; // r15
  NTSTATUS v15; // edi
  char *v16; // rcx
  unsigned int v17; // eax
  ULONG v18; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  __m128i v21; // [rsp+38h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-60h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = Src;
    if ( (unsigned __int64)Src >= 0x7FFFFFFF0000LL )
      v4 = (__m128i *)0x7FFFFFFF0000LL;
    v21 = *v4;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    v21.m128i_i32[2] = v5;
    if ( v5 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = &Src->m128i_i8[v5];
      if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < (char *)Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v21 = *Src;
    v5 = v21.m128i_u32[2];
  }
  PoolWithTag = 0LL;
  LODWORD(TokenInformation) = 0;
  v9 = 0;
  Size = v5;
  v10 = v5;
  P = 0LL;
  v18 = 0;
  if ( (v21.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v15 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v15 < 0 )
        goto LABEL_24;
      v18 = RtlLengthSid(*(PSID *)P);
      v10 += ((v18 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v5 = v21.m128i_u32[2];
  }
  v13 = v10 + 48;
  if ( v13 > 0xFFFFFFFF )
  {
    v15 = -1073741675;
    goto LABEL_24;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x534E624Fu);
  TokenInformation = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_24;
  }
  *((_QWORD *)PoolWithTag + 3) = (unsigned int)v13 - 48LL;
  v14 = PoolWithTag + 48;
  memmove(PoolWithTag + 48, Src, Size);
  if ( P )
  {
    v16 = &v14[Size];
    if ( &v14[Size] != (char *)((unsigned __int64)&v14[Size + 7] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_31:
      v15 = -1073741811;
      goto LABEL_24;
    }
    *(_DWORD *)v16 = 2;
    v17 = ((v18 + 7) & 0xFFFFFFF8) + 8;
    *((_DWORD *)v16 + 1) = v17;
    v5 += v17;
    ++v21.m128i_i32[1];
    memmove(v16 + 8, *(const void **)P, v18);
  }
  *((_DWORD *)PoolWithTag + 14) = v5;
  *((_DWORD *)PoolWithTag + 13) = v21.m128i_i32[1];
  v15 = RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, 0LL, 0LL);
  if ( v15 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(PoolWithTag) )
    goto LABEL_31;
  PoolWithTag[40] = 0;
  RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, ObpHashBoundaryFunction, PoolWithTag);
  PoolWithTag[40] = (unsigned __int8)PoolWithTag[40] % 37;
LABEL_24:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v15 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x534E624Fu);
  }
  else
  {
    *a2 = PoolWithTag;
  }
  return (unsigned int)v15;
}
