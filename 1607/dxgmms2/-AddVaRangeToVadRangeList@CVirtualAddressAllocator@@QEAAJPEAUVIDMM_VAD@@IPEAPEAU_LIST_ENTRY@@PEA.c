/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C004CB78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C006871C (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     MergeAllocationPendingVaRangeList @ 0x1C008A0CC (MergeAllocationPendingVaRangeList.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C00942A4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001D768 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_ppxxxxxqxx @ 0x1C001FA40 (Template_ppxxxxxqxx.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0045ED4 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0068650 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v6; // rbx
  struct _LIST_ENTRY *v9; // r9
  struct _LIST_ENTRY *v11; // r14
  struct _LIST_ENTRY *Flink; // rsi
  unsigned __int64 v13; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // esi
  struct _LIST_ENTRY *v21; // r8
  struct _LIST_ENTRY *v22; // r9
  struct _LIST_ENTRY *v23; // r9
  void *v24; // r10
  struct VIDMM_MAPPED_VA_RANGE *v25; // r14
  struct _LIST_ENTRY *v26; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  struct _LIST_ENTRY *v29; // r8
  struct _LIST_ENTRY *v30; // r9
  void *v31; // r10
  bool v32; // sf
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  char **v39; // rcx
  char *v40; // rax
  _QWORD *v41; // r15
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // [rsp+50h] [rbp-58h]
  char v47; // [rsp+70h] [rbp-38h]
  char v48; // [rsp+C0h] [rbp+18h]

  v48 = a3;
  v6 = a3;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
    return CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(this, a2, v6, a4, a5);
  v47 = 0;
  if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 40));
    v47 = 1;
  }
  v11 = (struct _LIST_ENTRY *)((char *)a2 + 16 * v6 + 96);
  if ( a4 )
    Flink = *a4;
  else
    Flink = v11->Flink;
  while ( Flink != v11 )
  {
    v13 = *((_QWORD *)a5 + 13);
    p_Blink = &Flink[-1].Blink;
    Blink = Flink[5].Blink;
    v16 = Flink;
    Flink = Flink->Flink;
    if ( v13 <= (unsigned __int64)Blink )
    {
      v20 = CVirtualAddressAllocator::AddVaRangeToVad(this, a2, a5, v9, (struct _LIST_ENTRY *)(p_Blink + 1));
      v32 = v20 < 0;
      goto LABEL_59;
    }
    v17 = *((_QWORD *)a5 + 12);
    v18 = (unsigned __int64)p_Blink[13];
    if ( v17 < v18 )
    {
      if ( v17 > (unsigned __int64)Blink )
      {
        if ( v13 < v18 )
        {
          v24 = VIDMM_MAPPED_VA_RANGE::operator new(v17);
          if ( v24 )
            v25 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                    (__int64)v24,
                                                    (__int64)a2,
                                                    (__int64)p_Blink[12],
                                                    *((_QWORD *)a5 + 12),
                                                    v48,
                                                    (__int64)p_Blink[7],
                                                    (__int64)p_Blink[9],
                                                    (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                                    (__int64)p_Blink[11],
                                                    (__int64)p_Blink[10],
                                                    (__int64)p_Blink[15],
                                                    (__int64)p_Blink[14],
                                                    0);
          else
            v25 = 0LL;
          if ( !v25 )
          {
LABEL_30:
            v20 = -1073741801;
            goto LABEL_70;
          }
          v20 = CVirtualAddressAllocator::AddVaRangeToVad(this, a2, v25, v23, v16);
          if ( v20 < 0 )
            goto LABEL_32;
          v20 = CVirtualAddressAllocator::AddVaRangeToVad(this, a2, a5, v26, v16);
          if ( v20 >= 0 )
          {
            v28 = *((_QWORD *)a5 + 13) + (char *)p_Blink[9] - (char *)p_Blink[12];
            v29 = p_Blink[15];
            if ( v29 )
            {
              v27 = (unsigned __int64)p_Blink[14];
              v28 = v27 + (v28 - v27) % ((_QWORD)v29 << 12);
            }
            v31 = VIDMM_MAPPED_VA_RANGE::operator new(v27);
            if ( v31 )
              v25 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                      (__int64)v31,
                                                      (__int64)a2,
                                                      *((_QWORD *)a5 + 13),
                                                      (__int64)p_Blink[13],
                                                      v48,
                                                      (__int64)p_Blink[7],
                                                      v28,
                                                      (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                                      (__int64)p_Blink[11],
                                                      (__int64)p_Blink[10],
                                                      (__int64)p_Blink[15],
                                                      (__int64)p_Blink[14],
                                                      0);
            else
              v25 = 0LL;
            if ( !v25 )
              goto LABEL_30;
            v20 = CVirtualAddressAllocator::AddVaRangeToVad(this, a2, v25, v30, v16);
            if ( v20 < 0 )
            {
LABEL_32:
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v25);
              goto LABEL_70;
            }
            CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)(p_Blink + 1), 0, 0, 0);
            goto LABEL_60;
          }
          goto LABEL_70;
        }
        p_Blink[13] = (struct _LIST_ENTRY *)v17;
      }
      else
      {
        if ( v13 < v18 )
        {
          v20 = CVirtualAddressAllocator::AddVaRangeToVad(this, a2, a5, v9, (struct _LIST_ENTRY *)(p_Blink + 1));
          if ( v20 < 0 )
            goto LABEL_70;
          if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
          {
            v21 = (struct _LIST_ENTRY *)((char *)p_Blink[9] + *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
            v22 = p_Blink[15];
            p_Blink[9] = v21;
            if ( v22 )
              p_Blink[9] = (struct _LIST_ENTRY *)((char *)p_Blink[14]
                                                + (unsigned __int64)((char *)v21 - (char *)p_Blink[14])
                                                % ((_QWORD)v22 << 12));
          }
          p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
          goto LABEL_60;
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)(p_Blink + 1), 0, 1u, 0);
      }
    }
  }
  v19 = *((_QWORD *)a5 + 7);
  if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 1 )
  {
    if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 == 4 )
    {
      v19 = *(_QWORD *)(v19 + 64);
    }
    else
    {
      if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 5 )
        goto LABEL_50;
      v19 = *(_QWORD *)(v19 + 16);
    }
  }
  if ( v19 )
  {
    v20 = CheckUniqueGpuVaMapping(**(struct _VIDMM_GLOBAL_ALLOC ***)v19, a5);
    if ( v20 < 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v35 + 24) = 10186LL;
      WdLogEvent5_WdAssertion(v35);
      goto LABEL_58;
    }
    v36 = (__int64 *)(v19 + 128);
    v37 = (_QWORD *)((char *)a5 + 24);
    v38 = *v36;
    if ( *(__int64 **)(*v36 + 8) != v36 )
      __fastfail(3u);
    *v37 = v38;
    *((_QWORD *)a5 + 4) = v36;
    *(_QWORD *)(v38 + 8) = v37;
    *v36 = (__int64)v37;
  }
