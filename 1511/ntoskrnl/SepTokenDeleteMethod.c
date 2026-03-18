/*
 * XREFs of SepTokenDeleteMethod @ 0x1403C9070
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14000DA20 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x14000DA40 (SepFreeTokenCapabilities.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1403C9368 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x14064DAF8 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x140653B5C (SepDeleteTokenUserAndGroups.c)
 *     SepDeleteClaimAttributes @ 0x140656090 (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  void *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1080) )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120));
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceLowBoxHandlesEntry(*(_QWORD *)(a1 + 216));
    v3 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 - 1 > 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 - 1, v4);
      if ( v5 == v4 )
        goto LABEL_19;
    }
    if ( v4 != 1 )
      __fastfail(0xEu);
    v6 = v3[1];
    v7 = v3[20];
    v15 = v6;
    SepDeReferenceLogonSession(&v15, v7);
  }
LABEL_19:
  v8 = *(void **)(a1 + 1144);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = *(void **)(a1 + 1112);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v10 = *(_QWORD *)(a1 + 1136);
  if ( v10 )
    SepDereferenceLuidToIndexEntry(v10);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v11 = *(void **)(a1 + 176);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v12 = *(void **)(a1 + 784);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v13 )
  {
    ExDeleteResourceLite(v13);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v14 = *(void **)(a1 + 1104);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
