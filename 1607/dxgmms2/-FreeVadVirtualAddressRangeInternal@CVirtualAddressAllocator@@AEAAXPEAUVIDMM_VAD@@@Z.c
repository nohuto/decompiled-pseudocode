/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004E3BC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00478D8 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C004910C (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005AF90 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0094AF4 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct VIDMM_VAD *v3; // rdi
  CVirtualAddressAllocator *v4; // r14
  char *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // esi
  struct _LIST_ENTRY **v8; // rbx
  __int64 **v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  VIDMM_MAPPED_VA_RANGE *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  unsigned int v16; // ebx
  struct _LIST_ENTRY **v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // rdx
  struct VIDMM_VAD **v24; // rcx
  unsigned int *v25; // rbx
  char *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rcx
  char **v29; // rax
  struct _RTL_BALANCED_NODE *v30; // rbx
  struct _RTL_BALANCED_NODE *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-38h]
  __int64 v35; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  v4 = this;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
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
    v6 = *(_QWORD *)v5;
    this = (CVirtualAddressAllocator *)*((_QWORD *)v3 + 8);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(char **)this != v5 )
      __fastfail(3u);
    *(_QWORD *)this = v6;
    *(_QWORD *)(v6 + 8) = this;
    *(_QWORD *)v5 = 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    LODWORD(v34) = *((_DWORD *)v3 + 18);
    Template_pqxx((__int64)this, &DestroyGpuVirtualAddressRange, a3, v4, v34, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 4));
  }
  RtlAvlRemoveNode((char *)v4 + 32, v3);
  *((_DWORD *)v3 + 18) &= 0xFFFFFFF0;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v7 = 0;
    if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
    {
      do
      {
        while ( 1 )
        {
          v8 = (struct _LIST_ENTRY **)((char *)v3 + 32 * v7 + 96);
          if ( *v8 == (struct _LIST_ENTRY *)v8 )
            break;
          CVirtualAddressAllocator::RemoveVaRangeFromVad(v4, *v8, 0, 1u, 0);
        }
        v9 = (__int64 **)(v8 + 2);
        while ( *v9 != (__int64 *)v9 )
        {
          v10 = *v9;
          v11 = **v9;
          if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
            __fastfail(3u);
          *v9 = (__int64 *)v11;
          *(_QWORD *)(v11 + 8) = v9;
          v12 = (VIDMM_MAPPED_VA_RANGE *)(v10 - 1);
          *v10 = 0LL;
          v10[1] = 0LL;
          v13 = v10 + 2;
          *((_DWORD *)v12 + 16) &= ~0x2000u;
          if ( *v13 )
          {
            v14 = *v13;
            v15 = (_QWORD *)v13[1];
            if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
              __fastfail(3u);
            *v15 = v14;
            *(_QWORD *)(v14 + 8) = v15;
            *v13 = 0LL;
          }
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12);
        }
        ++v7;
      }
      while ( v7 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
    }
  }
  else
  {
    v16 = 0;
    if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
    {
      do
      {
        while ( 1 )
        {
          v17 = (struct _LIST_ENTRY **)((char *)v3 + 16 * v16 + 96);
          if ( *v17 == (struct _LIST_ENTRY *)v17 )
            break;
          CVirtualAddressAllocator::RemoveVaRangeFromVad(v4, *v17, 0, 1u, 0);
        }
        ++v16;
      }
      while ( v16 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
    }
  }
  v18 = (__int64 *)*((_QWORD *)v3 + 10);
  v19 = (__int64)v3 + 80;
  v20 = (_QWORD *)((char *)v3 + 80);
  v21 = *v18;
  if ( (struct VIDMM_VAD *)v18[1] != (struct VIDMM_VAD *)((char *)v3 + 80) )
LABEL_35:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *(__int64 **)(v21 + 8) != v18 )
      goto LABEL_35;
    *v20 = v21;
    *(_QWORD *)(v21 + 8) = v20;
    if ( v18 == (__int64 *)v19 )
      break;
    *(_QWORD *)v18[2] = 0LL;
    v20 = (_QWORD *)((char *)v3 + 80);
    *v18 = 0LL;
    v18[1] = 0LL;
    v18 = *(__int64 **)v19;
    v21 = **(_QWORD **)v19;
    if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
      goto LABEL_35;
  }
  v22 = (_DWORD *)*((_QWORD *)v3 + 6);
  if ( v22 != (_DWORD *)((char *)v4 + 8) && *((_QWORD *)v3 + 3) == *((_QWORD *)v22 - 1) && (v22[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(v4, (struct VIDMM_VAD *)(v22 - 10));
    *((_QWORD *)v22 - 1) = *((_QWORD *)v3 + 4);
    v23 = *((_QWORD *)v3 + 5);
    v24 = (struct VIDMM_VAD **)*((_QWORD *)v3 + 6);
    if ( *(struct VIDMM_VAD **)(v23 + 8) != (struct VIDMM_VAD *)((char *)v3 + 40)
      || *v24 != (struct VIDMM_VAD *)((char *)v3 + 40) )
    {
      __fastfail(3u);
    }
    *v24 = (struct VIDMM_VAD *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    CVirtualAddressAllocator::FreeVad(v3);
    v3 = (struct VIDMM_VAD *)(v22 - 10);
  }
  v25 = (unsigned int *)*((_QWORD *)v3 + 5);
  v26 = (char *)v3 + 40;
  if ( v25 != (unsigned int *)((char *)v4 + 8) )
  {
    v27 = *((_QWORD *)v25 - 2);
    if ( *((_QWORD *)v3 + 4) == v27 )
    {
      v19 = v25[8];
      if ( (v25[8] & 0xF) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        {
          LODWORD(v34) = v25[8];
          Template_pqxx(v27, &DestroyGpuVirtualAddressRange, v19, v4, v34, v27, *((_QWORD *)v25 - 1));
        }
        RtlAvlRemoveNode((char *)v4 + 24, v25 - 10);
        v25[8] &= 0xFFFFFFF0;
        *((_QWORD *)v25 - 2) = *((_QWORD *)v3 + 3);
        v28 = *(_QWORD *)v26;
        v29 = (char **)*((_QWORD *)v3 + 6);
        if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 || *v29 != v26 )
          __fastfail(3u);
        *v29 = (char *)v28;
        *(_QWORD *)(v28 + 8) = v29;
        CVirtualAddressAllocator::FreeVad(v3);
        v3 = (struct VIDMM_VAD *)(v25 - 10);
      }
    }
  }
  LOBYTE(v19) = 0;
  v30 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v4 + 3);
  v35 = *((_QWORD *)v3 + 4) - *((_QWORD *)v3 + 3);
  if ( v30 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v35, v30) < 0 )
      {
        v31 = v30->Children[0];
        if ( !v30->Children[0] )
        {
          LOBYTE(v19) = 0;
          break;
        }
      }
      else
      {
        v31 = v30->Children[1];
        if ( !v31 )
        {
          LOBYTE(v19) = 1;
          break;
        }
      }
      v30 = v31;
    }
  }
  RtlAvlInsertNodeEx((char *)v4 + 24, v30, v19, v3);
  v33 = *((_DWORD *)v3 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v3 + 18) = v33;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    LODWORD(v34) = v33;
    Template_pqxx(v33, &CreateGpuVirtualAddressRange, v32, v4, v34, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 4));
  }
}
