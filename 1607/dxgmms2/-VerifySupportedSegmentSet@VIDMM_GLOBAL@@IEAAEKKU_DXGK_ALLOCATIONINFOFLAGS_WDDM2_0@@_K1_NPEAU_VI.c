/*
 * XREFs of ?VerifySupportedSegmentSet@VIDMM_GLOBAL@@IEAAEKKU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0052A10
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C008B568 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0052CBC (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSet(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  _DWORD *v8; // r11
  unsigned int v9; // esi
  unsigned int v10; // r13d
  VIDMM_GLOBAL *v11; // rdi
  __int64 v12; // r12
  _DWORD *v13; // r15
  unsigned int v14; // r10d
  int v15; // ebx
  int v16; // edx
  char v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // r8d
  char v20; // bp
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rdx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v25; // rbx
  unsigned __int8 result; // al
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v46; // [rsp+78h] [rbp+20h]

  v46 = a4.0;
  v8 = (_DWORD *)*((_QWORD *)this + 5017);
  v9 = a3;
  v10 = a2;
  v11 = this;
  v12 = 114LL * (unsigned int)a2;
  v13 = &v8[v12];
  if ( (~v8[v12] & a3) != 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v27 + 24) = 11174LL;
    WdLogEvent5_WdAssertion(v27);
    return 0;
  }
  v14 = v13[1];
  v15 = 0;
  if ( (~*v8 & a3) != 0 )
  {
    v17 = 0;
  }
  else
  {
    if ( !a3 )
      goto LABEL_31;
    v16 = 1;
    do
    {
      if ( (a3 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v11 + 464) + 8LL * v14);
        if ( (*((_DWORD *)this + 14) & 0x1001) == 0 )
          v15 |= v16;
      }
      v16 = __ROL4__(v16, 1);
      ++v14;
      a3 >>= 1;
    }
    while ( a3 );
    if ( v15 )
      v17 = 0;
    else
LABEL_31:
      v17 = 1;
  }
  v18 = v9;
  v19 = v13[1];
  if ( (~*v13 & v9) != 0 || !v9 )
  {
LABEL_37:
    v20 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (v18 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v11 + 464) + 8LL * v19);
        if ( (*((_DWORD *)this + 14) & 0x1001) != 0 )
          break;
      }
      ++v19;
      v18 = (unsigned int)v18 >> 1;
      if ( !(_DWORD)v18 )
        goto LABEL_37;
    }
    v20 = 1;
  }
  if ( (a4.Value & 0x40000) != 0 && !v17 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, v18);
    *(_QWORD *)(v28 + 24) = 11188LL;
    WdLogEvent5_WdAssertion(v28);
    return 0;
  }
  if ( (a4.Value & 0x20000) != 0 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v11, v10, v9, 0x10000u, 0LL) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v31 + 24) = 11200LL;
      WdLogEvent5_WdAssertion(v31);
      return 0;
    }
    if ( v20 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v32 + 24) = 11206LL;
      WdLogEvent5_WdAssertion(v32);
      return 0;
    }
    v33 = v13[1];
    v34 = v9;
    if ( v9 )
    {
      do
      {
        if ( (v34 & 1) != 0 )
        {
          v35 = *(_QWORD *)(*((_QWORD *)v11 + 464) + 8LL * v33);
          if ( a5 > *(_QWORD *)(v35 + 384) )
          {
            v37 = WdLogNewEntry5_WdAssertion(v33, v34);
            *(_QWORD *)(v37 + 24) = 11219LL;
            WdLogEvent5_WdAssertion(v37);
            return 0;
          }
          if ( (*(_DWORD *)(v35 + 56) & 0x20) != 0 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v33, v34);
            *(_QWORD *)(v36 + 24) = 11224LL;
            WdLogEvent5_WdAssertion(v36);
            return 0;
          }
        }
        ++v33;
        v34 = (unsigned int)v34 >> 1;
      }
      while ( (_DWORD)v34 );
    }
    a4.0 = v46;
  }
  v21 = *((_QWORD *)v11 + 5017);
  v22 = v9;
  v23 = *(_DWORD *)(v12 * 4 + v21 + 4);
  v24 = (unsigned int)~*(_DWORD *)(v12 * 4 + v21);
  if ( ((unsigned int)v24 & v9) != 0 || !v9 )
  {
LABEL_23:
    v25 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      if ( (v22 & 1) != 0 )
      {
        v24 = *(_QWORD *)(*((_QWORD *)v11 + 464) + 8LL * v23);
        v21 = *(_DWORD *)(v24 + 56) & 0x20;
        if ( (_DWORD)v21 == 32 )
          break;
      }
      ++v23;
      v22 >>= 1;
      if ( !v22 )
        goto LABEL_23;
    }
    if ( !a6 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v21, v24);
      *(_QWORD *)(v38 + 24) = 11245LL;
      WdLogEvent5_WdAssertion(v38);
      return 0;
    }
    if ( a6 < a5 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v21, v24);
      *(_QWORD *)(v39 + 24) = 11251LL;
      WdLogEvent5_WdAssertion(v39);
      return 0;
    }
    v25 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  if ( (*(_BYTE *)&a4.0 & 4) != 0 && (a4.Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v11 + 6497) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v11, v10, v9, 0x10u, 0LL) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v21, v24);
        *(_QWORD *)(v40 + 24) = 11281LL;
        WdLogEvent5_WdAssertion(v40);
        return 0;
      }
      a4.0 = v46;
    }
    else
    {
      v21 = *(unsigned int *)(*((_QWORD *)v11 + 3) + 300LL);
      if ( (v21 & 8) == 0 && !v17 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v21, v24);
        *(_QWORD *)(v41 + 24) = 11288LL;
        WdLogEvent5_WdAssertion(v41);
        return 0;
      }
    }
  }
  if ( (a4.Value & 0x20000000) != 0 && (*(_BYTE *)&a4.0 & 1) != 0 && !v17 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v21, v24);
    *(_QWORD *)(v42 + 24) = 11299LL;
    WdLogEvent5_WdAssertion(v42);
    return 0;
  }
  else if ( (a4.Value & 0x100000) == 0 || v17 )
  {
    if ( (*(_WORD *)&a4.0 & 0x4000) == 0 || v17 )
    {
      if ( a7 && (*(_BYTE *)&a4.0 & 1) != 0 && !v17 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v21, v24);
        *(_QWORD *)(v45 + 24) = 11325LL;
        WdLogEvent5_WdAssertion(v45);
        return 0;
      }
      else
      {
        result = 1;
        *(_DWORD *)v25 = *(_DWORD *)v25 & 0xFFFFFFFC | v17 & 1 | (2 * (v20 & 1));
      }
    }
    else
    {
      v44 = WdLogNewEntry5_WdAssertion(v21, v24);
      *(_QWORD *)(v44 + 24) = 11313LL;
      WdLogEvent5_WdAssertion(v44);
      return 0;
    }
  }
  else
  {
    v43 = WdLogNewEntry5_WdAssertion(v21, v24);
    *(_QWORD *)(v43 + 24) = 11306LL;
    WdLogEvent5_WdAssertion(v43);
    return 0;
  }
  return result;
}
