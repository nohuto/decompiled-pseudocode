/*
 * XREFs of MiTryLocateWsle @ 0x140095390
 * Callers:
 *     MiIsNextVaTrimCandidate @ 0x140081960 (MiIsNextVaTrimCandidate.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiConvertAndFlushWsleVas @ 0x1401076E8 (MiConvertAndFlushWsleVas.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MI_WSLE_HASH_VA @ 0x140108EB4 (MI_WSLE_HASH_VA.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

ULONG_PTR __fastcall MiTryLocateWsle(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // rbp
  __int64 v7; // r11
  unsigned __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 *v16; // rcx
  unsigned __int64 PteShadow; // r8
  int v18; // ebx
  __int64 v19; // rdi
  __int64 *v20; // r11
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r11
  ULONG_PTR v29; // r15
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  ULONG_PTR *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r9
  ULONG_PTR BugCheckParameter4; // rax

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v5 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL | 1;
  v7 = *(unsigned int *)(v3 + 64);
  v8 = *(_QWORD *)(v3 + 32);
  v9 = *(_QWORD *)(v3 + 496);
  if ( a3 <= v8 )
  {
    v10 = *(_QWORD *)(a3 * *(unsigned int *)(v3 + 64) + v9);
    v11 = v10 & 0x800000000000LL;
    if ( (v10 & 1) != 0 )
    {
      v12 = v11 ? v10 | 0xFFFF000000000000uLL : v10 & 0xFFFFFFFFFFFFLL;
      if ( (v12 & 0x800000000000LL) != 0 )
      {
        v13 = v11 ? v10 | 0xFFFF000000000000uLL : v10 & 0xFFFFFFFFFFFFLL;
        v14 = v13 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
      }
      else
      {
        v14 = v10 & 0xFFFFFFFFF000LL | 1;
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 == v5 )
      return a3;
  }
  v16 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v16;
  if ( (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v16, *v16);
  a3 = (PteShadow >> 52) & 0x7FF;
  if ( (_DWORD)a3 )
  {
    v18 = 16;
    if ( (unsigned int)a3 <= v8 )
    {
      v19 = v7 << 11;
      v20 = (__int64 *)(v9 + (unsigned int)a3 * v7);
      while ( 1 )
      {
        v21 = *v20;
        if ( (*v20 & 1) != 0 )
        {
          v22 = v21 & 0x800000000000LL;
          v23 = (v21 & 0x800000000000LL) != 0 ? v21 | 0xFFFF000000000000uLL : v21 & 0xFFFFFFFFFFFFLL;
          if ( (v23 & 0x800000000000LL) != 0 )
          {
            v24 = v22 ? v21 | 0xFFFF000000000000uLL : v21 & 0xFFFFFFFFFFFFLL;
            v25 = v24 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
          }
          else
          {
            v26 = v22 ? v21 | 0xFFFF000000000000uLL : v21 & 0xFFFFFFFFFFFFLL;
            v25 = v26 & 0xFFFFFFFFF000LL | 1;
          }
          if ( v25 == v5 )
            return a3;
        }
        if ( --v18 )
        {
          a3 += 2048LL;
          v20 = (__int64 *)((char *)v20 + v19);
          if ( a3 <= v8 )
            continue;
        }
        break;
      }
    }
  }
  v27 = *(_QWORD *)(v3 + 88);
  v28 = 0xFFFFFFFFFLL;
  if ( !v27 )
  {
    v33 = MI_WSLE_HASH_VA(v3, BugCheckParameter2, 0LL, v4);
    if ( MiIsAddressValid(v33) )
    {
      a3 = *v34;
      if ( a3 )
      {
        v35 = *(_QWORD *)(a3 * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496));
        if ( (v35 & 4) == 0
          || (v35 & 8) != 0
          || (v35 & 1) == 0
          || ((v36 = v35 & 0x800000000000LL, (v35 & 0x800000000000LL) == 0)
            ? (v37 = v35 & 0xFFFFFFFFFFFFLL)
            : (v37 = v35 | 0xFFFF000000000000uLL),
              (v37 & 0x800000000000LL) == 0
            ? (!v36 ? (v40 = v35 & 0xFFFFFFFFFFFFLL) : (v40 = v35 | 0xFFFF000000000000uLL),
               v39 = v40 & 0xFFFFFFFFF000LL | 1)
            : (!v36 ? (v38 = v35 & 0xFFFFFFFFFFFFLL) : (v38 = v35 | 0xFFFF000000000000uLL),
               v39 = v38 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL),
              v39 != v5) )
        {
          if ( (v35 & 0x800000000000LL) != 0 )
            BugCheckParameter4 = v35 | 0xFFFF000000000000uLL;
          else
            BugCheckParameter4 = v35 & 0xFFFFFFFFFFFFLL;
          KeBugCheckEx(0x1Au, 0x41289uLL, BugCheckParameter2, a3, BugCheckParameter4);
        }
        return a3;
      }
    }
    return v28;
  }
  if ( (v27 & 1) != 0 )
    return v28;
  v29 = BugCheckParameter2 >> 12;
  v30 = (unsigned __int8)v29;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v27 + 16 * v30);
    if ( (v31 & 1) != 0 )
      v32 = (v31 & 0x800000000000LL) != 0 ? v31 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL : v31 & 0xFFFFFFFFF000LL | 1;
    else
      v32 = v4;
    if ( v32 == v5 )
      break;
    if ( ++v30 >= 0x100 )
      v30 = v4;
    if ( v30 == (unsigned __int8)v29 )
      return v28;
  }
  if ( v30 == 0xFFFFFFFFFLL )
    return v28;
  return *(_QWORD *)(v27 + 16 * v30 + 8);
}
