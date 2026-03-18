/*
 * XREFs of ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0092F8C
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::AddVaRangeToVadWithFix(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY *a5)
{
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 *v9; // rdx
  _QWORD *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  _QWORD *i; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx

  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner((int)(*((_DWORD *)a3 + 16) << 28) >> 28, *((_QWORD *)a3 + 7));
  if ( VidMmAllocFromOwner )
  {
    v9 = *VidMmAllocFromOwner;
    v10 = (_QWORD *)(v6 + 24);
    v11 = (__int64 *)(VidMmAllocFromOwner + 16);
    v12 = *v9;
    v13 = *v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      __fastfail(3u);
    *v10 = v13;
    *(_QWORD *)(v6 + 32) = v11;
    *(_QWORD *)(v13 + 8) = v10;
    *v11 = (__int64)v10;
    if ( *(__int64 *)(v6 + 80) < 0 )
    {
      for ( i = *(_QWORD **)(v12 + 192); i != (_QWORD *)(v12 + 192); i = (_QWORD *)*i )
      {
        if ( *(_QWORD *)(v6 + 72) <= i[4] )
          break;
      }
      v15 = (_QWORD *)i[1];
      v16 = (_QWORD *)(v6 + 40);
      if ( (_QWORD *)*v15 != i )
        __fastfail(3u);
      *v16 = i;
      *(_QWORD *)(v6 + 48) = v15;
      *v15 = v16;
      i[1] = v16;
    }
  }
  v17 = (struct _LIST_ENTRY *)(v6 + 8);
  Blink = a5->Blink;
  if ( Blink->Flink != a5 )
    __fastfail(3u);
  v17->Flink = a5;
  *(_QWORD *)(v6 + 16) = Blink;
  Blink->Flink = v17;
  a5->Blink = v17;
  ++*(_DWORD *)(v7 + 76);
  if ( (*(_BYTE *)(v6 + 88) & 4) != 0 )
  {
    v19 = (_QWORD *)(v7 + 56);
    if ( !*(_QWORD *)(v7 + 56) )
    {
      v20 = (_QWORD *)(v8 + 104);
      v21 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v21 + 8) != v8 + 104 )
        __fastfail(3u);
      *v19 = v21;
      *(_QWORD *)(v7 + 64) = v20;
      *(_QWORD *)(v21 + 8) = v19;
      *v20 = v19;
    }
  }
}
