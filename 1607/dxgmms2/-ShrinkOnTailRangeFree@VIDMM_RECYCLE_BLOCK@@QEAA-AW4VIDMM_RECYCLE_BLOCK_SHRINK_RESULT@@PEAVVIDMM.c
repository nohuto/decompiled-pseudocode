/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DAD0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0061DC0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00101D0 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F7CC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F8D4 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061180 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095EB0 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(_QWORD *a1, __int64 a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  __int64 v5; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v6; // r12
  void *v7; // rbp
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  bool v13; // al
  bool v14; // r15
  bool v15; // al
  struct VIDMM_RECYCLE_RANGE *v17; // r10
  struct VIDMM_RECYCLE_RANGE *v18; // r11
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  void *v20; // rax
  ULONG_PTR v21; // r8
  char v22; // bp
  unsigned int v23; // r14d
  VIDMM_RECYCLE_RANGE *v24; // rdi
  VIDMM_RECYCLE_RANGE *v25; // r15
  _QWORD *v26; // rcx
  char v27; // bl
  struct VIDMM_RECYCLE_RANGE *v28; // rax
  struct VIDMM_RECYCLE_RANGE *v29; // rsi
  NTSTATUS v30; // eax
  __int64 v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  unsigned int v34; // ebx
  _QWORD *v35; // rax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 136);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
  v7 = (void *)a1[5];
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v4,
                               (unsigned int)(*(_DWORD *)v4 - 5) <= 1);
  v12 = v10 - (_QWORD)v7;
  v13 = v10 - (__int64)v7 > SmallAllocationBlockSize;
  v14 = v5 && *(_QWORD *)(v5 + 40) == v10 && v13;
  v15 = !v5 && *(_QWORD *)(a2 + 40) == v10 && v13;
  if ( !v14 && !v15 )
    return 0LL;
  BaseAddress = 0LL;
  if ( v14 )
  {
    v17 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v18 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72);
    NextRange = v17;
    while ( !*((_DWORD *)NextRange + 16) )
    {
      if ( NextRange == v18 )
        LOBYTE(v11) = 1;
      else
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      if ( (_BYTE)v11 )
      {
        v20 = (void *)*((_QWORD *)v17 + 4);
        goto LABEL_19;
      }
    }
    return 0LL;
  }
  v20 = *(void **)(a2 + 32);
LABEL_19:
  v21 = v10 - (_QWORD)v20;
  BaseAddress = v20;
  RegionSize = v21;
  if ( v20 == v7 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 0;
    v30 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v31 = v30;
    if ( v30 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v12);
      v32[3] = BaseAddress;
      v32[4] = a1;
      v32[5] = v31;
      WdLogEvent5_WdWarning(v32);
      return 0LL;
    }
    a1[6] = BaseAddress;
  }
  if ( v14 )
  {
    v23 = *(_DWORD *)(v5 + 88);
    v24 = *(VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v25 = *(VIDMM_RECYCLE_RANGE **)(v5 + 72);
    if ( v23 == 3 && g_IsInternalRelease )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v9, v21, v11);
      v33[5] = 0LL;
      v33[6] = 0LL;
      v33[7] = 0LL;
      v33[3] = 270LL;
      v33[4] = 9LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v23, v5);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct VIDMM_RECYCLE_MULTIRANGE *)v5);
    v26 = (_QWORD *)*((_QWORD *)v24 + 16);
    v27 = 0;
    *v26 = a1 + 9;
    a1[10] = v26;
    while ( 1 )
    {
      v28 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
      if ( v24 == v25 )
        v27 = 1;
      v29 = v28;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, v24);
      if ( v27 )
        break;
      v24 = v29;
    }
  }
  else
  {
    v34 = *(_DWORD *)(a2 + 88);
    if ( v34 == 3 && g_IsInternalRelease )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v9, v21, v11);
      v35[5] = 0LL;
      v35[6] = 0LL;
      v35[7] = 0LL;
      v35[3] = 270LL;
      v35[4] = 9LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v34, a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct VIDMM_RECYCLE_RANGE *)a2);
  }
  return (unsigned int)(v22 != 0) + 1;
}
