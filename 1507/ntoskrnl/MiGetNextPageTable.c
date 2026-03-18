/*
 * XREFs of MiGetNextPageTable @ 0x14003BAA0
 * Callers:
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiIsCfgBitMapPageShared @ 0x14003A868 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiEnumerateLeafPtes @ 0x1400DCA4C (MiEnumerateLeafPtes.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiFlushDirtyBitsToPfn @ 0x140119A48 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 *     MiAddLoaderHalIoMappings @ 0x1407C9294 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 __fastcall MiGetNextPageTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  int v6; // esi
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 Process; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rdx
  __int64 v19; // r8
  _QWORD v21[6]; // [rsp+30h] [rbp-78h] BYREF
  char v22; // [rsp+68h] [rbp-40h] BYREF

  v6 = 0;
  *a6 = 0;
  v8 = 0x98000000000LL;
  v9 = 2;
  v21[4] = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = a1;
  v21[5] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (__int64)&v22;
  do
  {
    v12 = *(_QWORD *)(Process - 24);
    Process -= 16LL;
    *(_QWORD *)(Process - 24) = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(Process - 16) = ((*(_QWORD *)Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v9;
  }
  while ( v9 );
  do
  {
    v13 = v21[2 * v9];
    while ( 1 )
    {
      v14 = *(_QWORD *)v13;
      if ( v13 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v14)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v15 = *(_QWORD *)(Process + 1520);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v16 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      if ( v14 )
      {
        if ( (v14 & 1) != 0 )
          goto LABEL_23;
        if ( a3 != 1 )
          break;
      }
      v13 += 8LL;
      for ( v6 |= 3u; (v13 & 0xFFF) == 0; v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - v8 )
      {
        if ( !v9 )
          break;
        --v9;
      }
      if ( v13 > v21[2 * v9 + 1] )
      {
        if ( a3 >= 2 )
          MiFlushTbList(a3);
        return 0LL;
      }
    }
    MiMakeSystemAddressValid((__int64)(v13 << 25) >> 16, a5 != 0);
    v8 = 0x98000000000LL;
LABEL_23:
    if ( (v6 & 1) != 0 )
    {
      v17 = v9 + 1;
      Process = (__int64)(v13 << 25) >> 16;
      if ( v9 + 1 < 3 )
      {
        v18 = &v21[2 * v17];
        v19 = 3 - v17;
        do
        {
          *v18 = Process;
          v18 += 2;
          Process = Process << 25 >> 16;
          --v19;
        }
        while ( v19 );
      }
      v6 &= ~1u;
    }
    ++v9;
  }
  while ( v9 < 3 );
  if ( (v6 & 2) != 0 || *(char *)v13 < 0 )
    v10 = (__int64)(v13 << 25) >> 16;
  if ( *(char *)v13 < 0 )
    *a6 = 1;
  return v10;
}
