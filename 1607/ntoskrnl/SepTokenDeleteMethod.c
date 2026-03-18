/*
 * XREFs of SepTokenDeleteMethod @ 0x1404A25E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140088850 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x140088870 (SepFreeTokenCapabilities.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1404A2998 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x14068D27C (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x140692EE0 (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x140693A14 (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x140695A00 (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  void *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v2 = *(void **)(a1 + 1144);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  v3 = *(void **)(a1 + 1096);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v3);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1080);
    if ( v4 )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120), v4);
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceLowBoxHandlesEntry(*(_QWORD *)(a1 + 216));
    v5 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v5 + 3);
    v6 = v5[3];
    while ( v6 - 1 > 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v5 + 3, v6 - 1, v6);
      if ( v7 == v6 )
        goto LABEL_22;
    }
    if ( v6 != 1 )
      __fastfail(0xEu);
    v8 = v5[1];
    v9 = v5[20];
    v17 = v8;
    SepDeReferenceLogonSession(&v17, v9);
  }
LABEL_22:
  v10 = *(void **)(a1 + 1152);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = *(void **)(a1 + 1112);
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v12 = *(_QWORD *)(a1 + 1136);
  if ( v12 )
    SepDereferenceLuidToIndexEntry(v12);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v13 = *(void **)(a1 + 176);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v14 = *(void **)(a1 + 784);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v15 )
  {
    ExDeleteResourceLite(v15);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v16 = *(void **)(a1 + 1104);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
}
