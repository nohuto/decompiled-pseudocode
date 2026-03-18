/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005F954 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C000EE00 (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3)
{
  struct _LIST_ENTRY *Flink; // r9
  VIDMM_MAPPED_VA_RANGE *p_Blink; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct VIDMM_ALLOC *VidMmAlloc; // rax
  char *v9; // rcx
  __int64 v10; // r8
  char **v11; // rdx
  char *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  char **v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8

  Flink = a2->Flink;
  p_Blink = (VIDMM_MAPPED_VA_RANGE *)&a2[-1].Blink;
  Blink = a2->Blink;
  if ( a2->Flink->Blink != a2 || Blink->Flink != a2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  a2->Flink = 0LL;
  VidMmAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc((VIDMM_MAPPED_VA_RANGE *)&a2[-1].Blink);
  if ( VidMmAlloc )
  {
    v9 = (char *)p_Blink + 24;
    if ( *((_QWORD *)p_Blink + 3) )
    {
      v10 = *(_QWORD *)v9;
      v11 = (char **)*((_QWORD *)p_Blink + 4);
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
        __fastfail(3u);
      *v11 = (char *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)v9 = 0LL;
    }
    v12 = (char *)p_Blink + 40;
    if ( *((_QWORD *)p_Blink + 5) )
    {
      v13 = **(_QWORD **)VidMmAlloc;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13 + 344, 0LL);
      v14 = *(_QWORD *)v12;
      v15 = (char **)*((_QWORD *)p_Blink + 6);
      if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v15 != v12 )
        __fastfail(3u);
      *v15 = (char *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      *(_QWORD *)v12 = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v16 = *(_QWORD *)p_Blink;
  --*(_DWORD *)(*(_QWORD *)p_Blink + 76LL);
  *(_QWORD *)p_Blink = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(p_Blink);
  if ( a3 && (*(_BYTE *)(v16 + 72) & 0xF) == 3 && !*(_DWORD *)(v16 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v16, v17);
}
