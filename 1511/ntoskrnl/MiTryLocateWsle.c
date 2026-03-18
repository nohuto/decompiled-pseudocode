/*
 * XREFs of MiTryLocateWsle @ 0x140058C40
 * Callers:
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiIsNextVaTrimCandidate @ 0x1400B64B0 (MiIsNextVaTrimCandidate.c)
 *     MiConvertAndFlushWsleVas @ 0x1400D05B4 (MiConvertAndFlushWsleVas.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MiLocateIndirectHash @ 0x1400C8250 (MiLocateIndirectHash.c)
 *     MI_WSLE_HASH_VA @ 0x1400E5824 (MI_WSLE_HASH_VA.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLocateWsle(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r10
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  ULONG_PTR v27; // r8
  ULONG_PTR *v28; // r9
  __int64 v29; // r11
  ULONG_PTR v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 IndirectHash; // rax
  ULONG_PTR BugCheckParameter4; // rax

  v3 = *(_QWORD *)(a2 + 184);
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
  v6 = *(unsigned int *)(v3 + 64);
  v7 = *(_QWORD *)(v3 + 32);
  v8 = *(_QWORD *)(v3 + 496);
  if ( a3 <= v7 )
  {
    v9 = *(_QWORD *)(a3 * *(unsigned int *)(v3 + 64) + v8);
    v10 = v9 & 0x800000000000LL;
    if ( (v9 & 1) != 0 )
    {
      v11 = v10 ? v9 | 0xFFFF000000000000uLL : v9 & 0xFFFFFFFFFFFFLL;
      if ( (v11 & 0x800000000000LL) != 0 )
      {
        v15 = v10 ? v9 | 0xFFFF000000000000uLL : v9 & 0xFFFFFFFFFFFFLL;
        v13 = v15 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
      }
      else
      {
        v12 = v10 ? v9 | 0xFFFF000000000000uLL : v9 & 0xFFFFFFFFFFFFLL;
        v13 = v12 & 0xFFFFFFFFF000LL | 1;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 == v5 )
      return a3;
  }
  v16 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  a3 = (v16 >> 52) & 0x7FF;
  if ( ((v16 >> 52) & 0x7FF) != 0 )
  {
    v17 = 16;
    if ( a3 <= v7 )
    {
      v18 = v6 << 11;
      v19 = (__int64 *)(v8 + a3 * v6);
      while ( 1 )
      {
        v20 = *v19;
        if ( (*v19 & 1) != 0 )
        {
          v21 = v20 & 0x800000000000LL;
          v22 = (v20 & 0x800000000000LL) != 0 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
          if ( (v22 & 0x800000000000LL) != 0 )
          {
            v36 = v21 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
            v24 = v36 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
          }
          else
          {
            v23 = v21 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
            v24 = v23 & 0xFFFFFFFFF000LL | 1;
          }
          if ( v24 == v5 )
            return a3;
        }
        if ( --v17 )
        {
          a3 += 2048LL;
          v19 = (__int64 *)((char *)v19 + v18);
          if ( a3 <= v7 )
            continue;
        }
        break;
      }
    }
  }
  v25 = *(_QWORD *)(v3 + 88);
  if ( v25 )
  {
    if ( (v25 & 1) == 0 )
    {
      IndirectHash = MiLocateIndirectHash(v3, v5, (unsigned __int8)(a1 >> 12));
      if ( IndirectHash != 0xFFFFFFFFFLL )
        return *(_QWORD *)(v25 + 16 * IndirectHash + 8);
    }
    return 0xFFFFFFFFFLL;
  }
  v26 = MI_WSLE_HASH_VA(v3, a1, a1);
  if ( (unsigned __int8)MiIsAddressValid(v26) != 1 )
    return 0xFFFFFFFFFLL;
  v30 = *v28;
  if ( !v30 )
    return 0xFFFFFFFFFLL;
  v31 = *(_QWORD *)(v30 * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496));
  if ( (v31 & 0xD) != 5
    || ((v32 = v31 & 0x800000000000LL, (v31 & 1) == 0)
      ? (v35 = 0LL)
      : (v32 ? (v33 = v31 | 0xFFFF000000000000uLL) : (v33 = v31 & 0xFFFFFFFFFFFFLL),
         (v33 & 0x800000000000LL) != 0
       ? (!v32 ? (v37 = v31 & 0xFFFFFFFFFFFFLL) : (v37 = v31 | 0xFFFF000000000000uLL),
          v35 = v29 | v37 & 0xFFFFFFFFFFFFF001uLL)
       : (v32 ? (v34 = v31 | 0xFFFF000000000000uLL) : (v34 = v31 & 0xFFFFFFFFFFFFLL), v35 = v34 & 0xFFFFFFFFF000LL | 1)),
        v35 != v5) )
  {
    if ( (v31 & 0x800000000000LL) != 0 )
      BugCheckParameter4 = v31 | 0xFFFF000000000000uLL;
    else
      BugCheckParameter4 = v31 & 0xFFFFFFFFFFFFLL;
    KeBugCheckEx(0x1Au, 0x41289uLL, v27, v30, BugCheckParameter4);
  }
  return v30;
}
