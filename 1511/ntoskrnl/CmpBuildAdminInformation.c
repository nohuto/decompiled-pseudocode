/*
 * XREFs of CmpBuildAdminInformation @ 0x140497598
 * Callers:
 *     CmpCheckAdminAccess @ 0x1404974C8 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x14009E1C0 (RtlSidHashInitialize.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x1403C1E10 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     RtlCopyLuidAndAttributesArray @ 0x140497878 (RtlCopyLuidAndAttributesArray.c)
 *     PsReferenceImpersonationToken @ 0x1404978B0 (PsReferenceImpersonationToken.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_SID_AND_ATTRIBUTES_HASH ***a1)
{
  PACCESS_TOKEN v1; // rbx
  _SECURITY_IMPERSONATION_LEVEL v2; // r15d
  unsigned int **v3; // r12
  PSE_EXPORTS v4; // rdx
  unsigned int v5; // ebx
  int v6; // r13d
  unsigned int v7; // r14d
  int v8; // edi
  __int64 v9; // rsi
  unsigned int v10; // r12d
  PSE_EXPORTS v11; // r15
  ULONG v12; // ebx
  unsigned int v13; // r13d
  int v14; // eax
  SIZE_T v15; // rdx
  char *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES_HASH **v17; // rsi
  _SID_AND_ATTRIBUTES_HASH *v18; // rdi
  ULONG v19; // edx
  char *v20; // rbx
  ULONG v21; // ecx
  __int64 v23; // rcx
  _SID_AND_ATTRIBUTES *v24; // rsi
  __int64 v25; // r13
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-29h] BYREF
  PSID RemainingSidArea; // [rsp+48h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-19h] BYREF
  PSE_EXPORTS v29; // [rsp+58h] [rbp-11h]
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
  v2 = ImpersonationLevel;
  ObfDereferenceObject(v1);
  if ( v2 >= SecurityAnonymous )
  {
    v3 = (unsigned int **)TokenInformation;
    v4 = SeExports;
    v5 = 0;
    v6 = -1;
    LODWORD(EffectiveOnly) = -1;
    v7 = -1;
    v29 = SeExports;
    v8 = 16 * **(_DWORD **)TokenInformation;
    if ( **(_DWORD **)TokenInformation )
    {
      v9 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v10 = **(_DWORD **)TokenInformation;
      v11 = SeExports;
      do
      {
        EffectiveOnly = *(PSID *)v9;
        RemainingSidArea = EffectiveOnly;
        v8 += RtlLengthSid(EffectiveOnly);
        if ( v6 == -1 && RtlEqualSid(v11->SeAliasAdminsSid, EffectiveOnly) )
        {
          v6 = v5;
        }
        else if ( v7 == -1 && (*(_BYTE *)(v9 + 8) & 0x60) == 0x60 )
        {
          v7 = v5;
        }
        ++v5;
        v9 += 16LL;
      }
      while ( v5 < v10 );
      v2 = ImpersonationLevel;
      v3 = (unsigned int **)TokenInformation;
      v4 = v29;
      LODWORD(EffectiveOnly) = v6;
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
      v23 = v12++;
      Src[v23].Sid = v4->SeHighMandatorySid;
      Src[v23].Attributes = 96;
    }
    if ( v12 )
    {
      v8 += 16 * v12;
      v24 = Src;
      v25 = v12;
      do
      {
        v8 += RtlLengthSid(v24->Sid);
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    v13 = (v8 + 7) & 0xFFFFFFF8;
    v14 = 12 * *v3[2];
    v15 = v14 + v13 + 920;
    if ( v14 )
      v15 = (unsigned int)(v15 - 12);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x20204D43u);
    v17 = (_SID_AND_ATTRIBUTES_HASH **)PoolWithTag;
    if ( PoolWithTag )
    {
      v18 = (_SID_AND_ATTRIBUTES_HASH *)(PoolWithTag + 88);
      *((_QWORD *)PoolWithTag + 3) = v3[3];
      *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)v3 + 8);
      *((_DWORD *)PoolWithTag + 9) = *((_DWORD *)v3 + 9);
      *((_DWORD *)PoolWithTag + 10) = *((_DWORD *)v3 + 10);
      *((_DWORD *)PoolWithTag + 11) = *((_DWORD *)v3 + 11) & 0xFFFF9FFF | 0x2000;
      v19 = v12 + **v3;
      *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 360;
      *((_DWORD *)PoolWithTag + 22) = v19;
      RtlCopySidAndAttributesArray(
        **v3,
        *((PSID_AND_ATTRIBUTES *)*v3 + 1),
        v13 - 16 * v19,
        (PSID_AND_ATTRIBUTES)(PoolWithTag + 360),
        &PoolWithTag[16 * v19 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( (_DWORD)EffectiveOnly != -1 )
        v18->SidAttr[(unsigned int)EffectiveOnly].Attributes = 7;
      if ( v7 != -1 )
        v18->SidAttr[v7].Attributes = 96;
      if ( v12 )
        RtlCopySidAndAttributesArray(
          v12,
          Src,
          SidAreaSize,
          &v18->SidAttr[**v3],
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(v18->SidAttr, v18->SidCount, v18);
      *v17 = v18;
      v20 = (char *)v18->SidAttr + v13;
      *(_DWORD *)v20 = 0;
      *((_QWORD *)v20 + 1) = 0LL;
      v17[1] = (_SID_AND_ATTRIBUTES_HASH *)v20;
      v20 += 272;
      *(_DWORD *)v20 = 0;
      *((_QWORD *)v20 + 1) = 0LL;
      v17[8] = (_SID_AND_ATTRIBUTES_HASH *)v20;
      v20 += 272;
      v17[7] = 0LL;
      v21 = *v3[2];
      *(_DWORD *)v20 = v21;
      RtlCopyLuidAndAttributesArray(v21, (PLUID_AND_ATTRIBUTES)(v3[2] + 1), (PLUID_AND_ATTRIBUTES)(v20 + 4));
      v17[2] = (_SID_AND_ATTRIBUTES_HASH *)v20;
      *a1 = v17;
    }
    else
    {
      v2 = -1073741670;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v2;
}