LABEL_50:
  v39 = (char **)v11->Blink;
  v40 = (char *)a5 + 8;
  if ( *v39 != (char *)v11 )
    __fastfail(3u);
  *(_QWORD *)v40 = v11;
  *((_QWORD *)a5 + 2) = v39;
  *v39 = v40;
  v11->Blink = (struct _LIST_ENTRY *)v40;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a5 + 88) & 4) != 0 )
  {
    v41 = (_QWORD *)((char *)a2 + 56);
    if ( !*v41 )
    {
      v42 = (_QWORD *)((char *)this + 104);
      v43 = *((_QWORD *)this + 13);
      if ( *(CVirtualAddressAllocator **)(v43 + 8) != (CVirtualAddressAllocator *)((char *)this + 104) )
        __fastfail(3u);
      *v41 = v43;
      v41[1] = v42;
      *(_QWORD *)(v43 + 8) = v41;
      *v42 = v41;
    }
  }
  v20 = 0;
LABEL_58:
  v32 = v20 < 0;
LABEL_59:
  if ( !v32 )
  {
LABEL_60:
    if ( a4 )
      *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
    v44 = *((_QWORD *)a5 + 7);
    v45 = (unsigned int)(((int)(*((_DWORD *)a5 + 16) << 28) >> 28) - 1);
    if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 != 1 )
    {
      v45 = (unsigned int)(((int)(*((_DWORD *)a5 + 16) << 28) >> 28) - 4);
      if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 == 4 )
      {
        v44 = *(_QWORD *)(v44 + 64);
      }
      else if ( (int)(*((_DWORD *)a5 + 16) << 28) >> 28 == 5 )
      {
        v44 = *(_QWORD *)(v44 + 16);
      }
      else
      {
        v44 = 0LL;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    {
      LODWORD(v46) = *((_DWORD *)a5 + 16);
      Template_ppxxxxxqxx(
        v45,
        &UpdateGpuVirtualAddressRangeMapping,
        (unsigned int)v46,
        this,
        v44,
        *((_QWORD *)a5 + 9),
        *((_QWORD *)a5 + 12),
        *((_QWORD *)a5 + 13),
        *((_QWORD *)a5 + 11),
        *((_QWORD *)a5 + 10),
        v46,
        *((_QWORD *)a5 + 14),
        *((_QWORD *)a5 + 15));
    }
  }
LABEL_70:
  if ( v47 )
  {
    *((_QWORD *)this + 6) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v20;
}
