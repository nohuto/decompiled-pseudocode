/*
 * XREFs of MiGetNextPageTable @ 0x14005F080
 * Callers:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140036650 (MiIsCfgBitMapPageShared.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiEnumerateLeafPtes @ 0x14005E200 (MiEnumerateLeafPtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiFlushDirtyBitsToPfn @ 0x140098664 (MiFlushDirtyBitsToPfn.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 *     MiDeleteSessionAddressSpace @ 0x140114000 (MiDeleteSessionAddressSpace.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiMarkLargePageRanges @ 0x140749388 (MiMarkLargePageRanges.c)
 *     MiAddLoaderHalIoMappings @ 0x14074CB5C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetNextPageTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  int v6; // ebp
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-78h]
  _QWORD v24[6]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+80h] [rbp-38h] BYREF

  v6 = 0;
  v23 = a6;
  *a6 = 0;
  v8 = 2;
  v9 = a1;
  v10 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v11 = &v25;
  v24[4] = v10 - 0x98000000000LL;
  v24[5] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v12 = *(v11 - 3);
    v11 -= 2;
    *(v11 - 3) = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v11 - 2) = (((unsigned __int64)*v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  do
  {
    v13 = v24[2 * v8];
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v13);
      if ( v14 )
      {
        if ( (v14 & 1) != 0 )
          goto LABEL_8;
        if ( (a5 & 1) == 0 )
          break;
      }
LABEL_11:
      v13 += 8LL;
      for ( v6 |= 3u; (v13 & 0xFFF) == 0; v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        if ( !v8 )
          break;
        --v8;
      }
      if ( v13 > v24[2 * v8 + 1] )
      {
        if ( a3 )
          MiFlushTbList(a3, v15);
        return 0LL;
      }
    }
    MiMakeSystemAddressValid((__int64)(v13 << 25) >> 16, (a5 & 4) != 0);
LABEL_8:
    if ( (a5 & 2) != 0 && qword_1402FF288[0] != qword_1402FF290 )
    {
      v22 = MI_READ_PTE_LOCK_FREE(v13);
      v16 = MI_READ_PTE_LOCK_FREE(&v22);
      v15 = (_KPROCESS *)(3 - v8);
      if ( ((v16 >> 12) & 0xFFFFFFFFFLL) == qword_1402FF288[(_QWORD)v15] )
        goto LABEL_11;
    }
    if ( (v6 & 1) != 0 )
    {
      v18 = v8 + 1;
      v19 = (__int64)(v13 << 25) >> 16;
      if ( v8 + 1 < 3 )
      {
        v20 = &v24[2 * v18];
        v21 = 3 - v18;
        do
        {
          *v20 = v19;
          v20 += 2;
          v19 = v19 << 25 >> 16;
          --v21;
        }
        while ( v21 );
      }
      v6 &= ~1u;
    }
    ++v8;
  }
  while ( v8 < 3 );
  if ( (v6 & 2) != 0 || *(char *)v13 < 0 )
    v9 = (__int64)(v13 << 25) >> 16;
  if ( *(char *)v13 < 0 )
    *v23 = 1;
  return v9;
}
