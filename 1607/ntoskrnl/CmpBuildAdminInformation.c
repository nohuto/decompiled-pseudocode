/*
 * XREFs of CmpBuildAdminInformation @ 0x140600550
 * Callers:
 *     CmpCheckAdminAccess @ 0x140600A48 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlSidHashInitialize @ 0x14000E790 (RtlSidHashInitialize.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14040DD10 (RtlCopySidAndAttributesArray.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     PsReferenceImpersonationToken @ 0x1404A5010 (PsReferenceImpersonationToken.c)
 *     RtlCopyLuidAndAttributesArray @ 0x140683A28 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1)
{
  PACCESS_TOKEN v1; // rbx
  _SECURITY_IMPERSONATION_LEVEL v3; // r15d
  unsigned int **v4; // r12
  PSE_EXPORTS v5; // rdx
  unsigned int v6; // ebx
  int v7; // r13d
  unsigned int v8; // r14d
  int v9; // edi
  __int64 v10; // rsi
  unsigned int v11; // r12d
  PSE_EXPORTS v12; // r15
  ULONG v13; // ebx
  __int64 v14; // rcx
  _SID_AND_ATTRIBUTES *v15; // rsi
  __int64 v16; // r13
  unsigned int v17; // r13d
  int v18; // eax
  SIZE_T v19; // rdx
  unsigned int v20; // edi
  char *PoolWithTag; // rax
  char *v22; // rsi
  ULONG *v23; // rdi
  ULONG v24; // edx
  __int64 v25; // rbx
  ULONG v26; // ecx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-29h] BYREF
  PSID RemainingSidArea; // [rsp+48h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-19h] BYREF
  PSE_EXPORTS v30; // [rsp+58h] [rbp-11h]
  _SID_AND_ATTRIBUTES Src[6]; // [rsp+60h] [rbp-9h] BYREF
  PSID EffectiveOnly; // [rsp+D8h] [rbp+6Fh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+E0h] [rbp+77h] BYREF
  ULONG SidAreaSize; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, (PBOOLEAN)&EffectiveOnly, &ImpersonationLevel);
  if ( !v1 )
    v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
    return 3221225626LL;
  ImpersonationLevel = SeQueryInformationToken(v1, TokenAccessInformation, &TokenInformation);
  v3 = ImpersonationLevel;
  ObfDereferenceObject(v1);
  if ( v3 >= SecurityAnonymous )
  {
    v4 = (unsigned int **)TokenInformation;
    v5 = SeExports;
    v6 = 0;
    v7 = -1;
    LODWORD(EffectiveOnly) = -1;
    v8 = -1;
    v30 = SeExports;
    v9 = 16 * **(_DWORD **)TokenInformation;
    if ( **(_DWORD **)TokenInformation )
    {
      v10 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v11 = **(_DWORD **)TokenInformation;
      v12 = SeExports;
      do
      {
        EffectiveOnly = *(PSID *)v10;
        RemainingSidArea = EffectiveOnly;
        v9 += RtlLengthSid(EffectiveOnly);
        if ( v7 == -1 && RtlEqualSid(v12->SeAliasAdminsSid, EffectiveOnly) )
        {
          v7 = v6;
        }
        else if ( v8 == -1 && (*(_BYTE *)(v10 + 8) & 0x60) == 0x60 )
        {
          v8 = v6;
        }
        ++v6;
        v10 += 16LL;
      }
      while ( v6 < v11 );
      v3 = ImpersonationLevel;
      v4 = (unsigned int **)TokenInformation;
      v5 = v30;
      LODWORD(EffectiveOnly) = v7;
    }
    v13 = 0;
    if ( v7 == -1 )
    {
      v13 = 1;
      Src[0].Sid = v5->SeAliasAdminsSid;
      Src[0].Attributes = 7;
    }
    if ( v8 == -1 )
    {
      v14 = v13++;
      Src[v14].Sid = v5->SeHighMandatorySid;
      Src[v14].Attributes = 96;
    }
    if ( v13 )
    {
      v9 += 16 * v13;
      v15 = Src;
      v16 = v13;
      do
      {
        v9 += RtlLengthSid(v15->Sid);
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    v17 = (v9 + 7) & 0xFFFFFFF8;
    v18 = 12 * *v4[2];
    v19 = v18 + v17 + 920;
    if ( v18 )
      v19 = (unsigned int)(v19 - 12);
    v20 = v19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
    v22 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v20);
      v23 = (ULONG *)(v22 + 88);
      *((_QWORD *)v22 + 3) = v4[3];
      *((_DWORD *)v22 + 8) = *((_DWORD *)v4 + 8);
      *((_DWORD *)v22 + 9) = *((_DWORD *)v4 + 9);
      *((_DWORD *)v22 + 10) = *((_DWORD *)v4 + 10);
      *((_DWORD *)v22 + 11) = *((_DWORD *)v4 + 11) & 0xFFFF9FFF | 0x2000;
      v24 = v13 + **v4;
      *((_QWORD *)v22 + 12) = v22 + 360;
      *((_DWORD *)v22 + 22) = v24;
      RtlCopySidAndAttributesArray(
        **v4,
        *((PSID_AND_ATTRIBUTES *)*v4 + 1),
        v17 - 16 * v24,
        (PSID_AND_ATTRIBUTES)(v22 + 360),
        &v22[16 * v24 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( (_DWORD)EffectiveOnly != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * (unsigned int)EffectiveOnly + 8) = 7;
      if ( v8 != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * v8 + 8) = 96;
      if ( v13 )
        RtlCopySidAndAttributesArray(
          v13,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v22 + 12) + 16LL * **v4),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v22 + 12), *v23, (PSID_AND_ATTRIBUTES_HASH)(v22 + 88));
      *(_QWORD *)v22 = v23;
      v25 = *((_QWORD *)v22 + 12) + v17;
      *(_DWORD *)v25 = 0;
      *(_QWORD *)(v25 + 8) = 0LL;
      *((_QWORD *)v22 + 1) = v25;
      v25 += 272LL;
      *(_DWORD *)v25 = 0;
      *(_QWORD *)(v25 + 8) = 0LL;
      *((_QWORD *)v22 + 8) = v25;
      v25 += 272LL;
      *((_QWORD *)v22 + 7) = 0LL;
      v26 = *v4[2];
      *(_DWORD *)v25 = v26;
      RtlCopyLuidAndAttributesArray(v26, (PLUID_AND_ATTRIBUTES)(v4[2] + 1), (PLUID_AND_ATTRIBUTES)(v25 + 4));
      *((_QWORD *)v22 + 2) = v25;
      *a1 = v22;
    }
    else
    {
      v3 = -1073741670;
    }
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v3;
}
