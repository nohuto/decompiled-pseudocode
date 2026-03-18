/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0061FFC
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005F310 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char v6; // r10
  __int64 v7; // r8
  void *v8; // rdx
  ULONG Protect; // esi
  int v10; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  bool v13; // zf
  __int64 v14; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // eax
  ULONG AllocationType; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v5 = *((int *)this + 16);
  v6 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  LOBYTE(a4) = *(_BYTE *)(v7 + 16);
  if ( (_DWORD)v5 )
  {
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v5 - 4);
    if ( (_DWORD)v5 == 4 )
    {
      v17 = *(VIDMM_RECYCLE_HEAP_MGR **)(v7 + 8);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, this, v7, a4);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v17, this, v18, v19);
      v14 = 3LL;
      goto LABEL_13;
    }
    if ( (_DWORD)v5 != 5 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, a2, v7, a4);
      v20[5] = 0LL;
      v20[7] = 0LL;
      v20[3] = 270LL;
      v20[4] = 52LL;
      v20[6] = v5;
      WdLogEvent5_WdCriticalError(v20);
      return 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, this, v7, a4);
LABEL_12:
    v14 = 1LL;
LABEL_13:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v14, v7, a4);
    return 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v8;
  if ( (unsigned int)(*(_DWORD *)v7 - 3) <= 3 )
    goto LABEL_12;
  Protect = 1028;
  if ( *(_DWORD *)v7 == 2 )
  {
    Protect = 4;
  }
  else
  {
    v10 = 8392704;
    if ( !(_BYTE)a4 )
      goto LABEL_6;
  }
  v10 = 4096;
LABEL_6:
  *((_DWORD *)this + 20) = v10;
  BaseAddress = v8;
  if ( v6 )
    *((_DWORD *)this + 20) = v10 | 0x800000;
  if ( (_BYTE)a4 )
    *((_DWORD *)this + 20) |= 0x20400000u;
  v12 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          *((_DWORD *)this + 20),
          Protect);
  if ( v12 >= 0 )
    goto LABEL_11;
  v21 = *((_DWORD *)this + 20);
  if ( (v21 & 0x800000) != 0 )
  {
    AllocationType = v21 & 0xFF7FFFFF;
    *((_DWORD *)this + 20) = AllocationType;
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, Protect);
  }
  if ( v12 >= 0 )
  {
LABEL_11:
    v13 = bTracingEnabled == 0;
    *((_BYTE *)this + 84) = 1;
    if ( !v13 )
    {
      v24 = *((_QWORD *)this + 9);
      v25 = *(_QWORD *)(v24 + 32);
      if ( (unsigned int)(*(_DWORD *)v25 - 3) > 3 )
        v26 = *((_QWORD *)this + 4);
      else
        v26 = *(_QWORD *)(v24 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL),
          &EventCreateProcessAllocationDetails,
          v7,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL) + 8LL),
          (char)this,
          RegionSize,
          v26);
    }
    goto LABEL_12;
  }
  _InterlockedIncrement(&dword_1C003563C);
  v23 = WdLogNewEntry5_WdLowResource(v11);
  *(_QWORD *)(v23 + 24) = 975LL;
  WdLogEvent5_WdLowResource(v23);
  return (unsigned int)v12;
}
