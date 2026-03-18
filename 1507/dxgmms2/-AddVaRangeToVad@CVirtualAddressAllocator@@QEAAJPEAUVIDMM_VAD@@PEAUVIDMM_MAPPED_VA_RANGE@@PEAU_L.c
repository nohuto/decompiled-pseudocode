/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005C514
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005C61C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C000EE00 (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005CEF8 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY *a5)
{
  struct _VIDMM_GLOBAL_ALLOC ***VidMmAlloc; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct _VIDMM_GLOBAL_ALLOC **v17; // rdx
  struct _VIDMM_GLOBAL_ALLOC **v18; // rax
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx

  VidMmAlloc = (struct _VIDMM_GLOBAL_ALLOC ***)VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(a3);
  v9 = VidMmAlloc;
  if ( VidMmAlloc )
  {
    v12 = CheckUniqueGpuVaMapping(**VidMmAlloc, a3);
    if ( v12 < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      *(_QWORD *)(v15 + 24) = 7503LL;
      WdLogEvent5_WdAssertion(v15);
      return (unsigned int)v12;
    }
    v17 = v9[16];
    v18 = (struct _VIDMM_GLOBAL_ALLOC **)((char *)a3 + 24);
    *((_QWORD *)a3 + 3) = v17;
    *((_QWORD *)a3 + 4) = v9 + 16;
    if ( v17[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v9 + 16) )
      __fastfail(3u);
    v17[1] = (struct _VIDMM_GLOBAL_ALLOC *)v18;
    v9[16] = v18;
  }
  v19 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  Blink = a5->Blink;
  *((_QWORD *)a3 + 1) = a5;
  *((_QWORD *)a3 + 2) = Blink;
  if ( Blink->Flink != a5 )
    __fastfail(3u);
  Blink->Flink = v19;
  a5->Blink = v19;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a3 + 88) & 4) != 0 )
  {
    v21 = (_QWORD *)((char *)a2 + 56);
    if ( !*((_QWORD *)a2 + 7) )
    {
      v22 = *((_QWORD *)this + 13);
      *v21 = v22;
      *((_QWORD *)a2 + 8) = (char *)this + 104;
      if ( *(CVirtualAddressAllocator **)(v22 + 8) != (CVirtualAddressAllocator *)((char *)this + 104) )
        __fastfail(3u);
      *(_QWORD *)(v22 + 8) = v21;
      *((_QWORD *)this + 13) = v21;
    }
  }
  return 0LL;
}
