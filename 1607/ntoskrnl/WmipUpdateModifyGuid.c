/*
 * XREFs of WmipUpdateModifyGuid @ 0x14069F7F8
 * Callers:
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipBuildInstanceSet @ 0x1405378A0 (WmipBuildInstanceSet.c)
 *     WmipAllocEntry @ 0x1405383A8 (WmipAllocEntry.c)
 *     WmipFindISInDSByGuid @ 0x14069F120 (WmipFindISInDSByGuid.c)
 *     WmipIsEqualInstanceSets @ 0x14069F328 (WmipIsEqualInstanceSets.c)
 *     WmipUpdateAddGuid @ 0x14069F3D0 (WmipUpdateAddGuid.c)
 */

__int64 __fastcall WmipUpdateModifyGuid(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        volatile signed __int64 **a5)
{
  unsigned int v5; // esi
  volatile signed __int64 *ISInDSByGuid; // rbx
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rdi
  __int128 v13; // xmm0
  volatile signed __int64 v14; // rcx
  volatile signed __int64 **v15; // rax
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rax
  volatile signed __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-E8h]
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int128 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+70h] [rbp-A8h]

  v5 = 0;
  *a5 = 0LL;
  ISInDSByGuid = WmipFindISInDSByGuid(a1, a2);
  if ( ISInDSByGuid )
  {
    v11 = WmipAllocEntry((__int64)&WmipISChunkInfo);
    v12 = v11;
    if ( v11
      && (int)WmipBuildInstanceSet(a2, a3, a4, (__int64)v11, *(_DWORD *)(a1 + 56)) >= 0
      && !WmipIsEqualInstanceSets((__int64)ISInDSByGuid, (__int64)v12) )
    {
      v21 = *(_OWORD *)ISInDSByGuid;
      v22 = *((_OWORD *)ISInDSByGuid + 1);
      v23 = *((_OWORD *)ISInDSByGuid + 2);
      v24 = *((_OWORD *)ISInDSByGuid + 3);
      v25 = *((_OWORD *)ISInDSByGuid + 4);
      v13 = *((_OWORD *)ISInDSByGuid + 5);
      *((_QWORD *)ISInDSByGuid + 11) = 0LL;
      v14 = *ISInDSByGuid;
      v15 = (volatile signed __int64 **)*((_QWORD *)ISInDSByGuid + 1);
      if ( *(volatile signed __int64 **)(*ISInDSByGuid + 8) != ISInDSByGuid || *v15 != ISInDSByGuid )
        __fastfail(3u);
      *v15 = (volatile signed __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = WmipBuildInstanceSet(a2, a3, a4, (__int64)ISInDSByGuid, *(_DWORD *)(a1 + 56));
      if ( v16 < 0 )
      {
        v17 = (void *)*((_QWORD *)ISInDSByGuid + 11);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        *(_OWORD *)ISInDSByGuid = v21;
        *((_OWORD *)ISInDSByGuid + 1) = v22;
        *((_OWORD *)ISInDSByGuid + 2) = v23;
        *((_OWORD *)ISInDSByGuid + 3) = v24;
        *((_OWORD *)ISInDSByGuid + 4) = v25;
        *((_OWORD *)ISInDSByGuid + 5) = v13;
      }
      v18 = *((_QWORD *)ISInDSByGuid + 7) + 56LL;
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
        __fastfail(3u);
      *ISInDSByGuid = v19;
      *((_QWORD *)ISInDSByGuid + 1) = v18;
      *(_QWORD *)(v19 + 8) = ISInDSByGuid;
      *(_QWORD *)v18 = ISInDSByGuid;
      if ( v16 >= 0 )
      {
        if ( *((_QWORD *)&v13 + 1) )
          ExFreePoolWithTag(*((PVOID *)&v13 + 1), 0);
        *a5 = ISInDSByGuid;
        v5 = 2;
      }
    }
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISInDSByGuid);
    if ( v12 )
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, v12);
  }
  else
  {
    return (unsigned int)WmipUpdateAddGuid(a1, a2, a3, a4, a5);
  }
  return v5;
}
