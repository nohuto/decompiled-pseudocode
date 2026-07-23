/*
 * XREFs of MiTryLocateWsle @ 0x140046710
 * Callers:
 *     MiIsNextVaTrimCandidate @ 0x140016740 (MiIsNextVaTrimCandidate.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiConvertAndFlushWsleVas @ 0x14008FF58 (MiConvertAndFlushWsleVas.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiLocateIndirectHash @ 0x14004B690 (MiLocateIndirectHash.c)
 *     MiGetWsleHashVa @ 0x1400FCF54 (MiGetWsleHashVa.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiTryLocateWsle(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR *v4; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  int v17; // r15d
  __int64 v18; // r12
  __int64 *v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // r15
  __int64 WsleHashVa; // r15
  ULONG_PTR v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 IndirectHash; // rax
  unsigned __int64 v35; // rdx
  ULONG_PTR BugCheckParameter4; // rax

  if ( (*(_BYTE *)(a2 + 184) & 7) == 2 )
    v4 = &::BugCheckParameter2;
  else
    v4 = (ULONG_PTR *)(*(_QWORD *)(a2 + 16) + 416LL);
  v5 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL | 1;
  if ( a3 <= v4[3] )
  {
    v6 = *(_QWORD *)(a3 * *((unsigned int *)v4 + 8) + v4[10]);
    v7 = v6 & 0x800000000000LL;
    if ( (v6 & 1) != 0 )
    {
      v8 = v7 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
      if ( (v8 & 0x800000000000LL) != 0 )
      {
        v12 = v7 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
        v10 = v12 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
      }
      else
      {
        v9 = v7 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
        v10 = v9 & 0xFFFFFFFFF000LL | 1;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 == v5 )
      return a3;
  }
  v13 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  a3 = (v13 >> 52) & 0x7FF;
  if ( ((v13 >> 52) & 0x7FF) != 0 )
  {
    v17 = 16;
    if ( a3 <= v16 )
    {
      v18 = v15 << 11;
      v19 = (__int64 *)(v14 + a3 * v15);
      v14 = 0xFFFF000000000001uLL;
      while ( 1 )
      {
        v20 = *v19;
        if ( (*v19 & 1) != 0 )
        {
          v21 = v20 & 0x800000000000LL;
          v22 = (v20 & 0x800000000000LL) != 0 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
          if ( (v22 & 0x800000000000LL) != 0 )
          {
            v33 = v21 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
            v24 = v33 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
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
          if ( a3 <= v16 )
            continue;
        }
        break;
      }
    }
  }
  v25 = v4[7];
  if ( v25 )
  {
    if ( (v25 & 1) == 0 )
    {
      IndirectHash = MiLocateIndirectHash(v4, v5, (unsigned __int8)(BugCheckParameter2 >> 12), v14);
      if ( IndirectHash != 0xFFFFFFFFFLL )
        return *(_QWORD *)(v25 + 16 * IndirectHash + 8);
    }
    return 0xFFFFFFFFFLL;
  }
  WsleHashVa = MiGetWsleHashVa(v4, BugCheckParameter2, a3, v14);
  if ( !MiIsAddressValid(WsleHashVa) )
    return 0xFFFFFFFFFLL;
  v27 = *(_QWORD *)WsleHashVa;
  if ( !*(_QWORD *)WsleHashVa )
    return 0xFFFFFFFFFLL;
  v28 = *(_QWORD *)(v27 * *((unsigned int *)v4 + 8) + v4[10]);
  if ( (v28 & 0xD) != 5
    || ((v29 = v28 & 0x800000000000LL, (v28 & 1) == 0)
      ? (v32 = 0LL)
      : (v29 ? (v30 = v28 | 0xFFFF000000000000uLL) : (v30 = v28 & 0xFFFFFFFFFFFFLL),
         (v30 & 0x800000000000LL) != 0
       ? (!v29 ? (v35 = v28 & 0xFFFFFFFFFFFFLL) : (v35 = v28 | 0xFFFF000000000000uLL),
          v32 = v35 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL)
       : (v29 ? (v31 = v28 | 0xFFFF000000000000uLL) : (v31 = v28 & 0xFFFFFFFFFFFFLL), v32 = v31 & 0xFFFFFFFFF000LL | 1)),
        v32 != v5) )
  {
    if ( (v28 & 0x800000000000LL) != 0 )
      BugCheckParameter4 = v28 | 0xFFFF000000000000uLL;
    else
      BugCheckParameter4 = v28 & 0xFFFFFFFFFFFFLL;
    KeBugCheckEx(0x1Au, 0x41289uLL, BugCheckParameter2, v27, BugCheckParameter4);
  }
  return *(_QWORD *)WsleHashVa;
}
