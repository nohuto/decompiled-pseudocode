/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0124150
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001B19C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0149A88 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 */

__int64 __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  int v2; // esi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rax
  D3DKMT_HANDLE AllocationHandle; // eax
  D3DKMT_HANDLE v7; // ecx
  __int64 v8; // r9
  int v9; // r8d
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  D3DKMT_HANDLE v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r14
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rax
  ULONG_PTR v39; // rcx
  ULONG v40; // ecx
  __int64 v41; // r9
  int v42; // r8d
  struct DXGRESOURCE *v43; // rdx
  struct _EX_RUNDOWN_REF *v44; // rbx
  ULONG_PTR v45; // rdx
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // edx
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r14
  __int64 v59; // rax
  ULONG_PTR v60; // rcx
  ULONG_PTR i; // r14
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r14
  __int64 v67; // rax
  ULONG_PTR v68; // rcx
  struct _EX_RUNDOWN_REF *v69; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v70[24]; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v71[24]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v72[56]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v73[112]; // [rsp+A0h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v74; // [rsp+128h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+130h] [rbp+77h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
  {
    AllocationHandle = a1->Evict.AllocationHandle;
    if ( AllocationHandle || a1->SetFault.Value )
    {
      if ( AllocationHandle )
      {
        v74 = 0LL;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71, Current);
        v7 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
        if ( v7 < *((_DWORD *)Current + 58)
          && (v8 = *((_QWORD *)Current + 27),
              v9 = *(_DWORD *)(v8 + 16LL * v7 + 8),
              ((a1->Evict.AllocationHandle >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x30))
          && (v9 & 0x1000) == 0
          && (v9 & 0xF) != 0
          && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 5 )
        {
          v10 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * v7);
        }
        else
        {
          v10 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v10);
        DXGALLOCATIONREFERENCE::MoveAssign(&v74, &v76);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76, v11, v12, v13);
        v14 = v74;
        if ( v74 )
        {
          Count = v74[1].Count;
          if ( Count )
          {
            _m_prefetchw((const void *)(Count + 64));
            v16 = *(_QWORD *)(Count + 64);
            while ( v16 )
            {
              v17 = v16;
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v16 + 1, v16);
              if ( v17 == v16 )
              {
                v21 = a1->Evict.AllocationHandle;
                v22 = (v21 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v22 < *((_DWORD *)Current + 58) )
                {
                  v23 = *((_QWORD *)Current + 27);
                  v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
                  if ( ((v21 >> 26) & 0x30) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x30)
                    && (v24 & 0x1000) == 0
                    && (v24 & 0xF) != 0 )
                  {
                    *(_DWORD *)(v23 + 16 * (((unsigned __int64)v21 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
                  }
                }
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v71);
                v27 = *(_QWORD *)(v14[1].Count + 16);
                if ( v27 )
                {
                  COREADAPTERACCESS::COREADAPTERACCESS(
                    (COREADAPTERACCESS *)v72,
                    *(struct DXGADAPTER *const *)(v27 + 16),
                    0LL);
                  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72);
                  if ( v2 < 0 )
                  {
                    v28 = a1->Evict.AllocationHandle;
                    v29 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v29 < *((_DWORD *)Current + 58) )
                    {
                      v30 = *((_QWORD *)Current + 27);
                      v31 = *(unsigned int *)(v30 + 16 * v29 + 8);
                      if ( (((unsigned int)v28 >> 26) & 0x30) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x30)
                        && (v31 & 0xF) != 0 )
                      {
                        v32 = 2LL * (((unsigned int)v28 >> 6) & 0xFFFFFF);
                        if ( (*(_DWORD *)(v30 + 16LL * (((unsigned int)v28 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
                        {
                          v33 = WdLogNewEntry5_WdAssertion(((unsigned int)v28 >> 26) & 0x30, v28, v31, v30);
                          *(_QWORD *)(v33 + 24) = 194LL;
                          WdLogEvent5_WdAssertion(v33);
                        }
                        *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v32 + 8) &= ~0x1000u;
                      }
                    }
                    v34 = v14[1].Count;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v34 + 16), (struct DXGDEVICE *)v34);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
                    goto LABEL_20;
                  }
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v27 + 400),
                    *(struct VIDMM_GLOBAL **)(v27 + 408),
                    (struct _VIDMM_MULTI_ALLOC *)v74[3].Count,
                    0LL,
                    0LL);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
                }
                v35 = a1->Evict.AllocationHandle;
                v36 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
                if ( (unsigned int)v36 < *((_DWORD *)Current + 58) )
                {
                  v26 = *((_QWORD *)Current + 27);
                  v25 = *(unsigned int *)(v26 + 16 * v36 + 8);
                  if ( (((unsigned int)v35 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16 * v36 + 8) & 0x30) && (v25 & 0xF) != 0 )
                  {
                    v37 = 2LL * (((unsigned int)v35 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v26 + 16LL * (((unsigned int)v35 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
                    {
                      v38 = WdLogNewEntry5_WdAssertion(((unsigned int)v35 >> 26) & 0x30, v35, v25, v26);
                      *(_QWORD *)(v38 + 24) = 194LL;
                      WdLogEvent5_WdAssertion(v38);
                    }
                    *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v37 + 8) &= ~0x1000u;
                  }
                }
                v39 = v14[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v39 + 16), (struct DXGDEVICE *)v39);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74, v35, v25, v26);
                goto LABEL_47;
              }
            }
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v71);
        v2 = -1073741811;
