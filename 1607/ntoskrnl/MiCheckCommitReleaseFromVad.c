/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1401DF30C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1401DF6BC (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x1401DF764 (MiComputeImageVadCommitCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  LONG *SharedVm; // rsi
  KIRQL v12; // al
  __int64 v13; // r9
  __int64 v14; // r10
  KIRQL v15; // bp
  __int64 NextPageTable; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  BOOL v22; // eax
  __int64 v23; // rdx
  bool v24; // zf
  unsigned __int64 v25; // r9
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v27; // rax
  bool v28; // zf
  LONG *v29; // rax
  int v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-48h]
  _BYTE v34[64]; // [rsp+48h] [rbp-40h] BYREF
  KIRQL v37; // [rsp+A8h] [rbp+20h]

  v8 = 0LL;
  v9 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v10 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v33 = v10;
  SharedVm = MiGetSharedVm(a3);
  v12 = ExAcquireSpinLockShared(SharedVm);
  LOBYTE(v14) = 0;
  v37 = v12;
  v15 = v12;
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  if ( v9 <= v10 )
  {
    while ( 1 )
    {
      LOBYTE(v13) = v15;
      NextPageTable = MiGetNextPageTable(v9, v10, 0LL, v13, v14, &v31);
      v17 = NextPageTable;
      if ( NextPageTable == v9 )
      {
        LOBYTE(v14) = 0;
      }
      else
      {
        if ( NextPageTable )
          v18 = (__int64)(NextPageTable - v9) >> 3;
        else
          v18 = ((__int64)(v10 - v9) >> 3) + 1;
        v8 += MiComputeCommitChargeForZeroPteRange(a4, v9, v18);
        LOBYTE(v14) = 0;
        if ( !v17 )
          goto LABEL_50;
      }
      v9 = v17;
      v19 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v19 > v10 )
        v19 = v10;
      if ( v17 <= v19 )
        break;
LABEL_49:
      v15 = v37;
      if ( v9 > v10 )
        goto LABEL_50;
    }
    while ( 1 )
    {
      v20 = MI_READ_PTE_LOCK_FREE(v9);
      v32 = v20;
      v13 = v20;
      if ( !v20 )
      {
        v21 = MiComputeCommitChargeForZeroPteRange(a4, v9, 1LL);
LABEL_32:
        v8 += v21;
        LOBYTE(v14) = 0;
        goto LABEL_47;
      }
      if ( (v20 & 1) != 0 )
        break;
      if ( (v20 & 0x400) != 0 )
      {
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v20) )
        {
          if ( MI_PROTO_FORMAT_COMBINED(v25) )
            goto LABEL_47;
          if ( *(_QWORD *)(a2 + 912) != v14 )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(v13);
            if ( MiLocateCloneAddress(a2, PrototypePteDirect) )
              goto LABEL_47;
          }
          v21 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1LL, v34);
          goto LABEL_32;
        }
        v13 = (v25 >> 5) & 5;
        v24 = (_BYTE)v13 == 5;
        goto LABEL_23;
      }
      if ( (v20 & 0x800) != 0 )
      {
        v27 = MiLockTransitionLeafPage(v9, 0LL);
        LOBYTE(v14) = 0;
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 && (*(_DWORD *)(v27 + 16) & 4) == 0 && !*(_WORD *)(v27 + 32) )
            ++*a6;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v9 -= 8LL;
        }
        goto LABEL_47;
      }
      if ( (v20 & 4) != 0 )
      {
        if ( a5 == (_DWORD)v14 )
          goto LABEL_47;
        v28 = !MiIsPteInStore(a1, v20);
      }
      else
      {
        v13 = v20 >> 5;
        v28 = ((v20 >> 5) & 0x1F) == 16;
      }
      if ( !v28 )
        goto LABEL_46;
LABEL_47:
      v9 += 8LL;
      if ( v9 > v19 )
      {
        v10 = v33;
        goto LABEL_49;
      }
    }
    if ( (v20 & 0x200) == 0 )
      goto LABEL_47;
    if ( (*(_BYTE *)(a4 + 48) & 7) == 6 )
    {
      v22 = MiRotatedToFrameBuffer(v9);
      LOBYTE(v14) = 0;
      if ( v22 )
        goto LABEL_47;
    }
    v23 = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v32) - 0x58000000000LL + 8);
    if ( v23 >= 0 )
      goto LABEL_47;
    if ( *(_QWORD *)(a2 + 912) == v14 )
    {
LABEL_46:
      ++v8;
      goto LABEL_47;
    }
    v24 = MiLocateCloneAddress(a2, v23 | 0x8000000000000000uLL) == 0LL;
LABEL_23:
    if ( v24 )
      goto LABEL_46;
    goto LABEL_47;
  }
LABEL_50:
  v29 = MiGetSharedVm(a3);
  ExReleaseSpinLockShared(v29, v15);
  return v8;
}
