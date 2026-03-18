/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0047BD4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0048F7C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00454A0 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00478D8 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0047914 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00479B4 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005AF90 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        unsigned __int64 this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  struct VIDMM_VAD *v10; // r15
  unsigned __int8 v11; // r8
  CVirtualAddressAllocator *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v22; // rcx
  struct VIDMM_VAD *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // r12
  struct VIDMM_VAD **v28; // rdi
  __int64 v29; // r8
  unsigned int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // r15
  int v35; // ecx
  _QWORD *v36; // rdi
  _QWORD *v37; // rbx
  struct VIDMM_VAD **v38; // rcx
  struct VIDMM_VAD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  struct VIDMM_VAD *Vad; // r13
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  char *v47; // rbx
  char **v48; // rsi
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-70h]
  unsigned __int64 v54; // [rsp+50h] [rbp-68h]
  unsigned __int64 v55; // [rsp+58h] [rbp-60h]
  unsigned __int64 v56; // [rsp+60h] [rbp-58h]
  __int64 v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+70h] [rbp-48h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]
  __int64 v60; // [rsp+80h] [rbp-38h]
  unsigned __int8 v61; // [rsp+100h] [rbp+48h]

  v10 = 0LL;
  v11 = a9;
  v12 = (CVirtualAddressAllocator *)this;
  if ( a9 && (*(_DWORD *)(*(_QWORD *)(this + 72) + 48LL) & 2) != 0 && !*(_BYTE *)(*(_QWORD *)(this + 64) + 40097LL) )
    v11 = 0;
  v13 = a3 + a4;
  v14 = *(unsigned int *)(*(_QWORD *)(this + 64) + 6416LL);
  if ( a3 + a4 <= a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, v13);
    *(_QWORD *)(v15 + 24) = 1261LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  if ( !a7 || (this = a7 - 1, ((unsigned int)this & a7) != 0) )
  {
    v51 = WdLogNewEntry5_WdAssertion(this, v13);
    *(_QWORD *)(v51 + 24) = 1267LL;
    WdLogEvent5_WdAssertion(v51);
    return 3221225485LL;
  }
  v57 = a7 - 1;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v58 = ~(unsigned __int64)(unsigned int)this;
  if ( (this & a4) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, v13);
    *(_QWORD *)(v17 + 24) = 1277LL;
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  v18 = a6;
  v54 = a5;
  v52 = a4;
  v53 = a3 + a4;
  if ( !a6 )
    v18 = *(_QWORD *)v12;
  v55 = v18;
  v56 = a3;
  v61 = 0;
  if ( v11 && dword_1C00353E0 && v13 != *(_QWORD *)v12 )
  {
    v19 = a3 + 4096;
    if ( a3 + 4096 < a3 || v13 + 4096 < v13 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v13);
      *(_QWORD *)(v20 + 24) = 1299LL;
      WdLogEvent5_WdAssertion(v20);
    }
    else
    {
      a3 += 4096LL;
      v56 = v19;
      v53 = v13 + 4096;
      v61 = 1;
    }
  }
  if ( a5 >= v18 || v18 - a5 < a3 )
    return 3221225485LL;
  NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(v12, &v52);
  v23 = NodeInFreeList;
  if ( !NodeInFreeList )
  {
    v24 = WdLogNewEntry5_WdWarning(v22);
    WdLogEvent5_WdWarning(v24);
    return 3221225473LL;
  }
  v25 = v59;
  v26 = *((_QWORD *)NodeInFreeList + 3);
  v27 = v59 + v56;
  if ( v26 == v59 )
  {
    if ( *((_QWORD *)NodeInFreeList + 4) - v26 == v56 )
    {
      CVirtualAddressAllocator::RemoveVadFromFreeList(v12, NodeInFreeList);
      v28 = a8;
      *a8 = v23;
LABEL_57:
      *((_DWORD *)*v28 + 18) ^= (*((_DWORD *)*v28 + 18) ^ (v61 << 12)) & 0x1000;
      return 0LL;
    }
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
      v30 = 32 * (v14 + 3);
    else
      v30 = 16 * (v14 + 7);
    v31 = operator new(v30, 0x39346956u, v29, PagedPool);
    v34 = v31;
    if ( v31 )
    {
      v31[3] = v25;
      v35 = (*((_DWORD *)v31 + 18) ^ (16 * v14)) & 0x7F0;
      v31[4] = v27;
      *((_DWORD *)v31 + 18) ^= v35;
      if ( (_DWORD)v14 )
      {
        v36 = v31 + 12;
        v37 = v31 + 12;
        do
        {
          if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
          {
            v37[1] = v37;
            *v37 = v37;
            v37[3] = v37 + 2;
            v37[2] = v37 + 2;
          }
          else
          {
            v36[1] = v36;
            *v36 = v36;
          }
          v36 += 2;
          v37 += 4;
          --v14;
        }
        while ( v14 );
      }
      v28 = a8;
      v34[11] = v34 + 10;
      v34[10] = v34 + 10;
      v38 = (struct VIDMM_VAD **)*((_QWORD *)v23 + 6);
      *a8 = (struct VIDMM_VAD *)v34;
      v39 = (struct VIDMM_VAD *)(v34 + 5);
      if ( *v38 != (struct VIDMM_VAD *)((char *)v23 + 40) )
        __fastfail(3u);
      *(_QWORD *)v39 = (char *)v23 + 40;
      *((_QWORD *)v39 + 1) = v38;
      *v38 = v39;
      *((_QWORD *)v23 + 6) = v39;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        Template_pqxx(
          (__int64)v38,
          &DestroyGpuVirtualAddressRange,
          v33,
          v12,
          *((_DWORD *)v23 + 18),
          *((_QWORD *)v23 + 3),
          *((_QWORD *)v23 + 4));
      RtlAvlRemoveNode((char *)v12 + 24, v23);
      *((_DWORD *)v23 + 18) &= 0xFFFFFFF0;
      *((_QWORD *)v23 + 3) = v27;
      CVirtualAddressAllocator::InsertVadToFreeList(v12, v23);
      goto LABEL_57;
    }
    _InterlockedIncrement(&dword_1C0035678);
    v40 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v40 + 24) = 1359LL;
  }
  else
  {
    Vad = CVirtualAddressAllocator::AllocateVad(v59, v59 + v56, v14);
    if ( Vad )
    {
      v43 = *((_QWORD *)v23 + 4);
      if ( v27 >= v43 || (v10 = CVirtualAddressAllocator::AllocateVad(v27, v43, v14)) != 0LL )
      {
        CVirtualAddressAllocator::RemoveVadFromFreeList(v12, v23);
        *((_QWORD *)v23 + 4) = v25;
        CVirtualAddressAllocator::InsertVadToFreeList(v12, v23);
        v46 = *((_QWORD *)v23 + 5);
        v47 = (char *)Vad + 40;
        v28 = a8;
        v48 = (char **)((char *)v23 + 40);
        *a8 = Vad;
        if ( *(char ***)(v46 + 8) != v48 )
          __fastfail(3u);
        *(_QWORD *)v47 = v46;
        *((_QWORD *)Vad + 6) = v48;
        *(_QWORD *)(v46 + 8) = v47;
        *v48 = v47;
        if ( v10 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(v12, v10);
          v49 = *(_QWORD *)v47;
          v50 = (_QWORD *)((char *)v10 + 40);
          if ( *(char **)(*(_QWORD *)v47 + 8LL) != v47 )
            __fastfail(3u);
          *v50 = v49;
          *((_QWORD *)v10 + 6) = v47;
          *(_QWORD *)(v49 + 8) = v50;
          *(_QWORD *)v47 = v50;
        }
        goto LABEL_57;
      }
      _InterlockedIncrement(&dword_1C0035678);
      v45 = WdLogNewEntry5_WdLowResource(v44);
      *(_QWORD *)(v45 + 24) = 1405LL;
      WdLogEvent5_WdLowResource(v45);
      CVirtualAddressAllocator::FreeVad(Vad);
      return 3221225495LL;
    }
    _InterlockedIncrement(&dword_1C0035678);
    v40 = WdLogNewEntry5_WdLowResource(v41);
    *(_QWORD *)(v40 + 24) = 1392LL;
  }
  WdLogEvent5_WdLowResource(v40);
  return 3221225495LL;
}
