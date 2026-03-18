/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0013FA0 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     VidSchInsertContextAllocation @ 0x1C005F970 (VidSchInsertContextAllocation.c)
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
        unsigned int a13,
        _QWORD *a14)
{
  int v14; // ebx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r14
  struct _KEVENT *v17; // rsi
  struct VIDMM_DEVICE *v18; // r12
  int v19; // r15d
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  bool v22; // zf
  int v23; // r8d
  char v24; // r9
  int OneAllocation; // eax
  int inserted; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _VIDMM_GLOBAL_ALLOC *v41; // [rsp+98h] [rbp-59h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-51h] BYREF
  _QWORD v43[16]; // [rsp+A8h] [rbp-49h] BYREF
  int v44; // [rsp+140h] [rbp+4Fh]
  unsigned int v45; // [rsp+148h] [rbp+57h]
  struct VIDMM_ALLOC *v46; // [rsp+150h] [rbp+5Fh] BYREF

  v45 = a3;
  v44 = a2;
  v14 = a4;
  v41 = 0LL;
  v46 = 0LL;
  v16 = 0LL;
  v42 = 0LL;
  v17 = 0LL;
  if ( a4 )
    v18 = *(struct VIDMM_DEVICE **)(a4 + 536);
  else
    v18 = 0LL;
  if ( !a4 || *(_BYTE *)(*(_QWORD *)(a4 + 40) + 313LL) )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v40 + 24) = 1765LL;
    WdLogEvent5_WdAssertion(v40);
    inserted = -1073741811;
    goto LABEL_28;
  }
  v19 = a5;
  v20 = a2 & 1;
  if ( !(_DWORD)v20 && !a5 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, v20, a3, a4);
    *(_QWORD *)(v38 + 24) = 1772LL;
    goto LABEL_23;
  }
  if ( (_DWORD)v20 )
  {
    if ( !a5 )
    {
      v21 = a4;
      goto LABEL_11;
    }
    v38 = WdLogNewEntry5_WdAssertion(a1, v20, a3, a4);
    *(_QWORD *)(v38 + 24) = 1779LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v38);
    inserted = -1073741811;
LABEL_32:
    *a14 = 0LL;
    return (unsigned int)inserted;
  }
  v21 = a5;
  v22 = !_BitScanForward((unsigned int *)&v23, *(_DWORD *)(a5 + 324));
  v24 = -1;
  if ( !v22 )
    v24 = v23;
  a3 = (unsigned int)v24;
  v45 = v24;
LABEL_11:
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
                    v21,
                    (unsigned __int64 **)&v41);
  v16 = v41;
  inserted = OneAllocation;
  if ( OneAllocation < 0 )
  {
LABEL_30:
    if ( v16 )
      VIDMM_GLOBAL::DestroyOneAllocation(a1, v18, v16, 1);
    goto LABEL_32;
  }
  v27 = VIDMM_GLOBAL::OpenOneAllocation(a1, v18, v41, 0LL, 0, 0LL, &v46, &a12);
  v17 = (struct _KEVENT *)v46;
  inserted = v27;
  if ( v27 < 0 || (inserted = VidSchInsertContextAllocation(v28, v14, v19, (_DWORD)v46, (__int64)&v42), inserted < 0) )
  {
LABEL_28:
    if ( v17 )
      VIDMM_GLOBAL::CloseOneAllocation(a1, v17, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    goto LABEL_30;
  }
  v29 = v44;
  if ( (v44 & 2) == 0 )
    goto LABEL_17;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              *(VIDMM_PROCESS **)(*(_QWORD *)&v17->Header.Lock + 8LL),
                              *(_DWORD *)(*((_QWORD *)a1 + 3) + 184LL),
                              v45);
  if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
          (__int64)VirtualAddressAllocator,
          (__int64)v17,
          0LL,
          1LL,
          *((_QWORD *)v16 + 2),
          0LL,
          0LL,
          0LL,
          *((_DWORD *)v16 + 8),
          17LL,
          0LL,
          v31,
          0LL) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
    *(_QWORD *)(v39 + 24) = 1874LL;
    WdLogEvent5_WdAssertion(v39);
    goto LABEL_28;
  }
  v29 = v44;
LABEL_17:
  memset(v43, 0, 0x50uLL);
  v36 = *((_DWORD *)v16 + 19);
  v43[2] = v17;
  LODWORD(v43[0]) = 209;
  LODWORD(v43[4]) = v29;
  inserted = VIDMM_GLOBAL::QueueDeferredCommand(
               a1,
               (struct VIDMM_PAGING_QUEUE *)&v17->Header.WaitListHead.Flink[4].Flink[10 * (v36 & 0x3F)],
               (struct _VIDMM_DEFERRED_COMMAND *)v43,
               1,
               0LL);
  if ( inserted < 0 )
    goto LABEL_28;
  *a14 = v42;
  return (unsigned int)inserted;
}
