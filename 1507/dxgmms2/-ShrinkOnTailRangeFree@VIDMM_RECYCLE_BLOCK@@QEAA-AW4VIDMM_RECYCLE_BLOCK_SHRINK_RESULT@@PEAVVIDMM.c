/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069EA0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0010878 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068E08 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(_QWORD *a1, __int64 a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  __int64 v6; // rbp
  VIDMM_RECYCLE_HEAP_MGR *v7; // r12
  void *v8; // rsi
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v10; // r8
  bool v11; // al
  bool v12; // r15
  bool v13; // al
  struct VIDMM_RECYCLE_RANGE *v14; // r10
  struct VIDMM_RECYCLE_RANGE *v15; // r11
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v17; // r9
  void *v18; // rax
  char v19; // si
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rcx
  VIDMM_RECYCLE_RANGE *v27; // rdi
  VIDMM_RECYCLE_RANGE *v28; // r14
  _QWORD *v29; // rcx
  char v30; // bl
  struct VIDMM_RECYCLE_RANGE *v31; // rax
  __int64 v32; // r8
  struct VIDMM_RECYCLE_RANGE *v33; // rbp
  __int64 v34; // r8
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 136);
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
  v8 = (void *)a1[5];
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v4,
                               (unsigned int)(*(_DWORD *)v4 - 5) <= 1);
  v11 = v10 - (__int64)v8 > SmallAllocationBlockSize;
  v12 = v6 && *(_QWORD *)(v6 + 40) == v10 && v11;
  v13 = !v6 && *(_QWORD *)(a2 + 40) == v10 && v11;
  if ( !v12 && !v13 )
    return 0LL;
  BaseAddress = 0LL;
  if ( v12 )
  {
    v14 = *(struct VIDMM_RECYCLE_RANGE **)(v6 + 64);
    v15 = *(struct VIDMM_RECYCLE_RANGE **)(v6 + 72);
    NextRange = v14;
    while ( !*((_DWORD *)NextRange + 16) )
    {
      if ( NextRange == v15 )
        v17 = 1;
      else
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      if ( v17 )
      {
        v18 = (void *)*((_QWORD *)v14 + 4);
        goto LABEL_24;
      }
    }
    return 0LL;
  }
  v18 = *(void **)(a2 + 32);
LABEL_24:
  BaseAddress = v18;
  RegionSize = v10 - (_QWORD)v18;
  if ( v18 != v8 )
  {
    v19 = 0;
    v20 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v24 = v20;
    if ( v20 >= 0 )
    {
      a1[6] = BaseAddress;
      goto LABEL_29;
    }
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v25[3] = BaseAddress;
    v25[4] = a1;
    v25[5] = v24;
    WdLogEvent5_WdWarning(v25);
    return 0LL;
  }
  v19 = 1;
LABEL_29:
  v26 = a1[4];
  if ( v12 )
  {
    v27 = *(VIDMM_RECYCLE_RANGE **)(v6 + 64);
    v28 = *(VIDMM_RECYCLE_RANGE **)(v6 + 72);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v26, *(unsigned int *)(v6 + 88), v6);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v7, (struct _SLIST_ENTRY *)v6);
    v29 = (_QWORD *)*((_QWORD *)v27 + 16);
    *v29 = a1 + 9;
    a1[10] = v29;
    v30 = 0;
    while ( 1 )
    {
      v31 = VIDMM_RECYCLE_RANGE::GetNextRange(v27);
      if ( v27 == v28 )
        v30 = 1;
      v33 = v31;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, (struct _SLIST_ENTRY *)v27, v32);
      if ( v30 )
        break;
      v27 = v33;
    }
  }
  else
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v26, *(unsigned int *)(a2 + 88), a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, (struct _SLIST_ENTRY *)a2, v34);
  }
  return (unsigned int)(v19 != 0) + 1;
}
