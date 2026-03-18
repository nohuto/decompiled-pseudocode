/*
 * XREFs of MmFreeSpecialPool @ 0x14021FC4C
 * Callers:
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiCheckSpecialPoolSlop @ 0x14021F214 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x1402227B0 (VerifierFreeTrackedPool.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *v3; // rbx
  int v4; // r8d
  unsigned int *v5; // r14
  int v6; // r12d
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // edx
  unsigned __int8 v9; // cl
  int v10; // r9d
  __int64 v11; // r13
  ULONG_PTR v12; // r9
  _BYTE *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned int v15; // ecx
  unsigned int i; // edx
  int v17; // r12d
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 LinkedListPte; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r11
  PKSPIN_LOCK v28; // r15
  unsigned __int8 v29; // r13
  unsigned int v30; // edi
  __int64 v31; // rcx
  unsigned __int16 v32; // ax
  unsigned int v33; // edi
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  signed __int32 *v36; // rdi
  __int64 PteShadow; // rax
  __int64 updated; // rax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rbx
  _QWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v43; // [rsp+30h] [rbp+0h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp+8h]
  unsigned __int64 v45; // [rsp+40h] [rbp+10h] BYREF
  __int64 v46; // [rsp+48h] [rbp+18h]
  __int64 v47; // [rsp+50h] [rbp+20h]
  __int64 v48; // [rsp+58h] [rbp+28h]
  int v49; // [rsp+60h] [rbp+30h] BYREF
  __int16 v50; // [rsp+64h] [rbp+34h]
  __int64 v51; // [rsp+68h] [rbp+38h]
  __int64 v52; // [rsp+70h] [rbp+40h]
  __int64 v53; // [rsp+78h] [rbp+48h]

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
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
  CurrentIrql = KeGetCurrentIrql();
  v8 = *v5;
  v9 = 2;
  if ( (*v5 & 0x8000) != 0 )
  {
    v10 = 1;
    LODWORD(v43) = 1;
    v9 = 1;
  }
  else
  {
    v10 = 0;
    LODWORD(v43) = 0;
  }
  if ( CurrentIrql > v9 )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a1, 0x31uLL);
  SpinLock = &qword_14034FBC0;
  if ( (v8 & 0x2000) != 0 )
  {
    LODWORD(v43) = v10 | 0x20;
    SpinLock = (PKSPIN_LOCK)qword_140350170;
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
  v17 = v43;
  if ( (*v5 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(a1, v11);
  *(_DWORD *)(v1 + 24) = -1737080031;
  *(_DWORD *)(v1 + 28) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v1 + 32) = v11;
  *(_DWORD *)(v1 + 36) = v17;
  *(_QWORD *)(v1 + 40) = a1;
  *(_QWORD *)(v1 + 64) = KeGetCurrentThread();
  *(_QWORD *)(v1 + 48) = Src;
  v18 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)(v1 + 56) = v18;
  if ( v18 )
  {
    if ( v18 > 0x400 )
      v18 = 1024;
    memmove((void *)(v1 + 72), Src, v18);
  }
  if ( (v17 & 1) != 0 )
  {
    if ( (v17 & 0x20) != 0 )
      v36 = (signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
    else
      v36 = dword_14034FE40;
    MiDeleteSystemPagableVm((__int64)v36, 0LL, v3, 1LL, 1, &v45);
    if ( v46 )
      v48 -= v46;
    if ( (v17 & 0x20) == 0 )
      MiChargeWsles((__int64)v36, -1LL, 0);
    PteShadow = *v3;
    if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v3, *v3);
    updated = MiUpdateLinkedListInPte(PteShadow, 0xFFFFFFFFFLL);
    v43 = updated;
    *v3 = updated;
    if ( v40 <= v39 )
      MiWritePteShadow(v3, updated);
    v28 = SpinLock;
  }
  else
  {
    v19 = *v3;
    v20 = 0x90482413000LL;
    v21 = 2040LL;
    if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
      v19 = MiReadPteShadow(v3, *v3);
    v43 = v19;
    if ( (unsigned __int64)&v43 + v20 <= v21 )
      v19 = MiReadPteShadow(&v43, v19);
    v22 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v23 = *(_QWORD *)(v22 + 40);
    _InterlockedDecrement64(&qword_14034E710);
    v24 = 48 * (v23 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    LinkedListPte = MiMakeLinkedListPte(0xFFFFFFFFFLL, 0xFFFFFFFFFLL);
    v43 = LinkedListPte;
    *v3 = LinkedListPte;
    if ( v27 <= v26 )
      MiWritePteShadow(v3, LinkedListPte);
    v28 = SpinLock;
    v51 = 20LL;
    v50 = 0;
    v52 = 0LL;
    v53 = 0LL;
    v49 = &qword_14034FBC0 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v49, v1, 1LL, 0);
    MiFlushTbList((__int64)&v49);
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v30 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v30);
      }
      while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
    }
    v31 = *(_QWORD *)(v22 + 24) | 0x4000000000000000LL;
    *(_QWORD *)(v22 + 24) = v31;
    if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v22 + 0x58000000000LL) / 48, *(_BYTE *)(v22 + 34) & 7, v31 & 0x3FFFFFFFFFFFFFFFLL);
    v32 = *(_WORD *)(v22 + 32);
    if ( v32 != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v22 + 0x58000000000LL) / 48, *(_BYTE *)(v22 + 34) & 7, v32);
    if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v22 + 0x58000000000LL) / 48, *(_BYTE *)(v22 + 34) & 7, 1uLL);
    *(_QWORD *)(v22 + 24) = v31 & 0xC000000000000000uLL;
    MiPfnShareCountIsZero(v22, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v33 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v33);
      }
      while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
    }
    if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v24 + 0x58000000000LL) / 48,
        *(_BYTE *)(v24 + 34) & 7,
        *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v34 = *(_QWORD *)(v24 + 24);
    v35 = (v34 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v24 + 24) = v34 ^ (v35 ^ v34) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v34 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v24, v35);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v29);
    v48 = 1LL;
    v45 = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_14034FCF0, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_14034FB88);
  MiRemoveSpecialPoolRange(v28, v17, (unsigned __int64)v3);
  if ( v28 != &qword_14034FBC0 )
    _InterlockedDecrement64((volatile signed __int64 *)v28 + 7);
  v41 = v45;
  if ( v45 )
  {
    MiReturnResidentAvailable(v45);
    _InterlockedExchangeAdd64(&qword_14034FA28, v41);
  }
  if ( v48 )
    MiReturnCommit((__int64)MiSystemPartition, v48);
}
