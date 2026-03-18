/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0065BE4
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0065B00 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     Template_qpxp @ 0x1C0010BAC (Template_qpxp.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006A5A4 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006AF54 (-UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r9
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  void *v8; // r8
  int v9; // edx
  ULONG Protect; // esi
  int v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  __int64 v14; // r8
  int v15; // eax
  ULONG AllocationType; // eax
  __int64 v17; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((int *)this + 16);
  v4 = a2;
  if ( !(_DWORD)v2 )
  {
    v8 = (void *)*((_QWORD *)this + 4);
    RegionSize = *((_QWORD *)this + 5) - (_QWORD)v8;
    v9 = **(_DWORD **)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(v9 - 3) > 3 )
    {
      BaseAddress = v8;
      Protect = 1028;
      if ( v9 == 2 )
        Protect = 4;
      v11 = 8392704;
      if ( v9 == 2 )
        v11 = 4096;
      *((_DWORD *)this + 20) = v11;
      if ( v4 )
        *((_DWORD *)this + 20) = v11 | 0x800000;
      v13 = ZwAllocateVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseAddress,
              0LL,
              &RegionSize,
              *((_DWORD *)this + 20),
              Protect);
      if ( v13 < 0 )
      {
        v15 = *((_DWORD *)this + 20);
        if ( (v15 & 0x800000) != 0 )
        {
          AllocationType = v15 & 0xFF7FFFFF;
          *((_DWORD *)this + 20) = AllocationType;
          v13 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  &RegionSize,
                  AllocationType,
                  Protect);
        }
        if ( v13 < 0 )
        {
          _InterlockedIncrement(&dword_1C00275AC);
          v17 = WdLogNewEntry5_WdLowResource(v12);
          *(_QWORD *)(v17 + 24) = 947LL;
          WdLogEvent5_WdLowResource(v17);
          return (unsigned int)v13;
        }
      }
      v19 = bTracingEnabled == 0;
      *((_BYTE *)this + 84) = 1;
      if ( !v19 )
      {
        v20 = *((_QWORD *)this + 9);
        v21 = *(_QWORD *)(v20 + 32);
        if ( (unsigned int)(*(_DWORD *)v21 - 3) > 3 )
          v22 = *((_QWORD *)this + 4);
        else
          v22 = *(_QWORD *)(v20 + 56);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_qpxp(
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL),
            &EventCreateProcessAllocationDetails,
            v14,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 8LL),
            (char)this,
            RegionSize,
            v22);
      }
    }
    goto LABEL_25;
  }
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v2 - 4);
  if ( (_DWORD)v2 == 4 )
  {
    VIDMM_RECYCLE_HEAP_MGR::UpdateUnlockAgingOnTransition(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
      this);
    v7 = 3LL;
LABEL_26:
    VIDMM_RECYCLE_RANGE::Transition(this, v7);
    return 0LL;
  }
  if ( (_DWORD)v2 == 5 )
  {
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, this);
LABEL_25:
    v7 = 1LL;
    goto LABEL_26;
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
  v6[5] = 0LL;
  v6[7] = 0LL;
  v6[3] = 270LL;
  v6[4] = 52LL;
  v6[6] = v2;
  WdLogEvent5_WdCriticalError(v6);
  return 0LL;
}
