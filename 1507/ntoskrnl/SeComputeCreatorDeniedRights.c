/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x14004EE30
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     SepTokenIsOwner @ 0x1400CD420 (SepTokenIsOwner.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v9; // rax
  __int16 v10; // dx
  __int64 v11; // rax
  __int64 v12; // rcx
  _WORD *SeOwnerRightsSid; // r12
  unsigned int v14; // r13d
  unsigned __int8 *v15; // rsi
  unsigned int v16; // r15d
  int v17; // edx
  unsigned __int8 v18; // cl
  unsigned __int8 *v19; // rcx
  __int64 v20; // rax
  ACL *v21; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v25; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+58h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0;
  GrantedAccess = 0;
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
  LOWORD(AccessStatus) = v10;
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
  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !v12 )
    goto LABEL_23;
  v14 = *(unsigned __int16 *)(v12 + 4);
  v15 = (unsigned __int8 *)(v12 + 8);
  v16 = 0;
  if ( !*(_WORD *)(v12 + 4) )
    goto LABEL_23;
  v17 = 104928;
  do
  {
    if ( (v15[1] & 8) != 0 )
      goto LABEL_21;
    v18 = *v15;
    if ( *v15 <= 0x10u && _bittest(&v17, v18) )
    {
      v19 = &v15[16 * (*((_DWORD *)v15 + 2) & 1) + 12 + 8 * (*((_DWORD *)v15 + 2) & 2)];
    }
    else if ( v18 == 4 )
    {
      v19 = v15 + 12;
    }
    else
    {
      if ( v18 > 0xAu && (unsigned __int8)(v18 - 13) > 1u )
        goto LABEL_21;
      v19 = v15 + 8;
    }
    if ( v19 && *(_WORD *)v19 == *SeOwnerRightsSid )
    {
      if ( !memcmp(v19, SeOwnerRightsSid, 4 * (unsigned int)v19[1] + 8) )
        goto LABEL_36;
      v17 = 104928;
    }
LABEL_21:
    ++v16;
    v15 += *((unsigned __int16 *)v15 + 1);
  }
  while ( v16 < v14 );
  v10 = AccessStatus;
LABEL_23:
  if ( (v10 & 0x10) != 0 )
  {
    if ( v10 < 0 )
    {
      v20 = *(unsigned int *)(a4 + 12);
      if ( (_DWORD)v20 )
        v21 = (ACL *)(a4 + v20);
      else
        v21 = 0LL;
    }
    else
    {
      v21 = *(ACL **)(a4 + 24);
    }
  }
  else
  {
    v21 = 0LL;
  }
  v27 = 0LL;
  if ( !SepRmEnforceCap )
    return 0LL;
  if ( !v21 )
    return 0LL;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v21);
  if ( !ScopedPolicySid )
    return 0LL;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v25 = v27;
  if ( Cap < 0 )
    v25 = SepRmDefaultCap;
  if ( (*(_DWORD *)(v25 + 56) & 1) == 0 )
    return 0LL;
LABEL_36:
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
    v4 = 0x40000;
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
    v4 |= 0x80000u;
  }
  return v4;
}
