/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C0040228
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00401E0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0069A54 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0069B04 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  ULONG_PTR v5; // r8
  VIDMM_RECYCLE_MULTIRANGE *v6; // rbx
  ULONG Protect; // edi
  int v8; // edx
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v15; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v6 = this;
  BaseAddress = 0LL;
  RegionSize = v5;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, v5, a4) + 24) = this;
    v5 = RegionSize;
  }
  if ( *((_BYTE *)v6 + 153) )
    goto LABEL_14;
  Protect = 4;
  v8 = **(_DWORD **)(*((_QWORD *)v6 + 10) + 32LL);
  v9 = 1028;
  if ( (unsigned int)(v8 - 3) <= 3 )
  {
    if ( v8 == 3 )
      Protect = 1028;
    VIDMM_RECYCLE_MULTIRANGE::Map(v6, 0LL, v5, 1);
    if ( *((_BYTE *)v6 + 152) )
    {
      this = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v6 + 20);
      if ( this )
      {
        v4 = 1;
        BaseAddress = (char *)this + *((_QWORD *)v6 + 21);
        goto LABEL_8;
      }
    }
LABEL_14:
    LODWORD(v13) = -1071775472;
LABEL_15:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((__int64)this, &EventPerformanceWarning, v5, 18);
    goto LABEL_11;
  }
  if ( v8 == 2 )
    v9 = 4;
  Protect = v9;
  BaseAddress = (PVOID)*((_QWORD *)v6 + 6);
LABEL_8:
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
  v13 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdEvent(this, v11, v5, v12);
    *(_QWORD *)(v15 + 24) = v13;
    WdLogEvent5_WdEvent(v15);
  }
  if ( (_DWORD)v13 == -1071775472 )
    goto LABEL_15;
LABEL_11:
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(v6);
  return (unsigned int)v13;
}
