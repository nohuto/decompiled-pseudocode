/*
 * XREFs of CmpBuildAdminInformation @ 0x140657B40
 * Callers:
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationToken @ 0x1405217F0 (PsReferenceImpersonationToken.c)
 *     RtlCopyLuidAndAttributesArray @ 0x1406C9A80 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1)
{
  PACCESS_TOKEN v1; // rbx
  int v3; // r15d
  PSE_EXPORTS v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v9; // edi
  __int64 v10; // rsi
  PSE_EXPORTS v11; // r15
  ULONG v12; // ebx
  __int64 v13; // rcx
  _SID_AND_ATTRIBUTES *v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // r12d
  int v17; // eax
  SIZE_T v18; // rdx
  unsigned int v19; // edi
  char *PoolWithTag; // rax
  char *v21; // rsi
  ULONG *v22; // rdi
  ULONG v23; // edx
  __int64 v24; // rax
  __int64 v25; // rbx
  ULONG v26; // ecx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[2]; // [rsp+40h] [rbp-29h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-21h] BYREF
  PSID RemainingSidArea; // [rsp+50h] [rbp-19h] BYREF
  _SID_AND_ATTRIBUTES Src[6]; // [rsp+58h] [rbp-11h] BYREF
  NTSTATUS EffectiveOnly; // [rsp+D8h] [rbp+6Fh] BYREF
  PSE_EXPORTS CopyOnOpen; // [rsp+E0h] [rbp+77h] BYREF
  ULONG SidAreaSize; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = PsReferenceImpersonationToken(
         KeGetCurrentThread(),
         (PBOOLEAN)&CopyOnOpen,
         (PBOOLEAN)&EffectiveOnly,
         ImpersonationLevel);
  if ( !v1 )
    v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
    return 3221225626LL;
  EffectiveOnly = SeQueryInformationToken(v1, TokenAccessInformation, &TokenInformation);
  v3 = EffectiveOnly;
  ObfDereferenceObject(v1);
  if ( v3 >= 0 )
  {
    v4 = SeExports;
    v5 = 0;
    v6 = -1;
    CopyOnOpen = SeExports;
    v7 = -1;
    v8 = **(_DWORD **)TokenInformation;
    v9 = 16 * v8;
    if ( v8 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v11 = SeExports;
      do
      {
        *(_QWORD *)ImpersonationLevel = *(_QWORD *)v10;
        RemainingSidArea = *(PSID *)ImpersonationLevel;
        v9 += RtlLengthSid(*(PSID *)ImpersonationLevel);
        if ( v6 == -1 && RtlEqualSid(v11->SeAliasAdminsSid, *(PSID *)ImpersonationLevel) )
        {
          v6 = v5;
        }
        else if ( v7 == -1 && (*(_BYTE *)(v10 + 8) & 0x60) == 0x60 )
        {
          v7 = v5;
        }
        ++v5;
        v10 += 16LL;
      }
      while ( v5 < v8 );
      v3 = EffectiveOnly;
      v4 = CopyOnOpen;
    }
    v12 = 0;
    if ( v6 == -1 )
    {
      v12 = 1;
      Src[0].Sid = v4->SeAliasAdminsSid;
      Src[0].Attributes = 7;
    }
    if ( v7 == -1 )
    {
      v13 = v12++;
      Src[v13].Sid = v4->SeHighMandatorySid;
      Src[v13].Attributes = 96;
    }
    if ( v12 )
    {
      v9 += 16 * v12;
      v14 = Src;
      v15 = v12;
      do
      {
        v9 += RtlLengthSid(v14->Sid);
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    v16 = (v9 + 7) & 0xFFFFFFF8;
    v17 = 12 * **((_DWORD **)TokenInformation + 2);
    v18 = v16 + v17 + 920;
    if ( v17 )
      v18 = (unsigned int)(v18 - 12);
    v19 = v18;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v18, 0x20204D43u);
    v21 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v19);
      v22 = (ULONG *)(v21 + 88);
      *((_QWORD *)v21 + 3) = *((_QWORD *)TokenInformation + 3);
      *((_DWORD *)v21 + 8) = *((_DWORD *)TokenInformation + 8);
      *((_DWORD *)v21 + 9) = *((_DWORD *)TokenInformation + 9);
      *((_DWORD *)v21 + 10) = *((_DWORD *)TokenInformation + 10);
      *((_DWORD *)v21 + 11) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v23 = v12 + **(_DWORD **)TokenInformation;
      *((_QWORD *)v21 + 12) = v21 + 360;
      *((_DWORD *)v21 + 22) = v23;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)TokenInformation + 8LL),
        v16 - 16 * v23,
        (PSID_AND_ATTRIBUTES)(v21 + 360),
        &v21[16 * v23 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( v6 != -1 )
        *(_DWORD *)(*((_QWORD *)v21 + 12) + 16LL * v6 + 8) = 7;
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v21 + 12) + 16LL * v7 + 8) = 96;
      if ( v12 )
        RtlCopySidAndAttributesArray(
          v12,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v21 + 12) + 16LL * **(unsigned int **)TokenInformation),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v21 + 12), *v22, (PSID_AND_ATTRIBUTES_HASH)(v21 + 88));
      *(_QWORD *)v21 = v22;
      v24 = *((_QWORD *)v21 + 12) + v16;
      *(_DWORD *)v24 = 0;
      *(_QWORD *)(v24 + 8) = 0LL;
      *((_QWORD *)v21 + 1) = v24;
      v24 += 272LL;
      *(_DWORD *)v24 = 0;
      v25 = v24 + 272;
      *(_QWORD *)(v24 + 8) = 0LL;
      *((_QWORD *)v21 + 8) = v24;
      *((_QWORD *)v21 + 7) = 0LL;
      v26 = **((_DWORD **)TokenInformation + 2);
      *(_DWORD *)(v24 + 272) = v26;
      RtlCopyLuidAndAttributesArray(
        v26,
        (PLUID_AND_ATTRIBUTES)(*((_QWORD *)TokenInformation + 2) + 4LL),
        (PLUID_AND_ATTRIBUTES)(v24 + 276));
      *((_QWORD *)v21 + 2) = v25;
      *a1 = v21;
    }
    else
    {
      v3 = -1073741670;
    }
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return (unsigned int)v3;
}
