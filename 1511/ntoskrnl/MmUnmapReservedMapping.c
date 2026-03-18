/*
 * XREFs of MmUnmapReservedMapping @ 0x1401D3934
 * Callers:
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     sub_14014EFB8 @ 0x14014EFB8 (sub_14014EFB8.c)
 *     PnprCopyReservedMapping @ 0x1401C0B44 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1401C13D0 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1403AFCD0 (PnprMapPhysicalPages.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiValidateReservedMapping @ 0x1401066D4 (MiValidateReservedMapping.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // r15
  _KPROCESS *v6; // rdx
  ULONG_PTR v7; // r9
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v9; // rdi
  __int64 *v10; // r13
  __int64 *v11; // r12
  unsigned int v12; // ebp
  _QWORD *i; // rdi
  __int64 v14; // [rsp+30h] [rbp-118h]
  int v15; // [rsp+40h] [rbp-108h] BYREF
  __int16 v16; // [rsp+44h] [rbp-104h]
  int v17; // [rsp+48h] [rbp-100h]
  int v18; // [rsp+4Ch] [rbp-FCh]
  __int64 v19; // [rsp+50h] [rbp-F8h]
  __int64 v20; // [rsp+58h] [rbp-F0h]

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  v7 = MiValidateReservedMapping(v3, (unsigned int)v4);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  if ( BugCheckParameter4 > v7 - 2 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v7, BugCheckParameter4);
  v18 = 0;
  v10 = (__int64 *)(v9 + 8 * BugCheckParameter4);
  v15 = 0;
  v11 = (__int64 *)(v9 + 8 * (v7 - 2));
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0;
  v17 = 20;
  while ( v9 < (unsigned __int64)v10 )
  {
    if ( (*(_BYTE *)v9 & 1) == 0 )
      KeBugCheckEx(0xDAu, 0x10BuLL, v3, v4, BugCheckParameter4);
    MiInsertTbFlushEntry((__int64)&v15, (__int64)(v9 << 25) >> 16, 1LL, 0);
    v9 += 8LL;
  }
  while ( v9 < (unsigned __int64)v11 )
  {
    if ( MI_READ_PTE_LOCK_FREE((__int64 *)v9) )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
    v9 += 8LL;
  }
  v12 = 0;
  for ( i = (_QWORD *)(v14 + 16); v12 < BugCheckParameter4; ++i )
  {
    *i = 0LL;
    if ( (unsigned int)MiPteInShadowRange(i) )
      MiWritePteShadow(i, 0LL);
    ++v12;
  }
  MiFlushTbList((__int64)&v15, v6);
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
}
