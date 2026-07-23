/*
 * XREFs of SepDuplicateClaimAttributes @ 0x140656110
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x1400EF74C (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x140656318 (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x14009E1C0 (RtlSidHashInitialize.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401366E8 (AuthzBasepAllocateSecurityAttributesList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepLengthSidAndAttributesArray @ 0x140478DC8 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140683924 (AuthzBasepAllocateClaimCollectionNoLists.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(unsigned int *a1, _QWORD *a2)
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
  void *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  ULONG v19; // edx
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+98h] [rbp+10h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  result = 0LL;
  v22 = 0;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v24 = 0LL;
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
    if ( *((_QWORD *)a1 + 72) )
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
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 72), (__int64)SecurityAttributesList, 0);
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
          if ( v22 )
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
    if ( *((_QWORD *)a1 + 73) )
    {
      v14 = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v7 = v14;
      if ( !v14 )
      {
LABEL_13:
        v5 = -1073741670;
        goto LABEL_23;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 73), (__int64)v14, 0);
      if ( v5 < 0 )
        goto LABEL_23;
      v22 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v7;
    }
    v15 = (void *)*((_QWORD *)a1 + 1);
    if ( v15 )
    {
      v16 = *a1;
      if ( (_DWORD)v16 )
      {
        v5 = SepLengthSidAndAttributesArray(v15, v16, &NumberOfBytes);
        if ( v5 < 0 )
          goto LABEL_23;
        v17 = NumberOfBytes;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_13;
        v5 = SeCaptureSidAndAttributesArray(
               *((char **)a1 + 1),
               *a1,
               0,
               PoolWithTag,
               v17,
               v20,
               v21,
               (void **)&v24,
               (unsigned int *)&NumberOfBytes);
        if ( v5 < 0 )
          goto LABEL_23;
        v19 = *a1;
        *ClaimCollectionNoLists = *a1;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v9;
        RtlSidHashInitialize(v9, v19, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
      }
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
