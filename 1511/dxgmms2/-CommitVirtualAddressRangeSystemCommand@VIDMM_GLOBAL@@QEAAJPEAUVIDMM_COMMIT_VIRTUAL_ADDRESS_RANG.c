/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0043F78
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0015134 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4)
{
  unsigned int v6; // edi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r9d
  unsigned int v17; // eax
  struct _VIDMM_GLOBAL_ALLOC ***v18; // rcx
  unsigned __int64 v19; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v20; // rdi
  __int64 v21; // rax
  bool v22; // bp
  struct _MDL *FullMDL; // rdx
  __int64 v24; // rcx
  int v25; // r9d
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 **v28; // rdx
  volatile signed __int32 *v29; // rcx
  struct _MDL *v31; // [rsp+28h] [rbp-60h]
  struct VIDMM_ALLOC **v32; // [rsp+38h] [rbp-50h]
  _BYTE v33[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v34; // [rsp+58h] [rbp-30h]
  int v35; // [rsp+60h] [rbp-28h]

  *a3 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)a2 == -40LL;
  v8 = *(_QWORD *)a2 + 40LL;
  v34 = v8;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v9);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(v8 + 16);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v10, &EventBlockThread, v11, v12);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v13 = *((_QWORD *)a2 + 3);
  v35 = 2;
  if ( v13 && (!**(_QWORD **)(v13 + 16) || !**((_QWORD **)a2 + 1)) )
  {
    v14 = WdLogNewEntry5_WdWarning(v10);
    WdLogEvent5_WdWarning(v14);
    goto LABEL_30;
  }
  v15 = *((_QWORD *)a2 + 1);
  if ( (int)(*(_DWORD *)(v15 + 64) << 28) >> 28 == 1 )
  {
    v18 = *(struct _VIDMM_GLOBAL_ALLOC ****)(v15 + 56);
    if ( (*((_DWORD *)v18 + 7) & 3) != 2 )
      goto LABEL_30;
    v19 = *(_QWORD *)(v15 + 72);
    v20 = **v18;
    v21 = *((_QWORD *)v20 + 16);
    v22 = (*(_DWORD *)(v21 + 56) & 0x1001) != 0;
    if ( (*(_DWORD *)(v21 + 56) & 0x1001) != 0 )
    {
      FullMDL = VidMmGetFullMDL(**v18, 0LL);
    }
    else
    {
      v19 += *((_QWORD *)v20 + 17);
      FullMDL = 0LL;
    }
    if ( v22 || (v24 = *((_QWORD *)v20 + 16), (*(_DWORD *)(v24 + 56) & 0x1000) != 0) )
      v25 = 0;
    else
      v25 = *(_DWORD *)(v24 + 16) + 1;
    v17 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            *(CVirtualAddressAllocator **)a2,
            *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1),
            *((_DWORD *)v20 + 19) & 0x3F,
            v25,
            v19,
            FullMDL,
            1,
            a3,
            0);
  }
  else
  {
    if ( (int)(*(_DWORD *)(v15 + 64) << 28) >> 28 == 2 )
    {
      v16 = 0;
      v32 = a3;
      v31 = (struct _MDL *)*((_QWORD *)a2 + 2);
    }
    else
    {
      if ( (int)(*(_DWORD *)(v15 + 64) << 28) >> 28 != 6 )
        goto LABEL_30;
      v16 = -2;
      v32 = a3;
      v31 = 0LL;
    }
    v17 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            *(CVirtualAddressAllocator **)a2,
            (struct VIDMM_MAPPED_VA_RANGE *)v15,
            0LL,
            v16,
            0LL,
            v31,
            1,
            v32,
            0);
  }
  v6 = v17;
LABEL_30:
  if ( *((_BYTE *)a2 + 32) && v6 == -1073741267 )
    goto LABEL_48;
  v26 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v26 )
  {
    v27 = *v26;
    if ( *v26 )
    {
      v28 = (__int64 **)v26[1];
      if ( *(__int64 **)(v27 + 8) != v26 || *v28 != v26 )
        __fastfail(3u);
      *v28 = (__int64 *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      *v26 = 0LL;
      v26[1] = 0LL;
    }
    v29 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd(v29 + 28, 0xFFFFFFFF) == 1 && v29 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)v29);
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  if ( v6 == -1073741267 )
  {
LABEL_48:
    if ( !*((_BYTE *)a2 + 32) )
      v6 = -1073741823;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v6;
}
