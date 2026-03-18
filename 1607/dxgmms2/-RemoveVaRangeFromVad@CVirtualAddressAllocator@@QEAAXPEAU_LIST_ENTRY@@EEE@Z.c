/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0047FC4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  struct _LIST_ENTRY *Flink; // r10
  VIDMM_MAPPED_VA_RANGE *p_Blink; // rsi
  struct _LIST_ENTRY *Blink; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  char *v14; // rcx
  __int64 v15; // r8
  char **v16; // rdx
  char *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rcx
  char **v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  char **v25; // rax

  Flink = a2->Flink;
  p_Blink = (VIDMM_MAPPED_VA_RANGE *)&a2[-1].Blink;
  Blink = a2->Blink;
  if ( a2->Flink->Blink != a2 || Blink->Flink != a2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  v11 = *((_QWORD *)p_Blink + 7);
  v12 = (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28;
  *((_QWORD *)p_Blink + 1) = 0LL;
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v12, v11);
  if ( VidMmAllocFromOwner )
  {
    v14 = (char *)p_Blink + 24;
    if ( *((_QWORD *)p_Blink + 3) )
    {
      v15 = *(_QWORD *)v14;
      v16 = (char **)*((_QWORD *)p_Blink + 4);
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      *(_QWORD *)v14 = 0LL;
    }
    v17 = (char *)p_Blink + 40;
    if ( *((_QWORD *)p_Blink + 5) )
    {
      v18 = **VidMmAllocFromOwner;
      if ( !EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18 + 352, 0LL);
        *(_QWORD *)(v18 + 360) = KeGetCurrentThread();
        v24 = *(_QWORD *)v17;
        v25 = (char **)*((_QWORD *)p_Blink + 6);
        if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || *v25 != v17 )
          __fastfail(3u);
        *v25 = (char *)v24;
        *(_QWORD *)(v24 + 8) = v25;
        v21 = v18 + 352;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)(v18 + 360) = 0LL;
        goto LABEL_16;
      }
      if ( !a5 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18 + 352, 0LL);
        *(_QWORD *)(v18 + 360) = KeGetCurrentThread();
      }
      v19 = *(_QWORD *)v17;
      v20 = (char **)*((_QWORD *)p_Blink + 6);
      if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || *v20 != v17 )
        __fastfail(3u);
      *v20 = (char *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      *(_QWORD *)v17 = 0LL;
      if ( !a5 )
      {
        v21 = v18 + 352;
        *(_QWORD *)(v18 + 360) = 0LL;
LABEL_16:
        ExReleasePushLockExclusiveEx(v21, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  v22 = *(_QWORD *)p_Blink;
  --*(_DWORD *)(*(_QWORD *)p_Blink + 76LL);
  if ( a4 )
    *(_QWORD *)p_Blink = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(p_Blink);
  if ( a3 && (*(_BYTE *)(v22 + 72) & 0xF) == 3 && !*(_DWORD *)(v22 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v22, v23);
}
