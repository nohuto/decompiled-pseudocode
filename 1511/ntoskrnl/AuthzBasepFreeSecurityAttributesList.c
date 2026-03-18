/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x14000D930
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400CFBA4 (SepCleanupMarkedForDeletionEntries.c)
 *     sub_140183648 @ 0x140183648 (sub_140183648.c)
 *     SepCreateClaimAttributes @ 0x1403C23C0 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14052ED4C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x140656090 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140656110 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400016C0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _DWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  _DWORD *v10; // r14
  _QWORD **v11; // r8
  void **v12; // rdx
  int v13; // eax
  __int64 *v14; // r15

  v2 = a1 + 2;
  while ( *(_DWORD **)v2 != v2 )
  {
    v3 = *(_DWORD **)v2;
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 1) != 0 )
    {
      v4 = *(_QWORD *)v3;
      v5 = (_QWORD *)*((_QWORD *)v3 + 1);
      if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (_DWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v3[14] &= ~1u;
      --*a1;
    }
    v6 = v3 + 18;
    while ( *(_DWORD **)v6 != v6 )
    {
      v7 = *(_QWORD **)v6;
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 32LL) & 2) != 0 )
      {
        v11 = (_QWORD **)v7[2];
        v12 = (void **)v7[3];
        if ( v11[1] != v7 + 2 || *v12 != v7 + 2 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v7 + 8) &= ~2u;
        --v3[22];
      }
      if ( (v7[4] & 1) != 0 )
      {
        v8 = (_QWORD *)*v7;
        v9 = (void **)v7[1];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || *v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        *((_DWORD *)v7 + 8) &= ~1u;
        --v3[15];
        if ( (v7[4] & 4) != 0 )
          --v3[16];
      }
      ExFreePoolWithTag(v7, 0);
    }
    v10 = (_DWORD *)*((_QWORD *)v3 + 12);
    while ( v10 != v3 + 24 )
    {
      v13 = v10[4];
      v14 = (__int64 *)(v10 - 4);
      v10 = *(_DWORD **)v10;
      if ( (v13 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0);
        ExFreePoolWithTag(v14, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
