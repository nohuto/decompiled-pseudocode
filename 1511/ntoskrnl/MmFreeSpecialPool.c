/*
 * XREFs of MmFreeSpecialPool @ 0x1401DB2D8
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSpecialPoolSlop @ 0x1401DA8D0 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x1401DAB40 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x1401DD4E8 (VerifierFreeTrackedPool.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rsi
  int v4; // r8d
  unsigned int *v5; // r14
  int v6; // r9d
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // edx
  int v9; // r15d
  unsigned __int8 v10; // cl
  __int64 v11; // r13
  ULONG_PTR v12; // r9
  _BYTE *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned int v15; // ecx
  unsigned int i; // edx
  unsigned int v17; // r12d
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  PKSPIN_LOCK v21; // rdi
  _KPROCESS *v22; // rdx
  unsigned __int8 v23; // bl
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r8
  volatile LONG *v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r10
  _QWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v31; // [rsp+30h] [rbp+0h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp+8h]
  unsigned __int64 v33; // [rsp+40h] [rbp+10h] BYREF
  __int64 v34; // [rsp+48h] [rbp+18h]
  __int64 v35; // [rsp+50h] [rbp+20h]
  unsigned __int64 v36; // [rsp+58h] [rbp+28h]
  int v37; // [rsp+60h] [rbp+30h] BYREF
  __int16 v38; // [rsp+64h] [rbp+34h]
  __int64 v39; // [rsp+68h] [rbp+38h]
  __int64 v40; // [rsp+70h] [rbp+40h]
  __int64 v41; // [rsp+78h] [rbp+48h]

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = a1 & 0xFFF;
  if ( (a1 & 0xFFF) != 0 )
  {
    v5 = (unsigned int *)(a1 & 0xFFFFFFFFFFFFF000uLL);
    v6 = 1;
  }
  else
  {
    v5 = (unsigned int *)(v1 + 4080);
    v6 = 0;
  }
  LODWORD(v31) = v6;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *v5;
  if ( (*v5 & 0x8000) != 0 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 2;
  }
  if ( CurrentIrql > v10 )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a1, 0x31uLL);
  SpinLock = &qword_1402FF700;
  if ( (v8 & 0x2000) != 0 )
  {
    v9 |= 0x20u;
    SpinLock = (PKSPIN_LOCK)qword_1402FFCA8;
  }
  v11 = *(_WORD *)v5 & 0x1FFF;
  if ( v6 == 1 )
  {
    v12 = (unsigned int)(4096 - v4);
    if ( ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v12 )
      KeBugCheckEx(0xC1u, a1, *(_WORD *)v5 & 0x1FFF, v12, 0x21uLL);
    v13 = v5 + 4;
    if ( (v8 & 0x4000) != 0 )
      v13 = v5 + 6;
    MiCheckSpecialPoolSlop(v13, a1, v5);
    v6 = v31;
  }
  v14 = (unsigned __int8 *)(a1 + v11);
  v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4096;
  if ( !v6 )
  {
    v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4080;
    if ( (*v5 & 0x4000) != 0 )
      v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4072;
  }
  for ( i = 0; i < v15; ++i )
  {
    if ( *v14 != (unsigned __int16)(unsigned __int8)*((_WORD *)v5 + 1) )
      KeBugCheckEx(0xC1u, a1, (ULONG_PTR)v14, *v5, 0x24uLL);
    ++v14;
  }
  if ( (*v5 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(a1, v11);
  *(_DWORD *)(v1 + 24) = -1737080031;
  *(_DWORD *)(v1 + 28) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v1 + 32) = v11;
  *(_DWORD *)(v1 + 36) = v9;
  *(_QWORD *)(v1 + 40) = a1;
  *(_QWORD *)(v1 + 64) = KeGetCurrentThread();
  *(_QWORD *)(v1 + 48) = Src;
  v17 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)(v1 + 56) = v17;
  if ( v17 )
  {
    if ( v17 > 0x400 )
      v17 = 1024;
    memmove((void *)(v1 + 72), Src, v17);
  }
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 0x20) != 0 )
      v27 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
    else
      v27 = &dword_1402FF980;
    MiDeleteSystemPagableVm(v27, 0LL, (ULONG_PTR)v3, 1LL, 1, &v33);
    if ( v34 )
      v36 -= v34;
    if ( (v9 & 0x20) == 0 )
      MiChargeWsles((ULONG_PTR)v27, -1LL, 0LL);
    v28 = MI_READ_PTE_LOCK_FREE(v3) | 0xFFFFFFFFF0000000uLL;
    v31 = v28;
    *v3 = v28;
    if ( (unsigned int)MiPteInShadowRange(v3) )
      MiWritePteShadow(v3, v28);
    v21 = SpinLock;
  }
  else
  {
    v31 = MI_READ_PTE_LOCK_FREE(v3);
    v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v31) - 0x58000000000LL;
    v19 = *(_QWORD *)(v18 + 40);
    _InterlockedDecrement64(&qword_1402FE258);
    v31 = -268435456LL;
    *v3 = -268435456LL;
    v20 = 48 * (v19 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v3) )
      MiWritePteShadow(v3, -268435456LL);
    v21 = SpinLock;
    v40 = 0LL;
    v41 = 0LL;
    v39 = 20LL;
    v38 = 0;
    v37 = &qword_1402FF700 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v37, v1, 1LL, 0);
    MiFlushTbList((__int64)&v37, v22);
    v23 = MiLockPageInline(v18);
    *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
    if ( (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v18 + 0x58000000000LL) / 48,
        *(_BYTE *)(v18 + 34) & 7,
        *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v24 = *(_WORD *)(v18 + 32);
    if ( v24 != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v18 + 0x58000000000LL) / 48, *(_BYTE *)(v18 + 34) & 7, v24);
    MiDecrementShareCount(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v20, v25, v26);
    MiDecrementShareCount(v20);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v23);
    v36 = 1LL;
    v33 = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_1402FF830, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_1402FF6C8);
  MiRemoveSpecialPoolRange(v21, v9, v3);
  if ( v21 != &qword_1402FF700 )
    _InterlockedDecrement64((volatile signed __int64 *)v21 + 7);
  if ( v33 )
  {
    MiReturnResidentAvailable(v33);
    _InterlockedExchangeAdd64(&qword_1402FF588, v29);
  }
  if ( v36 )
    MiReturnCommit((__int64)MiSystemPartition, v36);
}
