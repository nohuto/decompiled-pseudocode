/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x14000F500
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140402F10 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 * Callees:
 *     SepTokenIsOwner @ 0x140060CE0 (SepTokenIsOwner.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x14008D270 (RtlpOwnerAcesPresent.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  ACL *v14; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v18; // rdx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h]
  ACCESS_MASK GrantedAccess; // [rsp+A0h] [rbp+18h] BYREF

  GrantedAccess = 0;
  v7 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(v9 + 48) )
    a4 = *(_QWORD *)(v9 + 48);
  if ( !a4 )
  {
    a4 = *(_QWORD *)(a2 + 64);
    if ( !a4 )
      return 0LL;
  }
  v10 = *(_WORD *)(a4 + 2);
  if ( (v10 & 4) != 0 )
  {
    if ( v10 < 0 )
    {
      v11 = *(unsigned int *)(a4 + 16);
      if ( (_DWORD)v11 )
        v12 = a4 + v11;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(a4 + 32);
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v12) )
  {
    if ( (v10 & 0x10) != 0 )
    {
      if ( v10 < 0 )
      {
        v13 = *(unsigned int *)(a4 + 12);
        v14 = (_DWORD)v13 ? (ACL *)(a4 + v13) : 0LL;
      }
      else
      {
        v14 = *(ACL **)(a4 + 24);
      }
    }
    else
    {
      v14 = 0LL;
    }
    v20 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v14 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v14);
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v18 = v20;
    if ( Cap < 0 )
      v18 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v18 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !(unsigned __int8)SepTokenIsOwner(ClientToken, a4) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
          SubjectSecurityContext,
          1u,
          0x40000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v7 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)a4,
          SubjectSecurityContext,
          1u,
          0x80000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v7 |= 0x80000u;
  }
  return v7;
}
