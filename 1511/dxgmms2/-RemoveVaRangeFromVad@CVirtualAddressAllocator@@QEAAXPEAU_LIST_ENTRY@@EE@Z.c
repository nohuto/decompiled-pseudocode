/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8
 * Callers:
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003FFBC (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C00113FC (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C001C358 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4)
{
  struct _LIST_ENTRY *Flink; // r10
  volatile signed __int32 *p_Blink; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct VIDMM_ALLOC *VidMmAlloc; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  struct _LIST_ENTRY *v24; // rcx
  struct _LIST_ENTRY **v25; // rax
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAlloc; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rax

  Flink = a2->Flink;
  p_Blink = (volatile signed __int32 *)&a2[-1].Blink;
  Blink = a2->Blink;
  if ( a2->Flink->Blink != a2 || Blink->Flink != a2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  a2->Flink = 0LL;
  VidMmAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc((VIDMM_MAPPED_VA_RANGE *)&a2[-1].Blink);
  if ( VidMmAlloc )
  {
    v12 = p_Blink + 6;
    if ( *((_QWORD *)p_Blink + 3) )
    {
      v17 = *v12;
      v18 = (_QWORD *)*((_QWORD *)p_Blink + 4);
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v18 != v12 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v12 = 0LL;
    }
    v13 = p_Blink + 10;
    if ( *((_QWORD *)p_Blink + 5) )
    {
      v19 = **(_QWORD **)VidMmAlloc;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v19 + 344, 0LL);
      v20 = *v13;
      v21 = (_QWORD *)*((_QWORD *)p_Blink + 6);
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v21 != v13 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v13 = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v14 = *(_QWORD *)p_Blink;
  --*(_DWORD *)(*(_QWORD *)p_Blink + 76LL);
  if ( a4 )
    *(_QWORD *)p_Blink = 0LL;
  if ( _InterlockedExchangeAdd(p_Blink + 28, 0xFFFFFFFF) == 1 )
  {
    v15 = p_Blink + 6;
    if ( *((_QWORD *)p_Blink + 3) )
    {
      v22 = *v15;
      v23 = (_QWORD *)*((_QWORD *)p_Blink + 4);
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v23 != v15 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      *v15 = 0LL;
    }
    if ( a2->Flink )
    {
      v24 = a2->Flink;
      v25 = (struct _LIST_ENTRY **)*((_QWORD *)p_Blink + 2);
      if ( a2->Flink->Blink != a2 || *v25 != a2 )
        __fastfail(3u);
      *v25 = v24;
      v24->Blink = (struct _LIST_ENTRY *)v25;
      a2->Flink = 0LL;
    }
    if ( (p_Blink[16] & 0x1000) == 0 )
    {
      v16 = p_Blink + 10;
      if ( *((_QWORD *)p_Blink + 5) )
      {
        VidMmGlobalAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc((VIDMM_MAPPED_VA_RANGE *)p_Blink);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
        v27 = *v16;
        v28 = (_QWORD *)*((_QWORD *)p_Blink + 6);
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v28 != v16 )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        *v16 = 0LL;
        ExReleasePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    operator delete((void *)p_Blink);
  }
  if ( a3 && (*(_BYTE *)(v14 + 72) & 0xF) == 3 && !*(_DWORD *)(v14 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v14);
}
