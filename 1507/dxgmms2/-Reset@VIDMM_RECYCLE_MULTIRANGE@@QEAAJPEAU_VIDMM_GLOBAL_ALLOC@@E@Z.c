/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0069158
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00690F0 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005C0F0 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0067D74 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006AE64 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
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
  __int64 v11; // rdi
  ULONG Protect; // ebx
  int v13; // edx
  int v14; // eax
  void *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  PVOID v24; // [rsp+30h] [rbp-10h] BYREF
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
  {
LABEL_2:
    LODWORD(v11) = -1071775472;
LABEL_18:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(v9, &EventPerformanceWarning, v10, 18);
    goto LABEL_21;
  }
  Protect = 4;
  v13 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  v14 = 1028;
  if ( (unsigned int)(v13 - 3) > 3 )
  {
    if ( v13 == 2 )
      v14 = 4;
    Protect = v14;
    v15 = (void *)*((_QWORD *)this + 6);
  }
  else
  {
    if ( v13 == 3 )
      Protect = 1028;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1u);
    if ( !*((_BYTE *)this + 152) )
      goto LABEL_2;
    v15 = (void *)*((_QWORD *)this + 20);
    if ( !v15 )
      goto LABEL_2;
    v4 = 1;
  }
  BaseAddress = v15;
  v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
  v11 = v16;
  if ( v16 >= 0 )
  {
    VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
    if ( a3 && !v4 )
    {
      v24 = BaseAddress;
      NumberOfBytesToUnlock = RegionSize;
      v19 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v24, &NumberOfBytesToUnlock, 1u);
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20);
      v22[3] = v24;
      v22[4] = NumberOfBytesToUnlock;
      v22[5] = v19;
      WdLogEvent5_WdEvent(v22);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v11;
    WdLogEvent5_WdError(v18);
  }
  if ( (_DWORD)v11 == -1071775472 )
    goto LABEL_18;
LABEL_21:
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v11;
}
