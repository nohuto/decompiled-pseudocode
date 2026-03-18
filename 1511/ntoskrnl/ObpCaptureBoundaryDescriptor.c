/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x1404AA488
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404AA1A0 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14046B23C (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     ObpCheckDuplicateEntries @ 0x1404AA6E8 (ObpCheckDuplicateEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, char **a2)
{
  __m128i *v3; // r14
  unsigned int v4; // edi
  ULONG64 v5; // rcx
  char *PoolWithTag; // rsi
  char v8; // r13
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  unsigned __int64 v12; // r15
  char *v13; // r15
  int v14; // edi
  char *v15; // rcx
  unsigned int v16; // eax
  ULONG v17; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  __m128i v20; // [rsp+38h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-60h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+20h] BYREF

  v3 = Src;
  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (__m128i *)MmUserProbeAddress;
    v20 = *Src;
    v4 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
    v20.m128i_i32[2] = v4;
    if ( v4 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v4 )
    {
      if ( ((unsigned __int8)v3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = (ULONG64)v3->m128i_u64 + v4;
      if ( v5 > MmUserProbeAddress || v5 < (unsigned __int64)v3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    v20 = *Src;
    v4 = v20.m128i_u32[2];
  }
  PoolWithTag = 0LL;
  LODWORD(TokenInformation) = 0;
  v8 = 0;
  Size = v4;
  v9 = v4;
  P = 0LL;
  v17 = 0;
  if ( (v20.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v14 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v14 < 0 )
        goto LABEL_24;
      v17 = RtlLengthSid(*(PSID *)P);
      v9 += ((v17 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v4 = v20.m128i_u32[2];
  }
  v12 = v9 + 48;
  if ( v12 > 0xFFFFFFFF )
  {
    v14 = -1073741675;
    goto LABEL_24;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x534E624Fu);
  TokenInformation = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_24;
  }
  *((_QWORD *)PoolWithTag + 3) = (unsigned int)v12 - 48LL;
  v13 = PoolWithTag + 48;
  memmove(PoolWithTag + 48, v3, Size);
  if ( P )
  {
    v15 = &v13[Size];
    if ( &v13[Size] != (char *)((unsigned __int64)&v13[Size + 7] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_31:
      v14 = -1073741811;
      goto LABEL_24;
    }
    *(_DWORD *)v15 = 2;
    v16 = ((v17 + 7) & 0xFFFFFFF8) + 8;
    *((_DWORD *)v15 + 1) = v16;
    v4 += v16;
    ++v20.m128i_i32[1];
    memmove(v15 + 8, *(const void **)P, v17);
  }
  *((_DWORD *)PoolWithTag + 14) = v4;
  *((_DWORD *)PoolWithTag + 13) = v20.m128i_i32[1];
  v14 = RtlEnumerateBoundaryDescriptorEntries((_DWORD *)PoolWithTag + 12, 0LL, 0LL);
  if ( v14 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(PoolWithTag) )
    goto LABEL_31;
  PoolWithTag[40] = 0;
  RtlEnumerateBoundaryDescriptorEntries(
    (_DWORD *)PoolWithTag + 12,
    (unsigned int (__fastcall *)(_DWORD *, __int64))ObpHashBoundaryFunction,
    (__int64)PoolWithTag);
  PoolWithTag[40] = (unsigned __int8)PoolWithTag[40] % 37;
LABEL_24:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v14 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x534E624Fu);
  }
  else
  {
    *a2 = PoolWithTag;
  }
  return (unsigned int)v14;
}
