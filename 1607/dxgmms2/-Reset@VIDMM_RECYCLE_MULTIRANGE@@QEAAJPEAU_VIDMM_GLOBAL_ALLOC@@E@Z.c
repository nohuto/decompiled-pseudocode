/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C005FD90 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00675C8 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0069A54 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0069B04 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  __int64 v3; // r9
  int v4; // r14d
  char v5; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // si
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // r12
  int v14; // eax
  __int64 v15; // r15
  ULONG Protect; // ebx
  int v17; // edx
  int v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  PVOID v34; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+38h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v37; // [rsp+88h] [rbp+48h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  v37 = a2;
  v3 = *((_QWORD *)this + 5);
  v4 = 0;
  BaseAddress = 0LL;
  v5 = a3;
  RegionSize = v3 - *((_QWORD *)this + 6);
  v7 = WdLogNewEntry5_WdEvent(this, a2, a3, RegionSize);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  if ( *((_BYTE *)this + 153) )
    goto LABEL_26;
  v10 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v12 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 1);
  do
  {
    if ( *((_DWORD *)NextRange + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, NextRange);
      v14 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(NextRange);
      v15 = v14;
      if ( v14 < 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v12);
        *(_QWORD *)(v32 + 24) = NextRange;
        *(_QWORD *)(v32 + 32) = v15;
        WdLogEvent5_WdWarning(v32);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v13, NextRange);
        v10 = 1;
      }
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      v10 = 1;
    else
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  Protect = 4;
  v17 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  v18 = 1028;
  if ( (unsigned int)(v17 - 3) <= 3 )
  {
    if ( v17 == 3 )
      Protect = 1028;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1);
    if ( *((_BYTE *)this + 152) )
    {
      v8 = *((_QWORD *)this + 20);
      if ( v8 )
      {
        v4 = 1;
        BaseAddress = (PVOID)(*((_QWORD *)this + 21) + v8);
        goto LABEL_13;
      }
    }
LABEL_26:
    LODWORD(v24) = -1071775472;
LABEL_27:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v8, &EventPerformanceWarning, v9, 18);
    goto LABEL_16;
  }
  if ( v17 == 2 )
    v18 = 4;
  Protect = v18;
  BaseAddress = (PVOID)*((_QWORD *)this + 6);
LABEL_13:
  v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
  v24 = v19;
  if ( v19 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v21, v20, v22, v23);
    *(_QWORD *)(v33 + 24) = v24;
    WdLogEvent5_WdError(v33);
  }
  else
  {
    VidMmiSetPriorityForMemoryPages(v37, BaseAddress, RegionSize);
    if ( v5 && !v4 )
    {
      v34 = BaseAddress;
      NumberOfBytesToUnlock = RegionSize;
      v26 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, &NumberOfBytesToUnlock, 1u);
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
      v31[3] = v34;
      v31[4] = NumberOfBytesToUnlock;
      v31[5] = v26;
      WdLogEvent5_WdEvent(v31);
    }
  }
  if ( (_DWORD)v24 == -1071775472 )
    goto LABEL_27;
LABEL_16:
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v24;
}
