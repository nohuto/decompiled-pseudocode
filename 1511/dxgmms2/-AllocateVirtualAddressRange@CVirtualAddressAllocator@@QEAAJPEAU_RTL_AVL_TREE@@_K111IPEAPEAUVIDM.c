/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0041838 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0012DEC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0038728 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0041598 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C004162C (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C005EFE4 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005F06C (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rbp
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // r12
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct VIDMM_VAD *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  int v32; // ecx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  struct VIDMM_VAD **v35; // rsi
  struct VIDMM_VAD **v36; // rcx
  struct VIDMM_VAD *v37; // rdx
  char *v38; // r14
  __int64 v39; // r8
  struct _RTL_BALANCED_NODE *v40; // rdi
  struct _RTL_BALANCED_NODE *v41; // rax
  __int64 v43; // rcx
  struct VIDMM_VAD *Vad; // r13
  unsigned __int64 v45; // rdx
  struct VIDMM_VAD *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // r14
  __int64 **v50; // rbx
  __int64 v51; // rcx
  char *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD v62[15]; // [rsp+20h] [rbp-78h] BYREF
  struct _RTL_AVL_TREE *v63; // [rsp+A8h] [rbp+10h] BYREF

  v63 = a2;
  v9 = a9;
  v11 = a3;
  if ( a9 )
  {
    a2 = (struct _RTL_AVL_TREE *)*(unsigned int *)(*((_QWORD *)this + 9) + 48LL);
    if ( ((unsigned __int8)a2 & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 8) + 40009LL) )
      v9 = 0;
  }
  v13 = a3 + a4;
  v14 = *(unsigned int *)(*((_QWORD *)this + 8) + 6416LL);
  if ( a3 + a4 <= a4 )
  {
    v53 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v53 + 24) = 754LL;
    WdLogEvent5_WdAssertion(v53);
    return 3221225485LL;
  }
  if ( !a7 || (v15 = a7 - 1, ((a7 - 1) & a7) != 0) )
  {
    v61 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v61 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v61);
    return 3221225485LL;
  }
  memset(v62, 0, 0x48uLL);
  v62[5] = v15;
  v62[6] = ~(unsigned __int64)v15;
  if ( ((a7 - 1) & (unsigned int)a4) != 0 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v15, v16, v17, v18);
    *(_QWORD *)(v54 + 24) = 770LL;
    WdLogEvent5_WdAssertion(v54);
    return 3221225485LL;
  }
  v19 = a6;
  v20 = a5;
  v62[0] = a4;
  v62[1] = v13;
  v62[2] = a5;
  if ( !a6 )
    v19 = *(_QWORD *)this;
  v21 = 0;
  v62[3] = v19;
  v62[4] = v11;
  if ( v9 && dword_1C002F3D4 && v13 != *(_QWORD *)this )
  {
    v55 = v11 + 4096;
    v56 = v13 + 4096;
    if ( v11 + 4096 < v11 || v56 < v13 )
    {
      v57 = WdLogNewEntry5_WdAssertion(a5, v56, v55, v18);
      *(_QWORD *)(v57 + 24) = 792LL;
      WdLogEvent5_WdAssertion(v57);
      v19 = v62[3];
      v20 = v62[2];
      v11 = v62[4];
    }
    else
    {
      v11 += 4096LL;
      v62[4] = v55;
      v62[1] = v13 + 4096;
      v21 = 1;
    }
  }
  if ( v20 >= v19 || v19 - v20 < v11 )
    return 3221225485LL;
  NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, v62);
  v25 = NodeInFreeList;
  if ( !NodeInFreeList )
  {
    v58 = WdLogNewEntry5_WdWarning(v23);
    WdLogEvent5_WdWarning(v58);
    return 3221225473LL;
  }
  v26 = v62[7];
  v27 = *((_QWORD *)NodeInFreeList + 3);
  v28 = v62[7] + v62[4];
  if ( v27 == v62[7] )
  {
    if ( *((_QWORD *)NodeInFreeList + 4) - v27 != v62[4] )
    {
      v29 = operator new((unsigned int)(16 * (v14 + 6)), 0x39346956u, v24, PagedPool);
      v31 = v29;
      if ( v29 )
      {
        v29[3] = v26;
        v32 = (*((_DWORD *)v29 + 18) ^ (16 * v14)) & 0x7F0;
        v29[4] = v28;
        *((_DWORD *)v29 + 18) ^= v32;
        if ( (_DWORD)v14 )
        {
          v33 = v29 + 12;
          v34 = v14;
          do
          {
            v33[1] = v33;
            *v33 = v33;
            v33 += 2;
            --v34;
          }
          while ( v34 );
        }
        v35 = a8;
        v31[11] = v31 + 10;
        v31[10] = v31 + 10;
        v36 = (struct VIDMM_VAD **)*((_QWORD *)v25 + 6);
        *v35 = (struct VIDMM_VAD *)v31;
        v37 = (struct VIDMM_VAD *)(v31 + 5);
        *(_QWORD *)v37 = (char *)v25 + 40;
        *((_QWORD *)v37 + 1) = v36;
        if ( *v36 != (struct VIDMM_VAD *)((char *)v25 + 40) )
          __fastfail(3u);
        *v36 = v37;
        *((_QWORD *)v25 + 6) = v37;
        *((_QWORD *)v25 + 3) = v28;
        v38 = (char *)this + 24;
        RtlAvlRemoveNode((char *)this + 24, v25);
        *((_DWORD *)v25 + 18) &= 0xFFFFFFF0;
        LOBYTE(v39) = 0;
        v40 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
        v63 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v25 + 4) - *((_QWORD *)v25 + 3));
        if ( v40 )
        {
          while ( 1 )
          {
            if ( (int)CompareVadSizeAvl(&v63, v40) < 0 )
            {
              v41 = v40->Children[0];
              if ( !v40->Children[0] )
              {
                LOBYTE(v39) = 0;
                break;
              }
            }
            else
            {
              v41 = v40->Children[1];
              if ( !v41 )
              {
                LOBYTE(v39) = 1;
                break;
              }
            }
            v40 = v41;
          }
        }
        RtlAvlInsertNodeEx(v38, v40, v39, v25);
        *((_DWORD *)v25 + 18) = *((_DWORD *)v25 + 18) & 0xFFFFE7F0 | 1;
        goto LABEL_27;
      }
      _InterlockedIncrement(&dword_1C002F5F8);
      v59 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v59 + 24) = 853LL;
      goto LABEL_51;
    }
    *((_DWORD *)NodeInFreeList + 18) = *((_DWORD *)NodeInFreeList + 18) & 0xFFFFFFF0 | 2;
    RtlAvlRemoveNode((char *)this + 24, NodeInFreeList);
    v35 = a8;
    *((_DWORD *)v25 + 18) &= 0xFFFFFFF0;
    *v35 = v25;
  }
  else
  {
    Vad = CVirtualAddressAllocator::AllocateVad(v62[7], v62[7] + v62[4], v14);
    if ( !Vad )
    {
      _InterlockedIncrement(&dword_1C002F5F8);
      v59 = WdLogNewEntry5_WdLowResource(v43);
      *(_QWORD *)(v59 + 24) = 886LL;
LABEL_51:
      WdLogEvent5_WdLowResource(v59);
      return 3221225495LL;
    }
    v45 = *((_QWORD *)v25 + 4);
    v46 = 0LL;
    if ( v28 < v45 )
    {
      v46 = CVirtualAddressAllocator::AllocateVad(v28, v45, v14);
      if ( !v46 )
      {
        _InterlockedIncrement(&dword_1C002F5F8);
        v60 = WdLogNewEntry5_WdLowResource(v47);
        *(_QWORD *)(v60 + 24) = 899LL;
        WdLogEvent5_WdLowResource(v60);
        CVirtualAddressAllocator::FreeVad(Vad);
        return 3221225495LL;
      }
    }
    *((_QWORD *)v25 + 4) = v62[7];
    RtlAvlRemoveNode((char *)this + 24, v25);
    *((_DWORD *)v25 + 18) &= 0xFFFFFFF0;
    CVirtualAddressAllocator::InsertVadToFreeList(this, v25);
    v48 = *((_QWORD *)v25 + 5);
    v49 = (__int64 *)((char *)Vad + 40);
    v35 = a8;
    v50 = (__int64 **)((char *)v25 + 40);
    *((_QWORD *)Vad + 5) = v48;
    *((_QWORD *)Vad + 6) = v50;
    *v35 = Vad;
    if ( *(__int64 ***)(v48 + 8) != v50 )
      __fastfail(3u);
    *(_QWORD *)(v48 + 8) = v49;
    *v50 = v49;
    if ( v46 )
    {
      CVirtualAddressAllocator::InsertVadToFreeList(this, v46);
      v51 = *v49;
      v52 = (char *)v46 + 40;
      *((_QWORD *)v46 + 5) = *v49;
      *((_QWORD *)v46 + 6) = v49;
      if ( *(__int64 **)(v51 + 8) != v49 )
        __fastfail(3u);
      *(_QWORD *)(v51 + 8) = v52;
      *v49 = (__int64)v52;
    }
  }
LABEL_27:
  *((_DWORD *)*v35 + 18) ^= (*((_DWORD *)*v35 + 18) ^ (v21 << 12)) & 0x1000;
  return 0LL;
}
