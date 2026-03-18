/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00599B4
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005D8C4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011D50 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A014 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00829D8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
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
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rcx
  VIDMM_RECYCLE_RANGE *v25; // rdi
  VIDMM_RECYCLE_RANGE *v26; // r14
  _QWORD *v27; // rcx
  char v28; // bl
  struct VIDMM_RECYCLE_RANGE *v29; // rax
  struct VIDMM_RECYCLE_RANGE *v30; // rbp
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
    v22 = v20;
    if ( v20 >= 0 )
    {
      a1[6] = BaseAddress;
      goto LABEL_29;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21);
    v23[3] = BaseAddress;
    v23[4] = a1;
    v23[5] = v22;
    WdLogEvent5_WdWarning(v23);
    return 0LL;
  }
  v19 = 1;
LABEL_29:
  v24 = a1[4];
  if ( v12 )
  {
    v25 = *(VIDMM_RECYCLE_RANGE **)(v6 + 64);
    v26 = *(VIDMM_RECYCLE_RANGE **)(v6 + 72);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v24, *(unsigned int *)(v6 + 88), v6);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v7, (struct VIDMM_RECYCLE_MULTIRANGE *)v6);
    v27 = (_QWORD *)*((_QWORD *)v25 + 16);
    *v27 = a1 + 9;
    a1[10] = v27;
    v28 = 0;
    while ( 1 )
    {
      v29 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
      if ( v25 == v26 )
        v28 = 1;
      v30 = v29;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, v25);
      if ( v28 )
        break;
      v25 = v30;
    }
  }
  else
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v24, *(unsigned int *)(a2 + 88), a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v7, (struct VIDMM_RECYCLE_RANGE *)a2);
  }
  return (unsigned int)(v19 != 0) + 1;
}
