/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x1401CF434
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1401CF738 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x1401CF7D0 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, volatile LONG *a3, __int64 a4, int a5)
{
  volatile LONG *v5; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r9
  KIRQL v12; // r13
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // r8
  bool v22; // zf
  int v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-48h]
  _BYTE v27[64]; // [rsp+48h] [rbp-40h] BYREF
  KIRQL v30; // [rsp+A8h] [rbp+20h]

  v5 = a3;
  v8 = 0LL;
  v9 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v26 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = v26;
  v30 = ExAcquireSpinLockShared(a3);
  v12 = v30;
  if ( v9 <= v26 )
  {
    do
    {
      LOBYTE(v11) = v12;
      NextPageTable = MiGetNextPageTable(v9, v10, 0LL, v11, 0, &v24);
      v14 = NextPageTable;
      if ( NextPageTable != v9 )
      {
        v15 = NextPageTable ? (__int64)(NextPageTable - v9) >> 3 : ((__int64)(v10 - v9) >> 3) + 1;
        v8 += MiComputeCommitChargeForZeroPteRange(a4, v9, v15);
        if ( !v14 )
          break;
      }
      v9 = v14;
      v16 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v16 > v10 )
        v16 = v10;
      if ( v14 <= v16 )
      {
        while ( 1 )
        {
          v17 = MI_READ_PTE_LOCK_FREE((__int64 *)v9);
          v25 = v17;
          if ( !v17 )
          {
            v18 = MiComputeCommitChargeForZeroPteRange(a4, v9, 1LL);
LABEL_28:
            v8 += v18;
            goto LABEL_36;
          }
          if ( (v17 & 1) != 0 )
            break;
          if ( (v17 & 0x400) != 0 )
          {
            if ( HIDWORD(v17) != 0xFFFFFFFF )
            {
              if ( MI_PROTO_FORMAT_COMBINED(v17) || *(_QWORD *)(a2 + 912) && MiLocateCloneAddress(a2, v21 >> 16) )
                goto LABEL_36;
              v18 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1LL, v27);
              goto LABEL_28;
            }
            v20 = ((v17 >> 5) & 5) == 5;
            goto LABEL_19;
          }
          if ( (v17 & 0x800) == 0 )
          {
            if ( (v17 & 0x2000) != 0 )
            {
              if ( !a5 )
                goto LABEL_36;
              v22 = !MI_IS_PTE_IN_STORE_EX(a1, v17);
            }
            else
            {
              v22 = ((v17 >> 5) & 0x1F) == 16;
            }
            if ( !v22 )
              goto LABEL_35;
          }
LABEL_36:
          v9 += 8LL;
          if ( v9 > v16 )
          {
            v10 = v26;
            v12 = v30;
            goto LABEL_38;
          }
        }
        if ( (v17 & 0x200) == 0 || (*(_BYTE *)(a4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v9) )
          goto LABEL_36;
        v19 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((__int64 *)&v25) >> 12) & 0xFFFFFFFFFLL)
                        - 0x58000000000LL
                        + 8);
        if ( (v19 & 0x8000000000000000uLL) == 0 )
          goto LABEL_36;
        if ( !*(_QWORD *)(a2 + 912) )
        {
LABEL_35:
          ++v8;
          goto LABEL_36;
        }
        v20 = MiLocateCloneAddress(a2, v19 | 0x8000000000000000uLL) == 0LL;
LABEL_19:
        if ( v20 )
          goto LABEL_35;
        goto LABEL_36;
      }
LABEL_38:
      ;
    }
    while ( v9 <= v10 );
    v5 = a3;
  }
  ExReleaseSpinLockShared(v5, v12);
  return v8;
}
