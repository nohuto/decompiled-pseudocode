/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0040ED8 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C00113FC (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Template_ppqxxx @ 0x1C001DF30 (Template_ppqxxx.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0040E18 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F088 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned __int64 a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  char v5; // r13
  __int64 v7; // r12
  struct _KTHREAD **v9; // rbp
  struct _LIST_ENTRY *v10; // rbx
  struct _LIST_ENTRY *Flink; // r15
  int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // rdx
  char *v19; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v21; // rax
  struct _KTHREAD **v22; // rbx
  int v23; // ecx
  __int64 v24; // rdx
  int v26; // ecx
  int v27; // ecx
  struct _LIST_ENTRY *v28; // r9
  struct _LIST_ENTRY **p_Blink; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r10
  int v35; // r12d
  int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r11
  struct _LIST_ENTRY *v40; // r9
  int v41; // eax
  struct _LIST_ENTRY *v42; // r9
  VIDMM_MAPPED_VA_RANGE *v43; // rax
  VIDMM_MAPPED_VA_RANGE *v44; // rbp
  int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // r10
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r11
  int v51; // eax
  struct _LIST_ENTRY *v52; // r9
  __int64 v53; // rax
  struct _KTHREAD **v54; // rsi
  struct _KTHREAD *v55; // rax
  struct _KTHREAD ***v56; // rbp
  VIDMM_MAPPED_VA_RANGE *v58; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v59; // [rsp+98h] [rbp+10h]
  VIDMM_MAPPED_VA_RANGE *v60; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v7 = (unsigned int)a3;
  v9 = this;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 5));
    v5 = 1;
  }
  v10 = (struct _LIST_ENTRY *)((char *)a2 + 16 * v7 + 96);
  if ( a4 )
    Flink = *a4;
  else
    Flink = v10->Flink;
  if ( Flink == v10 )
  {
LABEL_6:
    v12 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
    if ( v12 == 1 )
    {
      v13 = *((_QWORD *)a5 + 7);
    }
    else
    {
      v27 = v12 - 4;
      if ( v27 )
      {
        if ( v27 != 1 )
        {
LABEL_12:
          Blink = v10->Blink;
          v21 = (struct _LIST_ENTRY *)((char *)a5 + 8);
          *((_QWORD *)a5 + 1) = v10;
          *((_QWORD *)a5 + 2) = Blink;
          if ( Blink->Flink != v10 )
            __fastfail(3u);
          Blink->Flink = v21;
          v10->Blink = v21;
          ++*((_DWORD *)a2 + 19);
          if ( (*((_BYTE *)a5 + 88) & 4) != 0 )
          {
            v54 = (struct _KTHREAD **)((char *)a2 + 56);
            if ( !*v54 )
            {
              v55 = v9[13];
              v56 = (struct _KTHREAD ***)(v9 + 13);
              *v54 = v55;
              v54[1] = (struct _KTHREAD *)v56;
              if ( *((struct _KTHREAD ****)v55 + 1) != v56 )
                __fastfail(3u);
              *((_QWORD *)v55 + 1) = v54;
              *v56 = v54;
            }
          }
          v16 = 0;
LABEL_15:
          v22 = this;
LABEL_16:
          if ( a4 )
            *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
          v23 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
          if ( v23 == 1 )
          {
            v24 = *((_QWORD *)a5 + 7);
          }
          else
          {
            v26 = v23 - 4;
            if ( v26 )
            {
              if ( v26 == 1 )
                v24 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 16LL);
              else
                v24 = 0LL;
            }
            else
            {
              v24 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 64LL);
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            Template_ppqxxx(
              v24 != 0,
              &UpdateGpuVirtualAddressRangeMapping,
              a3,
              v22,
              v24,
              v24 != 0,
              *((_QWORD *)a5 + 9),
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13));
          goto LABEL_22;
        }
        v13 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 16LL);
      }
      else
      {
        v13 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 64LL);
      }
    }
    if ( v13 )
    {
      v16 = CheckUniqueGpuVaMapping(**(struct _VIDMM_GLOBAL_ALLOC ***)v13, a5);
      if ( v16 < 0 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v15, v14, a3, v17);
        *(_QWORD *)(v53 + 24) = 7560LL;
        WdLogEvent5_WdAssertion(v53);
LABEL_46:
        v22 = this;
        goto LABEL_22;
      }
      v18 = *(_QWORD *)(v13 + 128);
      v19 = (char *)a5 + 24;
      *((_QWORD *)a5 + 3) = v18;
      *((_QWORD *)a5 + 4) = v13 + 128;
      if ( *(_QWORD *)(v18 + 8) != v13 + 128 )
        __fastfail(3u);
      v9 = this;
      *(_QWORD *)(v18 + 8) = v19;
      *(_QWORD *)(v13 + 128) = v19;
    }
    goto LABEL_12;
  }
  while ( 1 )
  {
    v28 = Flink[5].Blink;
    p_Blink = &Flink[-1].Blink;
    v30 = *((_QWORD *)a5 + 13);
    v59 = Flink;
    Flink = Flink->Flink;
    v60 = (VIDMM_MAPPED_VA_RANGE *)p_Blink;
    if ( v30 <= (unsigned __int64)v28 )
    {
      v16 = CVirtualAddressAllocator::AddVaRangeToVad(
              (CVirtualAddressAllocator *)v9,
              a2,
              a5,
              v28,
              (struct _LIST_ENTRY *)(p_Blink + 1));
      if ( v16 >= 0 )
        goto LABEL_15;
      goto LABEL_46;
    }
    a3 = *((_QWORD *)a5 + 12);
    v31 = (unsigned __int64)p_Blink[13];
    if ( a3 < v31 )
      break;
LABEL_37:
    if ( Flink == v10 )
      goto LABEL_6;
  }
  if ( a3 <= (unsigned __int64)v28 )
  {
    if ( v30 < v31 )
    {
      v16 = CVirtualAddressAllocator::AddVaRangeToVad(
              (CVirtualAddressAllocator *)v9,
              a2,
              a5,
              v28,
              (struct _LIST_ENTRY *)(p_Blink + 1));
      if ( v16 < 0 )
        goto LABEL_46;
      if ( VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(v60) )
        *((_QWORD *)v60 + 9) += *((_QWORD *)a5 + 13) - *((_QWORD *)v60 + 12);
      *((_QWORD *)v60 + 12) = *((_QWORD *)a5 + 13);
      goto LABEL_15;
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad(
      (CVirtualAddressAllocator *)v9,
      (struct _LIST_ENTRY *)(p_Blink + 1),
      0,
      1u);
    goto LABEL_37;
  }
  if ( v30 >= v31 )
  {
    p_Blink[13] = (struct _LIST_ENTRY *)a3;
    goto LABEL_37;
  }
  v32 = operator new(0x78uLL, 0x39346956u, PagedPool);
  v33 = v32;
  if ( !v32 )
  {
    v16 = -1073741801;
    goto LABEL_46;
  }
  v34 = *((_QWORD *)a5 + 12);
  v35 = 16 * (v7 & 0x3F);
  v36 = *((_DWORD *)v60 + 16);
  v37 = *((_QWORD *)v60 + 11);
  v38 = *((_QWORD *)v60 + 12);
  v39 = *((_QWORD *)v60 + 10);
  v40 = (struct _LIST_ENTRY *)*((_QWORD *)v60 + 9);
  v32[7] = *((_QWORD *)v60 + 7);
  v41 = *((_DWORD *)v32 + 16);
  v33[11] = v37;
  v33[12] = v38;
  *v33 = a2;
  v33[9] = v40;
  v33[10] = v39;
  v33[13] = v34;
  *((_DWORD *)v33 + 16) = v35 & 0xFFFFE3FF | (v36 << 28 >> 28) & 0xF | v41 & 0xFFFFE000;
  *((_DWORD *)v33 + 28) = 1;
  v33[1] = 0LL;
  v33[2] = 0LL;
  v33[3] = 0LL;
  v33[4] = 0LL;
  v33[5] = 0LL;
  v33[6] = 0LL;
  v16 = CVirtualAddressAllocator::AddVaRangeToVad(
          (CVirtualAddressAllocator *)v9,
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)v33,
          v40,
          v59);
  if ( v16 < 0 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v33);
    goto LABEL_46;
  }
  v22 = this;
  v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v42, v59);
  if ( v16 >= 0 )
  {
    v43 = (VIDMM_MAPPED_VA_RANGE *)operator new(0x78uLL, 0x39346956u, PagedPool);
    v58 = v43;
    v44 = v43;
    if ( !v43 )
    {
      v16 = -1073741801;
      goto LABEL_22;
    }
    v45 = *((_DWORD *)v60 + 16);
    v46 = *((_QWORD *)v60 + 11);
    v47 = *((_QWORD *)a5 + 13);
    v48 = *((_QWORD *)v60 + 13);
    v49 = v47 + *((_QWORD *)v60 + 9) - *((_QWORD *)v60 + 12);
    v50 = *((_QWORD *)v60 + 10);
    *((_QWORD *)v43 + 7) = *((_QWORD *)v60 + 7);
    v51 = *((_DWORD *)v43 + 16);
    *((_QWORD *)v44 + 9) = v49;
    *((_QWORD *)v44 + 11) = v46;
    *((_QWORD *)v44 + 13) = v48;
    *(_QWORD *)v44 = a2;
    *((_QWORD *)v44 + 10) = v50;
    *((_QWORD *)v44 + 12) = v47;
    v52 = (struct _LIST_ENTRY *)((v45 << 28 >> 28) & 0xF);
    *((_DWORD *)v44 + 16) = v35 & 0xFFFFE3FF | (unsigned int)v52 & 0xFFFFE3FF | v51 & 0xFFFFE000;
    *((_DWORD *)v44 + 28) = 1;
    *((_QWORD *)v44 + 1) = 0LL;
    *((_QWORD *)v44 + 2) = 0LL;
    *((_QWORD *)v44 + 3) = 0LL;
    *((_QWORD *)v44 + 4) = 0LL;
    *((_QWORD *)v44 + 5) = 0LL;
    *((_QWORD *)v44 + 6) = 0LL;
    v16 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v22, a2, v44, v52, v59);
    if ( v16 < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v58);
      goto LABEL_22;
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad(
      (CVirtualAddressAllocator *)v22,
      (struct _LIST_ENTRY *)((char *)v60 + 8),
      0,
      0);
    goto LABEL_16;
  }
LABEL_22:
  if ( v5 )
  {
    v22[6] = 0LL;
    ExReleasePushLockExclusiveEx(v22 + 5, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v16;
}
