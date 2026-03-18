/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C005DAFC
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A12C (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005D408 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  void *v6; // r8
  int v7; // edx
  ULONG Protect; // esi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  ULONG AllocationType; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((int *)this + 16);
  LOBYTE(a4) = a2;
  if ( (_DWORD)v4 )
  {
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v4 - 4);
    if ( (_DWORD)v4 == 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateUnlockAgingOnTransition(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        this);
      v14 = 3LL;
      goto LABEL_12;
    }
    if ( (_DWORD)v4 != 5 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, a2, a3, a4);
      v17[5] = 0LL;
      v17[7] = 0LL;
      v17[3] = 270LL;
      v17[4] = 52LL;
      v17[6] = v4;
      WdLogEvent5_WdCriticalError(v17);
      return 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, this);
LABEL_11:
    v14 = 1LL;
LABEL_12:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v14);
    return 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v6;
  v7 = **(_DWORD **)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(v7 - 3) <= 3 )
    goto LABEL_11;
  BaseAddress = v6;
  Protect = 1028;
  if ( v7 == 2 )
    Protect = 4;
  v9 = 8392704;
  if ( v7 == 2 )
    v9 = 4096;
  *((_DWORD *)this + 20) = v9;
  if ( (_BYTE)a4 )
    *((_DWORD *)this + 20) = v9 | 0x800000;
  v11 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          *((_DWORD *)this + 20),
          Protect);
  if ( v11 >= 0 )
    goto LABEL_10;
  v18 = *((_DWORD *)this + 20);
  if ( (v18 & 0x800000) != 0 )
  {
    AllocationType = v18 & 0xFF7FFFFF;
    *((_DWORD *)this + 20) = AllocationType;
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, Protect);
  }
  if ( v11 >= 0 )
  {
LABEL_10:
    v13 = bTracingEnabled == 0;
    *((_BYTE *)this + 84) = 1;
    if ( !v13 )
    {
      v21 = *((_QWORD *)this + 9);
      v22 = *(_QWORD *)(v21 + 32);
      if ( (unsigned int)(*(_DWORD *)v22 - 3) > 3 )
        v23 = *((_QWORD *)this + 4);
      else
        v23 = *(_QWORD *)(v21 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL),
          &EventCreateProcessAllocationDetails,
          v12,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) + 8LL) + 8LL),
          (char)this,
          RegionSize,
          v23);
    }
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_1C002F5BC);
  v20 = WdLogNewEntry5_WdLowResource(v10);
  *(_QWORD *)(v20 + 24) = 947LL;
  WdLogEvent5_WdLowResource(v20);
  return (unsigned int)v11;
}
