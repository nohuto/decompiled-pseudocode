/*
 * XREFs of MiGetNextPageTable @ 0x140043470
 * Callers:
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400A44FC (MiFlushDirtyBitsToPfn.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiIsCfgBitMapPageShared @ 0x1400E7C60 (MiIsCfgBitMapPageShared.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 *     MiCloneReserveVadCommit @ 0x14010A8B8 (MiCloneReserveVadCommit.c)
 *     MiDeleteSessionAddressSpace @ 0x140123278 (MiDeleteSessionAddressSpace.c)
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiAddLoaderHalIoMappings @ 0x1407A3F38 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageRanges @ 0x1407AF36C (MiMarkLargePageRanges.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetNextPageTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  int v7; // esi
  unsigned int v8; // edi
  unsigned __int64 v9; // r12
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r9
  KIRQL v15; // r10
  unsigned __int64 v16; // r11
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD v23[6]; // [rsp+40h] [rbp-78h] BYREF
  char v24; // [rsp+78h] [rbp-40h] BYREF

  v7 = 0;
  *a6 = 0;
  v8 = 2;
  v9 = a1;
  v23[4] = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23[5] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = &v24;
  do
  {
    v11 = *((_QWORD *)v10 - 3);
    v10 -= 16;
    *((_QWORD *)v10 - 3) = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)v10 - 2) = ((*(_QWORD *)v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
LABEL_3:
  v12 = v23[2 * v8];
  while ( 1 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    if ( !v13 )
      goto LABEL_12;
    if ( (v13 & 1) == 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
      MiMakeSystemAddressValid((__int64)((v12 << 25) - (v16 << 25)) >> 16, a3, 0, v15, v14);
      v16 = 0xFFFFF68000000000uLL;
    }
    if ( *(char *)v12 < 0 )
      break;
    if ( (a5 & 2) == 0
      || qword_140327728 == (PVOID)qword_140327730
      || (PVOID)MI_GET_PAGE_FRAME_FROM_PTE(v12) != *(&qword_140327728 + 3 - v8) )
    {
      if ( (v7 & 1) != 0 )
      {
        v18 = v8 + 1;
        v19 = (__int64)((v12 << 25) - (v16 << 25)) >> 16;
        if ( v8 + 1 < 3 )
        {
          v20 = &v23[2 * v18];
          v21 = 3 - v18;
          do
          {
            *v20 = v19;
            v20 += 2;
            v19 = (__int64)((v19 << 25) - (v16 << 25)) >> 16;
            --v21;
          }
          while ( v21 );
        }
        v7 &= ~1u;
      }
      if ( ++v8 >= 3 )
      {
        if ( (v7 & 2) != 0 )
          return (__int64)((v12 << 25) - (v16 << 25)) >> 16;
        return v9;
      }
      goto LABEL_3;
    }
LABEL_12:
    v12 += 8LL;
    for ( v7 |= 3u; (v12 & 0xFFF) == 0; v12 = v16 + ((v12 >> 9) & 0x7FFFFFFFF8LL) )
    {
      if ( !v8 )
        break;
      --v8;
    }
    if ( v12 > v23[2 * v8 + 1] )
    {
      if ( a3 )
        MiFlushTbList(a3);
      return 0LL;
    }
  }
  *a6 = 3 - v8;
  if ( v8 != 2 )
  {
    v22 = 2 - v8;
    do
    {
      v12 = (__int64)((v12 << 25) - (v16 << 25)) >> 16;
      --v22;
    }
    while ( v22 );
  }
  return (__int64)((v12 << 25) - (v16 << 25)) >> 16;
}
