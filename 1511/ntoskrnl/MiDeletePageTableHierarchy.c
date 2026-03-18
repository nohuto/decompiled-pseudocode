/*
 * XREFs of MiDeletePageTableHierarchy @ 0x14006D570
 * Callers:
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401DF250 (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiDeletePageTableHierarchy(int *a1, unsigned __int64 a2)
{
  int *v3; // r12
  __int64 v4; // rsi
  _KPROCESS *Process; // r13
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // r15
  _KPROCESS *v10; // rdx
  ULONG_PTR v11; // rbx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 result; // rax
  int v18; // [rsp+30h] [rbp-148h] BYREF
  int v19; // [rsp+34h] [rbp-144h] BYREF
  __int64 v20; // [rsp+38h] [rbp-140h]
  __int64 v21; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int64 v22[3]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-118h] BYREF
  int v24; // [rsp+70h] [rbp-108h] BYREF
  __int16 v25; // [rsp+74h] [rbp-104h]
  __int64 v26; // [rsp+78h] [rbp-100h]
  __int64 v27; // [rsp+80h] [rbp-F8h]
  __int64 v28; // [rsp+88h] [rbp-F0h]

  v20 = 0LL;
  v3 = a1;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !a1 )
  {
    v3 = &v24;
    v26 = 20LL;
    v24 = 1;
    v25 = 0;
    v27 = 0LL;
    v28 = 0LL;
  }
  while ( 1 )
  {
    v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = MI_READ_PTE_LOCK_FREE(v6);
    v7 = v21;
    v8 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v21) - 0x58000000000LL);
    if ( !v4 )
      v4 = (__int64)v8;
    MiTerminateWsle(a2, &Process[1].IdealNode[12], *v8);
    if ( (v8[1] | 0x8000000000000000uLL) != v6 )
      KeBugCheckEx(0x1Au, 0x401uLL, v6, v7, v8[1]);
    *(_QWORD *)v6 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      MiWritePteShadow(v6, 0LL);
    v9 = ++v20;
    MiInsertTbFlushEntry((__int64)v3, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    if ( v6 + 0x90482413000LL <= 0xFFF )
      break;
    v11 = MI_GET_USED_PTES_HANDLE(a2);
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v11);
    if ( ((*(_DWORD *)(v11 + 16) >> 14) & 0x3FF) != 0 )
      break;
    a2 = v6 & 0xFFFFFFFFFFFFF000uLL;
  }
  MiFlushTbList((__int64)v3, v10);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -v9);
  v12 = BYTE4(PerfGlobalGroupMask) & 1;
  do
  {
    v13 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL;
    v19 = 0;
    v14 = 48 * v13 - 0x58000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
    if ( v12 )
    {
      memset(v22, 0, sizeof(v22));
      MiIdentifyPfn(v4, v22);
    }
    v15 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v15 < 0x10000 )
    {
      if ( (unsigned int)MiDecrementShareCount(v4) != 3 )
        goto LABEL_21;
    }
    else
    {
      MiDecrementShareCount(v4);
    }
    v16 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF);
    MiChargeCommit(v16, 1uLL, 4uLL);
LABEL_21:
    if ( v15 != 1 )
      *(_QWORD *)v4 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0 );
    }
    result = MiDecrementShareCount(v14);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v9;
    v4 = v14;
    if ( v12 )
    {
      v23[1] = 24LL;
      v23[0] = v22;
      result = EtwTraceKernelEvent((int)v23, 1, 0x20000001u, 0x277u, 289413890);
    }
  }
  while ( v9 );
  return result;
}
