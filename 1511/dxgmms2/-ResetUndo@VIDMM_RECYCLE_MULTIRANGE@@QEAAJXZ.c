/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00384E8
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00384A0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0061BB8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061C68 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v1; // rdx
  int v2; // esi
  __int64 v3; // r8
  ULONG_PTR v5; // r8
  __int64 v6; // rbx
  ULONG Protect; // ebx
  int v8; // r9d
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  v1 = (void *)*((_QWORD *)this + 6);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  BaseAddress = 0LL;
  v5 = v3 - (_QWORD)v1;
  RegionSize = v5;
  if ( *((_BYTE *)this + 153) )
  {
LABEL_2:
    LODWORD(v6) = -1071775472;
LABEL_15:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((__int64)this, &EventPerformanceWarning, v5, 18);
    goto LABEL_18;
  }
  Protect = 4;
  v8 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  v9 = 1028;
  if ( (unsigned int)(v8 - 3) > 3 )
  {
    BaseAddress = v1;
    if ( v8 == 2 )
      v9 = 4;
    Protect = v9;
  }
  else
  {
    if ( v8 == 3 )
      Protect = 1028;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, v5, 1);
    if ( !*((_BYTE *)this + 152) || !*((_QWORD *)this + 20) )
      goto LABEL_2;
    v2 = 1;
    BaseAddress = (PVOID)*((_QWORD *)this + 20);
  }
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v11 + 24) = v6;
    WdLogEvent5_WdError(v11);
  }
  if ( (_DWORD)v6 == -1071775472 )
    goto LABEL_15;
LABEL_18:
  if ( v2 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v6;
}
