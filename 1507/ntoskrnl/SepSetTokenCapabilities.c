/*
 * XREFs of SepSetTokenCapabilities @ 0x140436FA8
 * Callers:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x1401238D4 (SepFreeTokenCapabilities.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlIsParentOfChildAppContainer @ 0x140408410 (RtlIsParentOfChildAppContainer.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepLengthSidAndAttributesArray @ 0x1404D009C (SepLengthSidAndAttributesArray.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  unsigned int v8; // edi
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v10; // rbp
  int v11; // eax
  unsigned int v12; // edi
  void *v13; // rcx
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v13 = *(void **)(a1 + 784);
    if ( v13 )
    {
      if ( !RtlIsParentOfChildAppContainer(v13, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( SepTokenCapabilitySidSharingEnabled )
    {
      v8 = ((16 * a4 + 3) & 0xFFFFFFFC) + 16 * a4;
    }
    else
    {
      result = SepLengthSidAndAttributesArray(a3);
      if ( (int)result < 0 )
        return result;
      v8 = NumberOfBytes;
    }
    PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v8, 0x73536553u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( SepTokenCapabilitySidSharingEnabled )
        v11 = SepInsertOrReferenceSharedSidEntries(a3, PoolWithTag, a4);
      else
        v11 = SeCaptureSidAndAttributesArray(a3, v8, v14, v15, (__int64)&v16, (__int64)&NumberOfBytes);
      v12 = v11;
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        if ( *(_QWORD *)(a1 + 792) )
          SepFreeTokenCapabilities(a1);
        *(_QWORD *)(a1 + 792) = v10;
        *(_DWORD *)(a1 + 800) = a4;
        RtlSidHashInitialize(v10, a4, (PSID_AND_ATTRIBUTES_HASH)(a1 + 808));
      }
      return v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      SepFreeTokenCapabilities(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    return 0LL;
  }
}
