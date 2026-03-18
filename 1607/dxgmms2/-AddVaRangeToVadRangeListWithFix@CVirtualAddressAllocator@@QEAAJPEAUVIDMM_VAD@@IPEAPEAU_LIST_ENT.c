/*
 * XREFs of ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_ppxxxxxqxx @ 0x1C001FA40 (Template_ppxxxxxqxx.c)
 *     ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0092F8C (-AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ValidateUniqueGpuVaMapping @ 0x1C0095050 (ValidateUniqueGpuVaMapping.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00951D0 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  struct _KTHREAD **v6; // rbp
  struct VIDMM_VAD *v7; // rbx
  __int64 v8; // r14
  __int64 VidMmGlobalAllocFromOwner; // rdi
  __int64 v10; // rbx
  PSLIST_ENTRY v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  struct _LIST_ENTRY *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // ebx
  char *v18; // rax
  __int64 v19; // rdx
  char **v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  struct _LIST_ENTRY *v24; // rdi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v27; // rbx
  struct _LIST_ENTRY *v28; // r9
  struct _SLIST_ENTRY *v29; // rcx
  struct _LIST_ENTRY *v30; // rax
  int v31; // edi
  struct _LIST_ENTRY *v32; // rsi
  struct _LIST_ENTRY *v33; // rbp
  struct _LIST_ENTRY *v34; // rbx
  unsigned __int64 v35; // r10
  struct _LIST_ENTRY *v36; // rax
  struct _LIST_ENTRY *v37; // r9
  __int64 v38; // r11
  __int64 v39; // r8
  struct _LIST_ENTRY *v40; // rdx
  struct _LIST_ENTRY *v41; // rax
  int v42; // r9d
  struct _SLIST_ENTRY *v43; // r8
  struct _SLIST_ENTRY *v44; // r10
  struct _LIST_ENTRY *v45; // r11
  struct _LIST_ENTRY *v46; // rdx
  int v47; // r10d
  struct _LIST_ENTRY *v48; // rax
  __int64 v49; // r8
  struct _SLIST_ENTRY *v50; // r11
  struct _LIST_ENTRY *v51; // rbx
  struct _SLIST_ENTRY *v52; // r9
  __int64 v53; // rdi
  struct _LIST_ENTRY *v54; // r9
  int v55; // ebx
  struct _LIST_ENTRY *v56; // rax
  struct _LIST_ENTRY *v57; // rdx
  struct _LIST_ENTRY *v58; // r10
  struct _LIST_ENTRY *v59; // r11
  __int64 VidMmAllocFromOwner; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  bool v63; // zf
  __int64 v64; // rax
  char v66; // [rsp+70h] [rbp-78h]
  struct _LIST_ENTRY *v67; // [rsp+78h] [rbp-70h]
  struct VIDMM_MAPPED_VA_RANGE *v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+88h] [rbp-60h]
  unsigned __int64 v70; // [rsp+98h] [rbp-50h]
  struct _LIST_ENTRY *v71; // [rsp+98h] [rbp-50h]
  char v74; // [rsp+100h] [rbp+18h]
  char v76; // [rsp+110h] [rbp+28h]

  v74 = a3;
  v6 = this;
  v7 = a2;
  v8 = a3;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
  v69 = VidMmGlobalAllocFromOwner;
  v66 = 0;
  if ( v6[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 5));
    v66 = 1;
  }
  v76 = 0;
  if ( !EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_PteDeadLock_61045357_FeatureDescriptorDetails) )
  {
    if ( !VidMmGlobalAllocFromOwner )
      goto LABEL_10;
    v10 = VidMmGlobalAllocFromOwner + 352;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
    goto LABEL_9;
  }
  if ( VidMmGlobalAllocFromOwner && *(struct _KTHREAD **)(VidMmGlobalAllocFromOwner + 360) != KeGetCurrentThread() )
  {
    v10 = VidMmGlobalAllocFromOwner + 352;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
    v76 = 1;
LABEL_9:
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v7 = a2;
  }
LABEL_10:
  ++g_VaRangeLookasideList.L.TotalAllocates;
  v11 = ExpInterlockedPopEntrySList(&g_VaRangeLookasideList.L.ListHead);
  if ( !v11 )
  {
    ++g_VaRangeLookasideList.L.AllocateMisses;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _LOOKASIDE_LIST_EX *))g_VaRangeLookasideList.L.AllocateEx)(
                          (unsigned int)g_VaRangeLookasideList.L.Type,
                          g_VaRangeLookasideList.L.Size,
                          g_VaRangeLookasideList.L.Tag,
                          &g_VaRangeLookasideList);
  }
  ++g_VaRangeLookasideList.L.TotalAllocates;
  v68 = (struct VIDMM_MAPPED_VA_RANGE *)ExpInterlockedPopEntrySList(&g_VaRangeLookasideList.L.ListHead);
  v13 = (__int64)v68;
  if ( !v68 )
  {
    ++g_VaRangeLookasideList.L.AllocateMisses;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _LOOKASIDE_LIST_EX *))g_VaRangeLookasideList.L.AllocateEx)(
            (unsigned int)g_VaRangeLookasideList.L.Type,
            g_VaRangeLookasideList.L.Size,
            g_VaRangeLookasideList.L.Tag,
            &g_VaRangeLookasideList);
    v68 = (struct VIDMM_MAPPED_VA_RANGE *)v13;
  }
  if ( v11 && v13 )
  {
    if ( (unsigned __int8)ValidateUniqueGpuVaMapping(a5) )
    {
      if ( (*((_DWORD *)a5 + 16) & 0x2000) != 0 )
      {
        v18 = (char *)a5 + 24;
        if ( *((_QWORD *)a5 + 3) )
        {
          v19 = *(_QWORD *)v18;
          v20 = (char **)*((_QWORD *)a5 + 4);
          if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 || *v20 != v18 )
            __fastfail(3u);
          *v20 = (char *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          *(_QWORD *)v18 = 0LL;
          *((_QWORD *)a5 + 4) = 0LL;
        }
        v21 = (_QWORD *)((char *)a5 + 8);
        v22 = *((_QWORD *)a5 + 1);
        v23 = (_QWORD *)*((_QWORD *)a5 + 2);
        if ( *(struct VIDMM_MAPPED_VA_RANGE **)(v22 + 8) != (struct VIDMM_MAPPED_VA_RANGE *)((char *)a5 + 8)
          || (_QWORD *)*v23 != v21 )
        {
          __fastfail(3u);
        }
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *((_DWORD *)a5 + 16) &= ~0x2000u;
        *v21 = 0LL;
        *((_QWORD *)a5 + 2) = 0LL;
      }
      v24 = (struct _LIST_ENTRY *)((char *)v7 + 32 * v8 + 96);
      v67 = v24;
      if ( a4 )
        Flink = *a4;
      else
        Flink = v24->Flink;
      if ( Flink != v24 )
      {
        while ( 1 )
        {
          p_Blink = &Flink[-1].Blink;
          Flink = Flink->Flink;
          if ( *((_QWORD *)a5 + 13) <= (unsigned __int64)p_Blink[12] )
            break;
          if ( *((_QWORD *)a5 + 12) < (unsigned __int64)p_Blink[13] )
          {
            _InterlockedIncrement((volatile signed __int32 *)p_Blink + 32);
            v27 = p_Blink[1];
            v67 = v27;
            CVirtualAddressAllocator::RemoveVaRangeFromVad(
              (CVirtualAddressAllocator *)v6,
              (struct _LIST_ENTRY *)(p_Blink + 1),
              0,
              0,
              1u);
            v29 = (struct _SLIST_ENTRY *)p_Blink[12];
            v70 = *((_QWORD *)a5 + 12);
            v30 = p_Blink[13];
            if ( v70 > (unsigned __int64)v29 )
            {
              if ( *((_QWORD *)a5 + 13) < (unsigned __int64)v30 )
              {
                v71 = p_Blink[13];
                if ( v11 )
                {
                  v46 = p_Blink[9];
                  v47 = *((_DWORD *)p_Blink + 16);
                  v48 = p_Blink[11];
                  v49 = *((_QWORD *)a5 + 12);
                  v50 = (struct _SLIST_ENTRY *)p_Blink[14];
                  v51 = p_Blink[15];
                  v52 = (struct _SLIST_ENTRY *)p_Blink[10];
                  *((_QWORD *)&v11[3].Next + 1) = p_Blink[7];
                  *((_QWORD *)&v11[5].Next + 1) = v48;
                  LODWORD(v11[4].Next) = v47;
                  v11[6].Next = v29;
                  LODWORD(v48) = (__int64)v11[4].Next & 0xFFFFFC00;
                  *((_QWORD *)&v11[4].Next + 1) = v46;
                  *((_QWORD *)&v11[6].Next + 1) = v49;
                  v11->Next = (struct _SLIST_ENTRY *)a2;
                  v11[5].Next = v52;
                  v11[7].Next = v50;
                  LODWORD(v11[4].Next) = (unsigned int)v48 | (v47 << 28 >> 28) & 0xF | (16 * (v74 & 0x3F));
                  *((_QWORD *)&v11[7].Next + 1) = v51;
                  LODWORD(v11[8].Next) = 1;
                  memset(&v11->Next + 1, 0, 0x30uLL);
                  v27 = v67;
                }
                CVirtualAddressAllocator::AddVaRangeToVadWithFix(
                  (CVirtualAddressAllocator *)v6,
                  a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v11,
                  v28,
                  v27);
                v53 = *((_QWORD *)a5 + 13);
                v54 = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                              (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                              v53 - (_QWORD)p_Blink[12]);
                v55 = *((_DWORD *)p_Blink + 16);
                v56 = p_Blink[11];
                v57 = p_Blink[10];
                v58 = p_Blink[14];
                v59 = p_Blink[15];
                *(_QWORD *)(v13 + 56) = p_Blink[7];
                *(_QWORD *)(v13 + 88) = v56;
                *(_QWORD *)(v13 + 104) = v71;
                *(_DWORD *)(v13 + 64) = v55;
                LODWORD(v56) = *(_DWORD *)(v13 + 64);
                *(_QWORD *)(v13 + 80) = v57;
                *(_QWORD *)(v13 + 96) = v53;
                *(_QWORD *)v13 = a2;
                *(_QWORD *)(v13 + 72) = v54;
                *(_QWORD *)(v13 + 112) = v58;
                *(_QWORD *)(v13 + 120) = v59;
                *(_DWORD *)(v13 + 128) = 1;
                *(_DWORD *)(v13 + 64) = (unsigned int)v56 & 0xFFFFFC00 | (v55 << 28 >> 28) & 0xF | (16 * (v74 & 0x3F));
                *(_QWORD *)(v13 + 8) = 0LL;
                *(_QWORD *)(v13 + 16) = 0LL;
                *(_QWORD *)(v13 + 24) = 0LL;
                *(_QWORD *)(v13 + 32) = 0LL;
                *(_QWORD *)(v13 + 40) = 0LL;
                *(_QWORD *)(v13 + 48) = 0LL;
                CVirtualAddressAllocator::AddVaRangeToVadWithFix(
                  (CVirtualAddressAllocator *)v6,
                  a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v13,
                  v54,
                  v67);
                v11 = 0LL;
                v24 = (struct _LIST_ENTRY *)(v13 + 8);
                goto LABEL_39;
              }
              if ( v11 )
              {
                v40 = p_Blink[9];
                v41 = p_Blink[11];
                v42 = *((_DWORD *)p_Blink + 16);
                v43 = (struct _SLIST_ENTRY *)p_Blink[10];
                v44 = (struct _SLIST_ENTRY *)p_Blink[14];
                v45 = p_Blink[15];
                *((_QWORD *)&v11[3].Next + 1) = p_Blink[7];
                *((_QWORD *)&v11[5].Next + 1) = v41;
                v11[6].Next = v29;
                *((_QWORD *)&v11[6].Next + 1) = v70;
                LODWORD(v11[4].Next) = v42;
                LODWORD(v41) = (__int64)v11[4].Next & 0xFFFFFC00;
                *((_QWORD *)&v11[4].Next + 1) = v40;
                v11[5].Next = v43;
                v11->Next = (struct _SLIST_ENTRY *)a2;
                v11[7].Next = v44;
                *((_QWORD *)&v11[7].Next + 1) = v45;
                LODWORD(v11[4].Next) = (unsigned int)v41 | (v42 << 28 >> 28) & 0xF | (16 * (v74 & 0x3F));
                LODWORD(v11[8].Next) = 1;
                memset(&v11->Next + 1, 0, 0x30uLL);
                v13 = (__int64)v68;
              }
              CVirtualAddressAllocator::AddVaRangeToVadWithFix(
                (CVirtualAddressAllocator *)v6,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v11,
                v28,
                v27);
              v11 = 0LL;
            }
            else if ( *((_QWORD *)a5 + 13) < (unsigned __int64)v30 )
            {
              v31 = *((_DWORD *)p_Blink + 16);
              v32 = p_Blink[14];
              v33 = p_Blink[15];
              v34 = p_Blink[10];
              v35 = VidMmiCalculateNewOwnerOffset(
                      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                      *((_QWORD *)a5 + 13) - (_QWORD)v29);
              v36 = p_Blink[7];
              *((_QWORD *)v68 + 13) = p_Blink[13];
              *((_QWORD *)v68 + 7) = v36;
              *((_DWORD *)v68 + 16) = v31;
              LODWORD(v36) = *((_DWORD *)v68 + 16) & 0xFFFFFC00;
              *((_QWORD *)v68 + 15) = v33;
              v6 = this;
              *(_QWORD *)v68 = a2;
              *((_QWORD *)v68 + 9) = v35;
              *((_QWORD *)v68 + 10) = v34;
              *((_QWORD *)v68 + 11) = v37;
              *((_QWORD *)v68 + 12) = v38;
              *((_QWORD *)v68 + 14) = v32;
              *((_DWORD *)v68 + 32) = 1;
              *((_DWORD *)v68 + 16) = (unsigned int)v36 | (v31 << 28 >> 28) & 0xF | (16 * (v74 & 0x3F));
              *((_QWORD *)v68 + 1) = 0LL;
              *((_QWORD *)v68 + 2) = 0LL;
              *((_QWORD *)v68 + 3) = 0LL;
              *((_QWORD *)v68 + 4) = 0LL;
              *((_QWORD *)v68 + 5) = 0LL;
              *((_QWORD *)v68 + 6) = 0LL;
              CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v68, v37, v67);
              v24 = (struct _LIST_ENTRY *)(v39 + 8);
              if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
                p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                                     (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                                     *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
              p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
LABEL_39:
              v13 = 0LL;
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)p_Blink);
              goto LABEL_51;
            }
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)p_Blink);
          }
          if ( Flink == v24 )
          {
            v24 = v67;
            goto LABEL_51;
          }
        }
        v24 = (struct _LIST_ENTRY *)(p_Blink + 1);
      }
LABEL_51:
      CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)v6, a2, a5, v15, v24);
      if ( a4 )
        *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      {
        VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
        Template_ppxxxxxqxx(
          v61,
          &UpdateGpuVirtualAddressRangeMapping,
          v62,
          v6,
          VidMmAllocFromOwner,
          *((_QWORD *)a5 + 9),
          *((_QWORD *)a5 + 12),
          *((_QWORD *)a5 + 13),
          *((_QWORD *)a5 + 11),
          *((_QWORD *)a5 + 10),
          v62,
          *((_QWORD *)a5 + 14),
          *((_QWORD *)a5 + 15));
      }
      v17 = 0;
      VidMmGlobalAllocFromOwner = v69;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v14);
      WdLogEvent5_WdWarning(v16);
      v17 = -1073741811;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0035690);
    v64 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v64 + 24) = v11;
    *(_QWORD *)(v64 + 32) = v13;
    WdLogEvent5_WdLowResource(v64);
    v17 = -1073741801;
  }
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_PteDeadLock_61045357_FeatureDescriptorDetails) )
    v63 = v76 == 0;
  else
    v63 = VidMmGlobalAllocFromOwner == 0;
  if ( !v63 )
  {
    *(_QWORD *)(VidMmGlobalAllocFromOwner + 360) = 0LL;
    ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v11 )
  {
    ++g_VaRangeLookasideList.L.TotalFrees;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList.L.ListHead) < g_VaRangeLookasideList.L.Depth )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList.L.ListHead, v11);
    }
    else
    {
      ++g_VaRangeLookasideList.L.FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY, struct _LOOKASIDE_LIST_EX *))g_VaRangeLookasideList.L.FreeEx)(
        v11,
        &g_VaRangeLookasideList);
    }
  }
  if ( v13 )
  {
    ++g_VaRangeLookasideList.L.TotalFrees;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList.L.ListHead) < g_VaRangeLookasideList.L.Depth )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList.L.ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++g_VaRangeLookasideList.L.FreeMisses;
      ((void (__fastcall *)(__int64, struct _LOOKASIDE_LIST_EX *))g_VaRangeLookasideList.L.FreeEx)(
        v13,
        &g_VaRangeLookasideList);
    }
  }
  if ( v66 )
  {
    v6[6] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v17;
}
