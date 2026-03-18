/*
 * XREFs of MmUnmapReservedMapping @ 0x140214F34
 * Callers:
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     sub_14017D17C @ 0x14017D17C (sub_14017D17C.c)
 *     PnprCopyReservedMapping @ 0x1401FC738 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1401FCF70 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1404002BC (PnprMapPhysicalPages.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiValidateReservedMapping @ 0x1401398E0 (MiValidateReservedMapping.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // r12
  ULONG_PTR v6; // r9
  _KPROCESS *Process; // rcx
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r14d
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rsi
  int v20; // [rsp+40h] [rbp-108h] BYREF
  __int16 v21; // [rsp+44h] [rbp-104h]
  int v22; // [rsp+48h] [rbp-100h]
  int v23; // [rsp+4Ch] [rbp-FCh]
  __int64 v24; // [rsp+50h] [rbp-F8h]
  __int64 v25; // [rsp+58h] [rbp-F0h]

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  v6 = MiValidateReservedMapping(v3, (unsigned int)v4);
  Process = (_KPROCESS *)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF);
  BugCheckParameter4 = ((unsigned __int64)&Process[5].ThreadSeed[1] + MemoryDescriptorList->ByteCount + 3) >> 12;
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  if ( BugCheckParameter4 > v6 - 2 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v6, BugCheckParameter4);
  v23 = 0;
  v11 = v9 + 8 * BugCheckParameter4;
  v20 = 0;
  v12 = v9 + 8 * (v6 - 2);
  v24 = 0LL;
  v25 = 0LL;
  v21 = 0;
  v22 = 20;
  if ( v9 < v11 )
  {
    do
    {
      if ( (*(_BYTE *)v9 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, v3, v4, BugCheckParameter4);
      MiInsertTbFlushEntry((__int64)&v20, (__int64)(v9 << 25) >> 16, 1LL, 0);
      v9 += 8LL;
    }
    while ( v9 < v11 );
    v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  }
  v13 = 0x12090482600LL;
  while ( v9 < v12 )
  {
    v14 = *(_QWORD *)v9;
    if ( v9 + v13 * 8 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v14)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v15 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v9 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    if ( v14 )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
    v9 += 8LL;
  }
  v17 = 0;
  v18 = (_QWORD *)(v10 + 16);
  if ( BugCheckParameter4 )
  {
    v19 = (unsigned __int64)&v18[v13];
    do
    {
      *v18 = 0LL;
      if ( v19 <= 0x7F8 )
        MiWritePteShadow(v18, 0LL);
      ++v17;
      ++v18;
      v19 += 8LL;
    }
    while ( v17 < BugCheckParameter4 );
  }
  MiFlushTbList((__int64)&v20);
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
}
