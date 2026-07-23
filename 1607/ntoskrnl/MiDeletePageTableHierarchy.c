/*
 * XREFs of MiDeletePageTableHierarchy @ 0x1400E2BE0
 * Callers:
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeletePhysmemVad @ 0x140111B20 (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401EFDC8 (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401F590C (MiUnmapLargeUserPages.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePageTableHierarchy(int *a1, ULONG_PTR a2)
{
  int *v3; // r13
  __int64 v4; // r15
  __m128i *v5; // rsi
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // r10
  ULONG_PTR *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  _KPROCESS *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR UsedPtesHandle; // rdi
  int v18; // r14d
  __int64 v19; // rdi
  unsigned __int64 v20; // rbp
  int *v21; // rax
  __int64 result; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-148h] BYREF
  _KPROCESS *Process; // [rsp+40h] [rbp-138h]
  _QWORD v25[3]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-118h] BYREF
  int v27; // [rsp+70h] [rbp-108h] BYREF
  __int16 v28; // [rsp+74h] [rbp-104h]
  __int64 v29; // [rsp+78h] [rbp-100h]
  __int64 v30; // [rsp+80h] [rbp-F8h]
  __int64 v31; // [rsp+88h] [rbp-F0h]

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v23[1] = (char *)Process + 1280;
  if ( !a1 )
  {
    v3 = &v27;
    v29 = 20LL;
    v27 = 1;
    v28 = 0;
    v30 = 0LL;
    v31 = 0LL;
  }
  while ( 1 )
  {
    v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23[0] = MI_READ_PTE_LOCK_FREE(v6);
    v7 = v23[0];
    v8 = MI_GET_PAGE_FRAME_FROM_PTE(v23);
    v11 = (ULONG_PTR *)(v9 + 48 * v8);
    if ( !v5 )
      v5 = (__m128i *)(v9 + 48 * v8);
    MiTerminateWsle(a2, v10, *v11, 0);
    if ( (v11[1] | 0x8000000000000000uLL) != v6 )
      KeBugCheckEx(0x1Au, 0x401uLL, v6, v7, v11[1]);
    *(_QWORD *)v6 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v6, v12) )
      MiWritePteShadow(v13, 0LL);
    ++v4;
    MiInsertTbFlushEntry((__int64)v3, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
      break;
    UsedPtesHandle = MiGetUsedPtesHandle(a2);
    MiDecreaseUsedPtesCount(UsedPtesHandle);
    if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) != 0 )
      break;
    a2 = v6 & 0xFFFFFFFFFFFFF000uLL;
  }
  MiFlushTbList((__int64)v3, v14, v15, v16);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -v4);
  v18 = BYTE4(PerfGlobalGroupMask) & 1;
  do
  {
    v19 = 48 * (v5[2].m128i_i64[1] & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiLockPageAtDpcInline((__int64)v5);
    v5[1].m128i_i64[1] |= 0x4000000000000000uLL;
    if ( v18 )
    {
      memset(v25, 0, sizeof(v25));
      MiIdentifyPfn(v5, v25);
    }
    v20 = v5[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL;
    if ( v20 < 0x10000 )
    {
      if ( (unsigned int)MiDecrementShareCount(v5) != 3 )
        goto LABEL_19;
    }
    else
    {
      MiDecrementShareCount(v5);
    }
    v21 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v5[2].m128i_i64[1]) >> 8) & 0x3FF);
    MiChargeCommit((__int64)v21, 1uLL, 4);
LABEL_19:
    if ( v20 != 1 )
      v5->m128i_i64[0] = 0LL;
    _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v19);
    result = MiDecrementShareCount(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v4;
    v5 = (__m128i *)v19;
    if ( v18 )
    {
      v26[1] = 24LL;
      v26[0] = v25;
      result = EtwTraceKernelEvent((int)v26, 1, 0x20000001u, 631, 289413890);
    }
  }
  while ( v4 );
  return result;
}
