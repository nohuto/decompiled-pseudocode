/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C009EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, PVOID *a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  void *CurrentProcess; // rax
  __int64 v12; // rax

  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v5 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    CurrentProcess = (void *)PsGetCurrentProcess(v7);
    VidMmUnmapViewAsync(CurrentProcess, a2[4], a3);
  }
  else
  {
    v12 = PsGetCurrentProcess(v7);
    MmUnmapViewOfSection(v12, a3);
  }
}
