/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00460A8 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0038728 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0040CE8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005F06C (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        struct _RTL_BALANCED_NODE **this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct VIDMM_VAD *v3; // rbx
  char *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // edi
  struct _LIST_ENTRY **v8; // rdx
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  CVirtualAddressAllocator *v12; // rax
  char *v13; // rdi
  struct _RTL_BALANCED_NODE **v14; // rdi
  char *v15; // rcx
  __int64 v16; // rdx
  char **v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rdi
  struct _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // rdx
  struct VIDMM_VAD **v21; // rcx
  __int64 v22; // rdx
  char **v23; // rcx
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_pqxx(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      *((_DWORD *)a2 + 18),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  v5 = (char *)v3 + 56;
  if ( *((_QWORD *)v3 + 7) )
  {
    v22 = *(_QWORD *)v5;
    v23 = (char **)*((_QWORD *)v3 + 8);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v23 != v5 )
      __fastfail(3u);
    *v23 = (char *)v22;
    *(_QWORD *)(v22 + 8) = v23;
    *(_QWORD *)v5 = 0LL;
  }
  RtlAvlRemoveNode(this + 4, v3);
  *((_DWORD *)v3 + 18) &= 0xFFFFFFF0;
  v7 = 0;
  if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (struct _LIST_ENTRY **)((char *)v3 + 16 * v7 + 96);
        if ( *v8 == (struct _LIST_ENTRY *)v8 )
          break;
        CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, *v8, 0, 1);
      }
      ++v7;
    }
    while ( v7 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
  }
  v9 = (__int64 **)((char *)v3 + 80);
  while ( 1 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == (__int64 *)v9 )
      break;
    *(_QWORD *)v10[2] = 0LL;
    *v10 = 0LL;
    v10[1] = 0LL;
  }
  v12 = (CVirtualAddressAllocator *)*((_QWORD *)v3 + 6);
  if ( v12 != (CVirtualAddressAllocator *)(this + 1) )
  {
    v13 = (char *)v12 - 40;
    if ( *((_QWORD *)v3 + 3) == *((_QWORD *)v12 - 1) && (*((_DWORD *)v13 + 18) & 0xF) == 1 )
    {
      *((_QWORD *)v13 + 4) = *((_QWORD *)v3 + 4);
      v20 = *((_QWORD *)v3 + 5);
      v21 = (struct VIDMM_VAD **)*((_QWORD *)v3 + 6);
      if ( *(struct VIDMM_VAD **)(v20 + 8) != (struct VIDMM_VAD *)((char *)v3 + 40)
        || *v21 != (struct VIDMM_VAD *)((char *)v3 + 40) )
      {
        __fastfail(3u);
      }
      *v21 = (struct VIDMM_VAD *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      CVirtualAddressAllocator::FreeVad(v3);
      v3 = (struct VIDMM_VAD *)v13;
      RtlAvlRemoveNode(this + 3, v13);
      *((_DWORD *)v13 + 18) &= 0xFFFFFFF0;
    }
  }
  v14 = (struct _RTL_BALANCED_NODE **)*((_QWORD *)v3 + 5);
  v15 = (char *)v3 + 40;
  if ( v14 != this + 1 && *((struct _RTL_BALANCED_NODE **)v3 + 4) == *(v14 - 2) && ((_DWORD)v14[4] & 0xF) == 1 )
  {
    *(v14 - 2) = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v3 + 3);
    v16 = *(_QWORD *)v15;
    v17 = (char **)*((_QWORD *)v3 + 6);
    if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
      __fastfail(3u);
    *v17 = (char *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    CVirtualAddressAllocator::FreeVad(v3);
    v3 = (struct VIDMM_VAD *)(v14 - 5);
    RtlAvlRemoveNode(this + 3, v14 - 5);
    *((_DWORD *)v14 + 8) &= 0xFFFFFFF0;
  }
  LOBYTE(v6) = 0;
  v18 = this[3];
  v24 = *((_QWORD *)v3 + 4) - *((_QWORD *)v3 + 3);
  if ( v18 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v24, v18) < 0 )
      {
        v19 = v18->Children[0];
        if ( !v18->Children[0] )
        {
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v19 = v18->Children[1];
        if ( !v19 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      v18 = v19;
    }
  }
  RtlAvlInsertNodeEx(this + 3, v18, v6, v3);
  *((_DWORD *)v3 + 18) = *((_DWORD *)v3 + 18) & 0xFFFFE7F0 | 1;
}
