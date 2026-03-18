/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0063170 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00633C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C005C900 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C005F734 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005FB80 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0060BFC (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
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
  unsigned __int8 v9; // r15
  unsigned __int64 v11; // rbx
  CVirtualAddressAllocator *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct VIDMM_VAD *v31; // rbx
  __int64 v32; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rsi
  struct VIDMM_VAD **v36; // r14
  struct VIDMM_VAD *Vad; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  struct VIDMM_VAD *v40; // rcx
  struct VIDMM_VAD **v41; // rdx
  __int64 v42; // rcx
  struct VIDMM_VAD *v43; // r13
  unsigned __int64 v44; // rdx
  struct VIDMM_VAD *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // rsi
  __int64 *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  char *v52; // rax
  _QWORD v53[10]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v54; // [rsp+E0h] [rbp+70h]

  v9 = a9;
  v11 = a3;
  v12 = this;
  if ( a9 )
  {
    a2 = (struct _RTL_AVL_TREE *)*(unsigned int *)(*((_QWORD *)this + 9) + 48LL);
    if ( ((unsigned __int8)a2 & 2) != 0 )
    {
      v13 = *((_QWORD *)this + 8);
      LOBYTE(this) = -*(_BYTE *)(v13 + 39953);
      v9 = *(_BYTE *)(v13 + 39953) != 0 ? a9 : 0;
    }
  }
  v14 = a3 + a4;
  v15 = *(_DWORD *)(*((_QWORD *)v12 + 8) + 6416LL);
  v54 = v15;
  if ( a3 + a4 > a4 )
  {
    if ( !a7 || (v17 = a7 - 1, ((a7 - 1) & a7) != 0) )
    {
      v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v16 + 24) = 760LL;
      goto LABEL_46;
    }
    memset(v53, 0, 0x48uLL);
    v53[5] = v17;
    v53[6] = ~(unsigned __int64)v17;
    if ( ((a7 - 1) & (unsigned int)a4) != 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v17, v18, v19, v20);
      *(_QWORD *)(v16 + 24) = 770LL;
      goto LABEL_46;
    }
    v21 = a6;
    v22 = a5;
    v53[0] = a4;
    v53[1] = v14;
    v53[2] = a5;
    if ( !a6 )
      v21 = *(_QWORD *)v12;
    v23 = 0;
    v53[3] = v21;
    v53[4] = v11;
    if ( v9 && dword_1C00273AC && v14 != *(_QWORD *)v12 )
    {
      v24 = v11 + 4096;
      v25 = v14 + 4096;
      if ( v11 + 4096 < v11 || v25 < v14 )
      {
        v26 = WdLogNewEntry5_WdAssertion(a5, v25, v24, v20);
        *(_QWORD *)(v26 + 24) = 792LL;
        WdLogEvent5_WdAssertion(v26);
        v21 = v53[3];
        v22 = v53[2];
        v11 = v53[4];
      }
      else
      {
        v11 += 4096LL;
        v53[1] = v14 + 4096;
        v53[4] = v24;
        v23 = 1;
      }
    }
    if ( v22 >= v21 || v21 - v22 < v11 )
      return 3221225485LL;
    NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(v12, v53);
    v31 = NodeInFreeList;
    if ( !NodeInFreeList )
    {
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      WdLogEvent5_WdWarning(v32);
      return 3221225473LL;
    }
    v34 = *((_QWORD *)NodeInFreeList + 3);
    v35 = v53[7] + v53[4];
    if ( v34 == v53[7] )
    {
      if ( *((_QWORD *)NodeInFreeList + 4) - v34 == v53[4] )
      {
        *((_DWORD *)NodeInFreeList + 18) = *((_DWORD *)NodeInFreeList + 18) & 0xFFFFFFF0 | 2;
        RtlAvlRemoveNode((char *)v12 + 24, NodeInFreeList);
        v36 = a8;
        *((_DWORD *)v31 + 18) &= 0xFFFFFFF0;
        *a8 = v31;
LABEL_44:
        *((_DWORD *)*v36 + 18) ^= (*((_DWORD *)*v36 + 18) ^ (v23 << 12)) & 0x1000;
        return 0LL;
      }
      Vad = CVirtualAddressAllocator::AllocateVad(v53[7], v53[7] + v53[4], v15);
      if ( Vad )
      {
        v36 = a8;
        v40 = (struct VIDMM_VAD *)((char *)Vad + 40);
        *a8 = Vad;
        v41 = (struct VIDMM_VAD **)*((_QWORD *)v31 + 6);
        *((_QWORD *)Vad + 5) = (char *)v31 + 40;
        *((_QWORD *)Vad + 6) = v41;
        if ( *v41 != (struct VIDMM_VAD *)((char *)v31 + 40) )
          __fastfail(3u);
        *v41 = v40;
        *((_QWORD *)v31 + 6) = v40;
        *((_QWORD *)v31 + 3) = v35;
        RtlAvlRemoveNode((char *)v12 + 24, v31);
        *((_DWORD *)v31 + 18) &= 0xFFFFFFF0;
        CVirtualAddressAllocator::InsertVadToFreeList(v12, v31);
        goto LABEL_44;
      }
      _InterlockedIncrement(&dword_1C00275E8);
      v39 = WdLogNewEntry5_WdLowResource(v38);
      *(_QWORD *)(v39 + 24) = 853LL;
    }
    else
    {
      v43 = CVirtualAddressAllocator::AllocateVad(v53[7], v53[7] + v53[4], v15);
      if ( v43 )
      {
        v44 = *((_QWORD *)v31 + 4);
        v45 = 0LL;
        if ( v35 >= v44 || (v45 = CVirtualAddressAllocator::AllocateVad(v35, v44, v54)) != 0LL )
        {
          *((_QWORD *)v31 + 4) = v53[7];
          RtlAvlRemoveNode((char *)v12 + 24, v31);
          *((_DWORD *)v31 + 18) &= 0xFFFFFFF0;
          CVirtualAddressAllocator::InsertVadToFreeList(v12, v31);
          v36 = a8;
          v48 = (__int64 *)((char *)v43 + 40);
          v49 = (__int64 *)((char *)v31 + 40);
          *a8 = v43;
          v50 = *v49;
          *((_QWORD *)v43 + 5) = *v49;
          *((_QWORD *)v43 + 6) = v49;
          if ( *(__int64 **)(v50 + 8) != v49 )
            __fastfail(3u);
          *(_QWORD *)(v50 + 8) = v48;
          *v49 = (__int64)v48;
          if ( v45 )
          {
            CVirtualAddressAllocator::InsertVadToFreeList(v12, v45);
            v51 = *v48;
            v52 = (char *)v45 + 40;
            *((_QWORD *)v45 + 5) = *v48;
            *((_QWORD *)v45 + 6) = v48;
            if ( *(__int64 **)(v51 + 8) != v48 )
              __fastfail(3u);
            *(_QWORD *)(v51 + 8) = v52;
            *v48 = (__int64)v52;
          }
          goto LABEL_44;
        }
        _InterlockedIncrement(&dword_1C00275E8);
        v47 = WdLogNewEntry5_WdLowResource(v46);
        *(_QWORD *)(v47 + 24) = 899LL;
        WdLogEvent5_WdLowResource(v47);
        CVirtualAddressAllocator::FreeVad(v43);
        return 3221225495LL;
      }
      _InterlockedIncrement(&dword_1C00275E8);
      v39 = WdLogNewEntry5_WdLowResource(v42);
      *(_QWORD *)(v39 + 24) = 886LL;
    }
    WdLogEvent5_WdLowResource(v39);
    return 3221225495LL;
  }
  v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  *(_QWORD *)(v16 + 24) = 754LL;
LABEL_46:
  WdLogEvent5_WdAssertion(v16);
  return 3221225485LL;
}
