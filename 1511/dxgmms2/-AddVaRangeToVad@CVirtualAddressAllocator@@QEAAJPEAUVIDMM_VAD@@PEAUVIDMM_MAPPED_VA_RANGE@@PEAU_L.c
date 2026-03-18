/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0040E18
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C00113FC (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F088 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
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
  struct _VIDMM_GLOBAL_ALLOC **v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC **v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx

  VidMmAlloc = (struct _VIDMM_GLOBAL_ALLOC ***)VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(a3);
  v9 = VidMmAlloc;
  if ( VidMmAlloc )
  {
    v12 = CheckUniqueGpuVaMapping(**VidMmAlloc, a3);
    if ( v12 < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      *(_QWORD *)(v20 + 24) = 7560LL;
      WdLogEvent5_WdAssertion(v20);
      return (unsigned int)v12;
    }
    v15 = v9[16];
    v16 = (struct _VIDMM_GLOBAL_ALLOC **)((char *)a3 + 24);
    *((_QWORD *)a3 + 3) = v15;
    *((_QWORD *)a3 + 4) = v9 + 16;
    if ( v15[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v9 + 16) )
      __fastfail(3u);
    v15[1] = (struct _VIDMM_GLOBAL_ALLOC *)v16;
    v9[16] = v16;
  }
  v17 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  Blink = a5->Blink;
  *((_QWORD *)a3 + 1) = a5;
  *((_QWORD *)a3 + 2) = Blink;
  if ( Blink->Flink != a5 )
    __fastfail(3u);
  Blink->Flink = v17;
  a5->Blink = v17;
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
