/*
 * XREFs of SepTokenDeleteMethod @ 0x1404883A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepFreeTokenCapabilities @ 0x1401238D4 (SepFreeTokenCapabilities.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x140527FE0 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x1406D115C (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1406D5A08 (SepDeleteTokenUserAndGroups.c)
 *     SepDeleteClaimAttributes @ 0x1406D81A8 (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
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
    v3 = *(_QWORD *)(a1 + 1080);
    if ( v3 )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120), v3);
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceLowBoxHandlesEntry(*(_QWORD *)(a1 + 216));
    v4 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v4 + 3);
    v5 = v4[3];
    while ( v5 - 1 > 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 3, v5 - 1, v5);
      if ( v6 == v5 )
        goto LABEL_19;
    }
    if ( v5 != 1 )
      __fastfail(0xEu);
    v7 = v4[1];
    v8 = v4[20];
    v15 = v7;
    SepDeReferenceLogonSession(&v15, v8);
  }
LABEL_19:
  v9 = *(void **)(a1 + 1136);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = *(void **)(a1 + 1112);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  SepRefDerefLuidToIndexEntryIfNecessary(a1, 1);
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
