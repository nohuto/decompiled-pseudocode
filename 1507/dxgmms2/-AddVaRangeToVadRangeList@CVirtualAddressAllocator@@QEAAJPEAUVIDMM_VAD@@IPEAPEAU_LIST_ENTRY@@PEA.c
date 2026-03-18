/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C005E910 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0061150 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C000EE00 (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Template_ppqxxx @ 0x1C00106E0 (Template_ppqxxx.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005C514 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY *a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v7; // r13
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *Flink; // r14
  unsigned __int64 v11; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rdx
  int v16; // eax
  int v17; // esi
  struct VIDMM_ALLOC *VidMmAlloc; // rax
  __int64 v19; // r8
  struct _LIST_ENTRY *v21; // r9
  _QWORD *v22; // r14
  struct _LIST_ENTRY *v23; // rax
  int v24; // r10d
  struct _LIST_ENTRY *v25; // r11
  struct _LIST_ENTRY *v26; // rdx
  struct _LIST_ENTRY *v27; // r8
  int v28; // ecx
  struct _LIST_ENTRY *v29; // r9
  struct _LIST_ENTRY *v30; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+A0h] [rbp+18h]

  v7 = a3;
  v31 = 0;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 5));
    v31 = 1;
  }
  v9 = (struct _LIST_ENTRY *)((char *)a2 + 16 * v7 + 96);
  if ( a4 )
    Flink = a4->Flink;
  else
    Flink = v9->Flink;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( Flink == v9 )
        {
          v16 = CVirtualAddressAllocator::AddVaRangeToVad(
                  (CVirtualAddressAllocator *)this,
                  a2,
                  a5,
                  a4,
                  (struct _LIST_ENTRY *)a2 + v7 + 6);
          goto LABEL_15;
        }
        v11 = *((_QWORD *)a5 + 13);
        p_Blink = &Flink[-1].Blink;
        Blink = Flink[5].Blink;
        v30 = Flink;
        Flink = Flink->Flink;
        if ( v11 <= (unsigned __int64)Blink )
        {
          v16 = CVirtualAddressAllocator::AddVaRangeToVad(
                  (CVirtualAddressAllocator *)this,
                  a2,
                  a5,
                  a4,
                  (struct _LIST_ENTRY *)(p_Blink + 1));
LABEL_15:
          v17 = v16;
          if ( v16 < 0 )
            goto LABEL_20;
          goto LABEL_16;
        }
        v14 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
        v15 = p_Blink[13];
      }
      while ( v14 >= v15 );
      if ( v14 > Blink )
        break;
      if ( v11 < (unsigned __int64)v15 )
      {
        v17 = CVirtualAddressAllocator::AddVaRangeToVad(
                (CVirtualAddressAllocator *)this,
                a2,
                a5,
                a4,
                (struct _LIST_ENTRY *)(p_Blink + 1));
        if ( v17 < 0 )
          goto LABEL_20;
        if ( VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc((VIDMM_MAPPED_VA_RANGE *)p_Blink) )
          p_Blink[9] = (struct _LIST_ENTRY *)((char *)p_Blink[9] + *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
LABEL_36:
        p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
LABEL_16:
        if ( a4 )
          a4->Flink = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
        VidMmAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(a5);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          Template_ppqxxx(
            *((_QWORD *)a5 + 9),
            &UpdateGpuVirtualAddressRangeMapping,
            v19,
            this,
            VidMmAlloc,
            VidMmAlloc != 0LL,
            *((_QWORD *)a5 + 9),
            *((_QWORD *)a5 + 12),
            *((_QWORD *)a5 + 13));
        goto LABEL_20;
      }
      CVirtualAddressAllocator::RemoveVaRangeFromVad(
        (CVirtualAddressAllocator *)this,
        (struct _LIST_ENTRY *)(p_Blink + 1),
        0);
    }
    if ( v11 < (unsigned __int64)v15 )
      break;
    p_Blink[13] = v14;
  }
  v22 = operator new(0x78uLL, 0x39346956u, PagedPool);
  if ( v22 )
  {
    v23 = p_Blink[11];
    v24 = *((_DWORD *)p_Blink + 16);
    v25 = p_Blink[10];
    v26 = p_Blink[9];
    v21 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
    v27 = p_Blink[12];
    v22[7] = p_Blink[7];
    v28 = *((_DWORD *)v22 + 16);
    v22[11] = v23;
    *v22 = a2;
    v22[9] = v26;
    v22[10] = v25;
    v22[12] = v27;
    v22[13] = v21;
    *((_DWORD *)v22 + 16) = (v24 << 28 >> 28) & 0xF | v28 & 0xFFFFE800 | (16 * (v7 & 0x3F));
    *((_DWORD *)v22 + 28) = 1;
    v22[1] = 0LL;
    v22[2] = 0LL;
    v22[3] = 0LL;
    v22[4] = 0LL;
    v22[5] = 0LL;
    v22[6] = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v17 = -1073741801;
    goto LABEL_20;
  }
  v17 = CVirtualAddressAllocator::AddVaRangeToVad(
          (CVirtualAddressAllocator *)this,
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)v22,
          v21,
          v30);
  if ( v17 < 0 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v22);
    goto LABEL_20;
  }
  v17 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v29, v30);
  if ( v17 >= 0 )
  {
    if ( VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc((VIDMM_MAPPED_VA_RANGE *)p_Blink) )
      p_Blink[9] = (struct _LIST_ENTRY *)((char *)p_Blink[9] + *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
    goto LABEL_36;
  }
LABEL_20:
  if ( v31 )
  {
    this[6] = 0LL;
    ExReleasePushLockExclusiveEx(this + 5, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v17;
}
