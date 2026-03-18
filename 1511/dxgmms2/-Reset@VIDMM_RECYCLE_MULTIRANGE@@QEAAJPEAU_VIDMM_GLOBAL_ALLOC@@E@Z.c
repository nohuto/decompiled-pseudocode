/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005BB54
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C005A450 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005E5EC (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0061BB8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061C68 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  __int64 v3; // r9
  int v4; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG Protect; // ebx
  int v12; // edx
  int v13; // eax
  void *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  PVOID v26; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+38h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 5);
  v4 = 0;
  BaseAddress = 0LL;
  RegionSize = v3 - *((_QWORD *)this + 6);
  v8 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v8 + 24) = this;
  WdLogEvent5_WdEvent(v8);
  if ( *((_BYTE *)this + 153) )
    goto LABEL_19;
  Protect = 4;
  v12 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  v13 = 1028;
  if ( (unsigned int)(v12 - 3) <= 3 )
  {
    if ( v12 == 3 )
      Protect = 1028;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1);
    if ( *((_BYTE *)this + 152) )
    {
      v14 = (void *)*((_QWORD *)this + 20);
      if ( v14 )
      {
        v4 = 1;
        goto LABEL_6;
      }
    }
LABEL_19:
    LODWORD(v19) = -1071775472;
LABEL_20:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v9, &EventPerformanceWarning, v10, 18);
    goto LABEL_9;
  }
  if ( v12 == 2 )
    v13 = 4;
  Protect = v13;
  v14 = (void *)*((_QWORD *)this + 6);
LABEL_6:
  BaseAddress = v14;
  v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
  v19 = v15;
  if ( v15 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
    if ( a3 && !v4 )
    {
      v26 = BaseAddress;
      NumberOfBytesToUnlock = RegionSize;
      v21 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &NumberOfBytesToUnlock, 1u);
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
      v24[3] = v26;
      v24[4] = NumberOfBytesToUnlock;
      v24[5] = v21;
      WdLogEvent5_WdEvent(v24);
    }
  }
  if ( (_DWORD)v19 == -1071775472 )
    goto LABEL_20;
LABEL_9:
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v19;
}