LABEL_20:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74, v18, v19, v20);
      }
      else
      {
LABEL_47:
        if ( a1->SetFault.Value )
        {
          v75 = 0LL;
          DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v70, Current);
          v40 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
          if ( v40 < *((_DWORD *)Current + 58)
            && (v41 = *((_QWORD *)Current + 27),
                v42 = *(_DWORD *)(v41 + 16LL * v40 + 8),
                ((a1->SetFault.Value >> 26) & 0x30) == (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0x30))
            && (v42 & 0x1000) == 0
            && (v42 & 0xF) != 0
            && (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0xF) == 4 )
          {
            v43 = *(struct DXGRESOURCE **)(v41 + 16LL * v40);
          }
          else
          {
            v43 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v43);
          DXGRESOURCEREFERENCE::MoveAssign(&v75, &v69);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
          v44 = v75;
          if ( v75 )
          {
            v45 = v75[1].Count;
            if ( v45 )
            {
              _m_prefetchw((const void *)(v45 + 64));
              v46 = *(_QWORD *)(v45 + 64);
              while ( v46 )
              {
                v47 = v46;
                v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 64), v46 + 1, v46);
                if ( v47 == v46 )
                {
                  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
                  v50 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v50 < *((_DWORD *)Current + 58) )
                  {
                    v51 = *((_QWORD *)Current + 27);
                    v52 = *(_DWORD *)(v51 + 16 * v50 + 8);
                    if ( ((*(unsigned int *)&Value >> 26) & 0x30) == (*(_BYTE *)(v51 + 16 * v50 + 8) & 0x30)
                      && (v52 & 0x1000) == 0
                      && (v52 & 0xF) != 0 )
                    {
                      *(_DWORD *)(v51 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
                    }
                  }
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
                  v53 = *(_QWORD *)(v44[1].Count + 16);
                  if ( v53 )
                  {
                    COREADAPTERACCESS::COREADAPTERACCESS(
                      (COREADAPTERACCESS *)v73,
                      *(struct DXGADAPTER *const *)(v53 + 16),
                      0LL);
                    v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
                    if ( v2 < 0 )
                    {
                      v54 = a1->SetFault.Value;
                      v55 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
                      if ( (unsigned int)v55 < *((_DWORD *)Current + 58) )
                      {
                        v56 = *((_QWORD *)Current + 27);
                        v57 = *(unsigned int *)(v56 + 16 * v55 + 8);
                        if ( (((unsigned int)v54 >> 26) & 0x30) == (*(_BYTE *)(v56 + 16 * v55 + 8) & 0x30)
                          && (v57 & 0xF) != 0 )
                        {
                          v58 = 2LL * (((unsigned int)v54 >> 6) & 0xFFFFFF);
                          if ( (*(_DWORD *)(v56 + 16LL * (((unsigned int)v54 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
                          {
                            v59 = WdLogNewEntry5_WdAssertion(((unsigned int)v54 >> 26) & 0x30, v54, v57, v56);
                            *(_QWORD *)(v59 + 24) = 194LL;
                            WdLogEvent5_WdAssertion(v59);
                          }
                          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v58 + 8) &= ~0x1000u;
                        }
                      }
                      v60 = v44[1].Count;
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v60 + 16), (struct DXGDEVICE *)v60);
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
                      goto LABEL_61;
                    }
                    for ( i = v75[3].Count; i; i = *(_QWORD *)(i + 64) )
                      VIDMM_EXPORT::VidMmEvictAllocation(
                        *(VIDMM_EXPORT **)(v53 + 400),
                        *(struct VIDMM_GLOBAL **)(v53 + 408),
                        *(struct _VIDMM_MULTI_ALLOC **)(i + 24),
                        0LL,
                        0LL);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
                  }
                  v62 = a1->SetFault.Value;
                  v63 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v63 < *((_DWORD *)Current + 58) )
                  {
                    v64 = *((_QWORD *)Current + 27);
                    v65 = *(unsigned int *)(v64 + 16 * v63 + 8);
                    if ( (((unsigned int)v62 >> 26) & 0x30) == (*(_BYTE *)(v64 + 16 * v63 + 8) & 0x30)
                      && (v65 & 0xF) != 0 )
                    {
                      v66 = 2LL * (((unsigned int)v62 >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v64 + 16LL * (((unsigned int)v62 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
                      {
                        v67 = WdLogNewEntry5_WdAssertion(((unsigned int)v62 >> 26) & 0x30, v62, v65, v64);
                        *(_QWORD *)(v67 + 24) = 194LL;
                        WdLogEvent5_WdAssertion(v67);
                      }
                      *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v66 + 8) &= ~0x1000u;
                    }
                  }
                  v68 = v44[1].Count;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v68 + 16), (struct DXGDEVICE *)v68);
                  goto LABEL_61;
                }
              }
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
          v2 = -1073741811;
LABEL_61:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v75);
        }
      }
    }
    else
    {
      return (unsigned int)DXGPROCESS::EvictAllResources(Current, 0LL);
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3);
    v2 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v2;
}
