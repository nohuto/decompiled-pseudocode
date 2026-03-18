/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00118B0 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     VidSchInsertContextAllocation @ 0x1C006737C (VidSchInsertContextAllocation.c)
 *     VidSchRemoveContextAllocation @ 0x1C0067548 (VidSchRemoveContextAllocation.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        __int64 a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        struct DXGALLOCATION *a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  int v14; // r15d
  void *v15; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v17; // r14
  struct _KEVENT *v18; // rsi
  struct VIDMM_DEVICE *v19; // r12
  int v20; // ebx
  __int64 v21; // rdx
  char v22; // r8
  int v23; // ecx
  bool v24; // zf
  int v25; // eax
  __int64 v26; // r9
  int inserted; // edi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // [rsp+70h] [rbp-81h]
  int v45; // [rsp+78h] [rbp-79h]
  struct VIDMM_ALLOC *v46; // [rsp+98h] [rbp-59h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v47; // [rsp+A0h] [rbp-51h] BYREF
  _QWORD v48[16]; // [rsp+A8h] [rbp-49h] BYREF
  int v49; // [rsp+140h] [rbp+4Fh]
  unsigned int v50; // [rsp+148h] [rbp+57h]
  void *v51; // [rsp+150h] [rbp+5Fh] BYREF

  v50 = a3;
  v49 = a2;
  v14 = (int)a4;
  v47 = 0LL;
  v15 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a4 )
    v19 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 70);
  else
    v19 = 0LL;
  if ( !a4 || *(_BYTE *)(*((_QWORD *)a4 + 5) + 289LL) )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v43 + 24) = 1776LL;
    WdLogEvent5_WdAssertion(v43);
    inserted = -1073741811;
LABEL_31:
    if ( v15 )
      VidSchRemoveContextAllocation(v15);
    goto LABEL_33;
  }
  v20 = (int)a5;
  v21 = a2 & 1;
  if ( !(_DWORD)v21 && !a5 )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, v21);
    *(_QWORD *)(v41 + 24) = 1783LL;
    goto LABEL_23;
  }
  if ( (_DWORD)v21 )
  {
    if ( !a5 )
    {
      v24 = (_DWORD)v21 == 0;
      goto LABEL_11;
    }
    v41 = WdLogNewEntry5_WdAssertion(this, v21);
    *(_QWORD *)(v41 + 24) = 1790LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v41);
    inserted = -1073741811;
LABEL_37:
    *a14 = 0LL;
    return (unsigned int)inserted;
  }
  v22 = -1;
  v24 = !_BitScanForward((unsigned int *)&v23, *((_DWORD *)a5 + 81));
  a4 = a5;
  if ( !v24 )
    v22 = v23;
  v24 = (_DWORD)v21 == 0;
  a3 = (unsigned int)v22;
  v50 = a3;
LABEL_11:
  v25 = VIDMM_GLOBAL::CreateOneAllocation(
          this,
          v19,
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
          0xA0000000,
          !v24,
          a4,
          &v47);
  v17 = v47;
  inserted = v25;
  if ( v25 < 0 )
  {
LABEL_35:
    if ( v17 )
    {
      LOBYTE(v26) = 1;
      VIDMM_GLOBAL::DestroyOneAllocation(this, v19, v17, v26);
    }
    goto LABEL_37;
  }
  v28 = VIDMM_GLOBAL::OpenOneAllocation((DXGADAPTER **)this, v19, v47, 0LL, 0, 0LL, &v46, (unsigned __int8 *)&a12);
  v18 = (struct _KEVENT *)v46;
  inserted = v28;
  if ( v28 < 0 )
  {
LABEL_33:
    if ( v18 )
      VIDMM_GLOBAL::CloseOneAllocation(this, v18, 0LL, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    goto LABEL_35;
  }
  inserted = VidSchInsertContextAllocation(
               *(_QWORD *)(*((_QWORD *)this + 2) + 384LL),
               v14,
               v20,
               (_DWORD)v46,
               (__int64)&v51);
  if ( inserted < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v30, v29);
LABEL_28:
    v15 = v51;
    *(_QWORD *)(v42 + 24) = v51;
    WdLogEvent5_WdAssertion(v42);
    goto LABEL_31;
  }
  v31 = v49;
  if ( (v49 & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)&v18->Header.Lock + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                v50);
    LOBYTE(v45) = 0;
    LOBYTE(v44) = 0;
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            v18,
            0LL,
            1LL,
            *((_QWORD *)v17 + 2),
            0LL,
            0LL,
            0LL,
            *((_DWORD *)v17 + 8),
            17LL,
            0LL,
            v33,
            0LL,
            v44,
            v45) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v42 + 32) = 1886LL;
      goto LABEL_28;
    }
    v31 = v49;
  }
  memset(v48, 0, 0x50uLL);
  v36 = 168LL * (*((_DWORD *)v17 + 19) & 0x3F);
  Flink = v18->Header.WaitListHead.Flink;
  v48[2] = v18;
  LODWORD(v48[0]) = 209;
  LODWORD(v48[4]) = v31;
  inserted = VIDMM_GLOBAL::QueueDeferredCommand(
               this,
               (struct VIDMM_PAGING_QUEUE *)((char *)Flink[4].Blink + v36),
               (struct _VIDMM_DEFERRED_COMMAND *)v48,
               1,
               0LL);
  if ( inserted < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v39, v38);
    *(_QWORD *)(v42 + 32) = 1899LL;
    goto LABEL_28;
  }
  *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v51;
  return (unsigned int)inserted;
}
