/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14
 * Callers:
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004DB7C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005FB80 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct VIDMM_VAD *v3; // rbx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx
  unsigned int v8; // edi
  struct _LIST_ENTRY **v9; // rdx
  __int64 **v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  struct VIDMM_VAD **v15; // rcx
  char *v16; // rcx
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  char **v19; // rax
  int v20; // [rsp+20h] [rbp-28h]

  v3 = a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    v20 = *((_DWORD *)a2 + 18);
    Template_pqxx(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v20,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  v5 = (char *)v3 + 56;
  if ( *((_QWORD *)v3 + 7) )
  {
    v6 = *(_QWORD *)v5;
    v7 = (char **)*((_QWORD *)v3 + 8);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v5 = 0LL;
  }
  RtlAvlRemoveNode((char *)this + 32, v3);
  *((_DWORD *)v3 + 18) &= 0xFFFFFFF0;
  v8 = 0;
  if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = (struct _LIST_ENTRY **)((char *)v3 + 16 * v8 + 96);
        if ( *v9 == (struct _LIST_ENTRY *)v9 )
          break;
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, *v9, 0);
      }
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
  }
  v10 = (__int64 **)((char *)v3 + 80);
  while ( 1 )
  {
    v11 = *v10;
    v12 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    if ( v11 == (__int64 *)v10 )
      break;
    *(_QWORD *)v11[2] = 0LL;
    *v11 = 0LL;
    v11[1] = 0LL;
  }
  v13 = (_DWORD *)*((_QWORD *)v3 + 6);
  if ( v13 != (_DWORD *)((char *)this + 8) && *((_QWORD *)v3 + 3) == *((_QWORD *)v13 - 1) && (v13[8] & 0xF) == 1 )
  {
    *((_QWORD *)v13 - 1) = *((_QWORD *)v3 + 4);
    v14 = *((_QWORD *)v3 + 5);
    v15 = (struct VIDMM_VAD **)*((_QWORD *)v3 + 6);
    if ( *(struct VIDMM_VAD **)(v14 + 8) != (struct VIDMM_VAD *)((char *)v3 + 40)
      || *v15 != (struct VIDMM_VAD *)((char *)v3 + 40) )
    {
      __fastfail(3u);
    }
    *v15 = (struct VIDMM_VAD *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    CVirtualAddressAllocator::FreeVad(v3);
    v3 = (struct VIDMM_VAD *)(v13 - 10);
    RtlAvlRemoveNode((char *)this + 24, v13 - 10);
    v13[8] &= 0xFFFFFFF0;
  }
  v16 = (char *)v3 + 40;
  v17 = (_DWORD *)*((_QWORD *)v3 + 5);
  if ( v17 != (_DWORD *)((char *)this + 8) && *((_QWORD *)v3 + 4) == *((_QWORD *)v17 - 2) && (v17[8] & 0xF) == 1 )
  {
    *((_QWORD *)v17 - 2) = *((_QWORD *)v3 + 3);
    v18 = *(_QWORD *)v16;
    v19 = (char **)*((_QWORD *)v3 + 6);
    if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || *v19 != v16 )
      __fastfail(3u);
    *v19 = (char *)v18;
    *(_QWORD *)(v18 + 8) = v19;
    CVirtualAddressAllocator::FreeVad(v3);
    v3 = (struct VIDMM_VAD *)(v17 - 10);
    RtlAvlRemoveNode((char *)this + 24, v17 - 10);
    v17[8] &= 0xFFFFFFF0;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, v3);
}
