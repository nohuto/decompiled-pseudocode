/*
 * XREFs of SepCreateClaimAttributes @ 0x1404784D8
 * Callers:
 *     SepSetTokenClaims @ 0x14047846C (SepSetTokenClaims.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14000E790 (RtlSidHashInitialize.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401465C0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepLengthSidAndAttributesArray @ 0x140477A64 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1406C9DA8 (AuthzBasepAllocateClaimCollectionNoLists.c)
 */

__int64 __fastcall SepCreateClaimAttributes(unsigned int **a1, __int64 a2, __int64 a3, unsigned int a4, void *Src)
{
  int v8; // ebx
  _DWORD *v9; // rbp
  _DWORD *v10; // rsi
  _SID_AND_ATTRIBUTES *v11; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  int v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+30h] [rbp-68h]
  char v22; // [rsp+50h] [rbp-48h]
  char v23; // [rsp+51h] [rbp-47h]
  int v24; // [rsp+54h] [rbp-44h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-40h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF

  v24 = 1;
  v22 = 0;
  v23 = 0;
  LODWORD(NumberOfBytes) = 0;
  v8 = 0;
  v26 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 0LL;
  ClaimCollectionNoLists = (unsigned int *)AuthzBasepAllocateClaimCollectionNoLists();
  if ( ClaimCollectionNoLists )
  {
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v24, a2);
      if ( v8 < 0 )
        goto LABEL_25;
      v22 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v17 = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = v17;
      if ( !v17 )
        goto LABEL_37;
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v17, &v24, a3);
      if ( v8 < 0 )
        goto LABEL_25;
      v23 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src, a4, &NumberOfBytes);
    if ( v8 < 0 )
    {
LABEL_25:
      if ( v9 )
      {
        if ( v22 )
          AuthzBasepFreeSecurityAttributesList(v9);
        ExFreePoolWithTag(v9, 0);
      }
      if ( v10 )
      {
        if ( v23 )
          AuthzBasepFreeSecurityAttributesList(v10);
        ExFreePoolWithTag(v10, 0);
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      goto LABEL_35;
    }
    v18 = NumberOfBytes;
    PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = SeCaptureSidAndAttributesArray(
             (char *)Src,
             a4,
             0,
             PoolWithTag,
             v18,
             v20,
             v21,
             (void **)&v26,
             (unsigned int *)&NumberOfBytes);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v11;
        RtlSidHashInitialize(v11, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_25;
    }
LABEL_37:
    v8 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741670;
}
