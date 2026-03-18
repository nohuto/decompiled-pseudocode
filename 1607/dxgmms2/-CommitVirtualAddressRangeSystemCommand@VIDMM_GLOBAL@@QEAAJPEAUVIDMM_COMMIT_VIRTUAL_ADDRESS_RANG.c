/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004CFC8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C0088564 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1C0094FCC (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  int v5; // edi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  struct _VIDMM_GLOBAL_ALLOC ***v16; // rcx
  unsigned __int64 v17; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v18; // rdi
  __int64 v19; // rax
  bool v20; // bp
  struct _MDL *FullMDL; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // r8d
  VIDMM_GLOBAL *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 **v30; // rdx
  unsigned int v31; // edx
  char v33[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-30h]
  int v35; // [rsp+50h] [rbp-28h]

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 == -40LL;
  v7 = *(_QWORD *)a2 + 40LL;
  v34 = v7;
  if ( !v6 && *(struct _KTHREAD **)(v7 + 8) == KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v8);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *(_DWORD *)(v7 + 16);
      if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventBlockThread, v10, v11);
    }
    ExAcquirePushLockExclusiveEx(v7, 0LL);
  }
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v12 = *((_QWORD *)a2 + 3);
  v35 = 2;
  if ( v12 && (!**(_QWORD **)(v12 + 16) || !**((_QWORD **)a2 + 1)) )
  {
    v13 = WdLogNewEntry5_WdWarning(v9);
    WdLogEvent5_WdWarning(v13);
    goto LABEL_36;
  }
  v14 = *((_QWORD *)a2 + 1);
  switch ( (int)(*(_DWORD *)(v14 + 64) << 28) >> 28 )
  {
    case 1:
      v16 = *(struct _VIDMM_GLOBAL_ALLOC ****)(v14 + 56);
      if ( (*((_DWORD *)v16 + 7) & 3) == 2 )
      {
        v17 = *(_QWORD *)(v14 + 72);
        v18 = **v16;
        v19 = *((_QWORD *)v18 + 17);
        v20 = (*(_DWORD *)(v19 + 56) & 0x1001) != 0;
        if ( (*(_DWORD *)(v19 + 56) & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL(**v16, 0LL);
        }
        else
        {
          v17 += *((_QWORD *)v18 + 18);
          FullMDL = 0LL;
        }
        if ( v20 || (v22 = *((_QWORD *)v18 + 17), (*(_DWORD *)(v22 + 56) & 0x1000) != 0) )
          v23 = 0;
        else
          v23 = *(_DWORD *)(v22 + 16) + 1;
        v24 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1),
                *((_DWORD *)v18 + 19) & 0x3F,
                v23,
                v17,
                FullMDL,
                1u,
                a3);
      }
      else
      {
        v24 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v14,
                a3,
                1);
      }
      v5 = v24;
      if ( v24 >= 0 )
        EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
      break;
    case 2:
      v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(CVirtualAddressAllocator **)a2,
              (struct VIDMM_MAPPED_VA_RANGE *)v14,
              0,
              0,
              0LL,
              *((struct _MDL **)a2 + 2),
              1u,
              a3);
      goto LABEL_19;
    case 6:
      v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(CVirtualAddressAllocator **)a2,
              (struct VIDMM_MAPPED_VA_RANGE *)v14,
              0,
              -2,
              0LL,
              0LL,
              1u,
              a3);
LABEL_19:
      v5 = v15;
      break;
  }
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) && v5 >= 0 )
  {
    v25 = *((_QWORD *)a2 + 1);
    v26 = *(_DWORD *)(v25 + 64);
    if ( (v26 & 0x2000) != 0 )
      v5 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             *(CVirtualAddressAllocator **)a2,
             *(struct VIDMM_VAD **)v25,
             (v26 >> 4) & 0x3F,
             0LL,
             *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1));
  }
LABEL_36:
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    if ( v5 == -1073741267 )
    {
      if ( *((_BYTE *)a2 + 32) )
        goto LABEL_55;
      v5 = -1073741823;
    }
    if ( v5 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
      CVirtualAddressAllocator::ResetAddressSpaceForFailure(*(CVirtualAddressAllocator **)a2, v31);
    }
    VIDMM_GLOBAL::CleanupVadReference(v27, a2);
  }
  else
  {
    if ( *((_BYTE *)a2 + 32) && v5 == -1073741267 )
      goto LABEL_58;
    v28 = (__int64 *)*((_QWORD *)a2 + 3);
    if ( v28 )
    {
      v29 = *v28;
      if ( *v28 )
      {
        v30 = (__int64 **)v28[1];
        if ( *(__int64 **)(v29 + 8) != v28 || *v30 != v28 )
          __fastfail(3u);
        *v30 = (__int64 *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        *v28 = 0LL;
        v28[1] = 0LL;
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
      operator delete(*((void **)a2 + 3));
      *((_QWORD *)a2 + 3) = 0LL;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    if ( v5 == -1073741267 )
    {
LABEL_58:
      if ( !*((_BYTE *)a2 + 32) )
        v5 = -1073741823;
    }
  }
LABEL_55:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return (unsigned int)v5;
}
