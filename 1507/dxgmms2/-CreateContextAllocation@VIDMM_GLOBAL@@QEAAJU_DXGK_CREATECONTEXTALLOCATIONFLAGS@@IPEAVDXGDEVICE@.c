/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C000E180 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     VidSchInsertContextAllocation @ 0x1C0078710 (VidSchInsertContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        struct DXGALLOCATION *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        int a13,
        _QWORD *a14)
{
  int v14; // ebx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r14
  struct VIDMM_ALLOC *v17; // rsi
  struct VIDMM_DEVICE *v18; // r12
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rax
  int inserted; // edi
  unsigned __int64 v23; // r10
  bool v24; // zf
  int v25; // r8d
  char v26; // r9
  int OneAllocation; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  int v42; // [rsp+70h] [rbp-81h]
  struct _VIDMM_GLOBAL_ALLOC *v43; // [rsp+98h] [rbp-59h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-51h] BYREF
  _QWORD v45[16]; // [rsp+A8h] [rbp-49h] BYREF
  int v46; // [rsp+140h] [rbp+4Fh]
  unsigned int v47; // [rsp+148h] [rbp+57h]
  struct VIDMM_ALLOC *v48; // [rsp+150h] [rbp+5Fh] BYREF

  v47 = a3;
  v46 = a2;
  v14 = a4;
  v43 = 0LL;
  v48 = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  v17 = 0LL;
  if ( a4 )
    v18 = *(struct VIDMM_DEVICE **)(a4 + 536);
  else
    v18 = 0LL;
  if ( !a4 || *(_BYTE *)(*(_QWORD *)(a4 + 40) + 313LL) )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v40 + 24) = 1738LL;
    WdLogEvent5_WdAssertion(v40);
    inserted = -1073741811;
    goto LABEL_27;
  }
  v19 = a5;
  v20 = a2 & 1;
  if ( !(_DWORD)v20 && !a5 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, v20, a3, a4);
    *(_QWORD *)(v21 + 24) = 1745LL;
LABEL_9:
    WdLogEvent5_WdAssertion(v21);
    inserted = -1073741811;
LABEL_31:
    *a14 = 0LL;
    return (unsigned int)inserted;
  }
  if ( (_DWORD)v20 )
  {
    if ( a5 )
    {
      v21 = WdLogNewEntry5_WdAssertion(a1, v20, a3, a4);
      *(_QWORD *)(v21 + 24) = 1752LL;
      goto LABEL_9;
    }
    v23 = a4;
  }
  else
  {
    v23 = a5;
    v24 = !_BitScanForward((unsigned int *)&v25, *(_DWORD *)(a5 + 324));
    v26 = -1;
    if ( !v24 )
      v26 = v25;
    a3 = (unsigned int)v26;
    v47 = v26;
  }
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (__int64)a1,
                    (__int64)v18,
                    a3,
                    a7,
                    a7,
                    (unsigned int)a8,
                    a9,
                    a10,
                    a11,
                    a13,
                    0LL,
                    0LL,
                    a6,
                    -1610612736,
                    (_DWORD)v20 != 0,
                    v23,
                    (unsigned __int64 **)&v43);
  v16 = v43;
  inserted = OneAllocation;
  if ( OneAllocation < 0 )
  {
LABEL_29:
    if ( v16 )
      VIDMM_GLOBAL::DestroyOneAllocation(a1, v18, v16, 1);
    goto LABEL_31;
  }
  v28 = VIDMM_GLOBAL::OpenOneAllocation((DXGADAPTER **)a1, (struct VIDMM_PROCESS **)v18, v43, 0LL, 0, 0LL, &v48, &a12);
  v17 = v48;
  inserted = v28;
  if ( v28 < 0 )
    goto LABEL_27;
  inserted = VidSchInsertContextAllocation(v29, v14, v19, (_DWORD)v48, (__int64)&v44);
  if ( inserted < 0 )
    goto LABEL_27;
  v30 = v46;
  if ( (v46 & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)v17 + 8LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 3) + 184LL),
                                v47);
    LOBYTE(v42) = 0;
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            v17,
            0LL,
            1LL,
            *((_QWORD *)v16 + 2),
            0LL,
            0LL,
            0LL,
            *((_DWORD *)v16 + 8),
            17LL,
            0LL,
            v32,
            0LL,
            v42) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 1847LL;
      WdLogEvent5_WdAssertion(v37);
      goto LABEL_27;
    }
    v30 = v46;
  }
  memset(v45, 0, 0x50uLL);
  v38 = 152LL * (*((_DWORD *)v16 + 19) & 0x3F);
  v39 = *((_QWORD *)v17 + 1);
  v45[2] = v17;
  LODWORD(v45[0]) = 209;
  LODWORD(v45[4]) = v30;
  inserted = VIDMM_GLOBAL::QueueDeferredCommand(
               a1,
               (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v39 + 64) + v38),
               (struct _VIDMM_DEFERRED_COMMAND *)v45,
               1,
               0LL);
  if ( inserted < 0 )
  {
LABEL_27:
    if ( v17 )
      VIDMM_GLOBAL::CloseOneAllocation(a1, v17, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    goto LABEL_29;
  }
  *a14 = v44;
  return (unsigned int)inserted;
}
