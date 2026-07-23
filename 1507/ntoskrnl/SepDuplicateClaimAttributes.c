/*
 * XREFs of SepDuplicateClaimAttributes @ 0x1406D8228
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x14002D81C (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x1406D8430 (SepDuplicateTokenClaims.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14015EB3C (AuthzBasepAllocateSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepLengthSidAndAttributesArray @ 0x1404D009C (SepLengthSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1407085C8 (AuthzBasepAllocateClaimCollectionNoLists.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r14
  _DWORD *v7; // rbp
  char v8; // r13
  _SID_AND_ATTRIBUTES *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *ClaimCollectionNoLists; // rsi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v14; // rax
  char *v15; // rcx
  unsigned int v16; // ebx
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  ULONG v18; // edx
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  char v21; // [rsp+98h] [rbp+10h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  result = 0LL;
  v21 = 0;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v23 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_DWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *(_QWORD *)(a1 + 576) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v6 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_33:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 576), (__int64)SecurityAttributesList, 0);
      if ( v5 < 0 )
      {
LABEL_23:
        if ( v6 )
        {
          if ( v8 )
            AuthzBasepFreeSecurityAttributesList(v6);
          ExFreePoolWithTag(v6, 0);
        }
        if ( v7 )
        {
          if ( v21 )
            AuthzBasepFreeSecurityAttributesList(v7);
          ExFreePoolWithTag(v7, 0);
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_33;
      }
      v8 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v6;
    }
    if ( *(_QWORD *)(a1 + 584) )
    {
      v14 = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v7 = v14;
      if ( !v14 )
      {
LABEL_13:
        v5 = -1073741670;
        goto LABEL_23;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 584), (__int64)v14, 0);
      if ( v5 < 0 )
        goto LABEL_23;
      v21 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v7;
    }
    v15 = *(char **)(a1 + 8);
    if ( v15 && *(_DWORD *)a1 )
    {
      v5 = SepLengthSidAndAttributesArray(v15, *(_DWORD *)a1, &NumberOfBytes);
      if ( v5 < 0 )
        goto LABEL_23;
      v16 = NumberOfBytes;
      PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_13;
      v5 = SeCaptureSidAndAttributesArray(
             *(char **)(a1 + 8),
             *(_DWORD *)a1,
             0,
             PoolWithTag,
             v16,
             v19,
             v20,
             (void **)&v23,
             (unsigned int *)&NumberOfBytes);
      if ( v5 < 0 )
        goto LABEL_23;
      v18 = *(_DWORD *)a1;
      *ClaimCollectionNoLists = *(_DWORD *)a1;
      *((_QWORD *)ClaimCollectionNoLists + 1) = v9;
      RtlSidHashInitialize(v9, v18, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
