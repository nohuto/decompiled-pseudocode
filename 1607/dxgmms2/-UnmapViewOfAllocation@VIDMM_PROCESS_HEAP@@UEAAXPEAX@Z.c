/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C009EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, PVOID *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v9; // eax
  void *CurrentProcess; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v3 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6, v7);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 30LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v5);
      VidMmUnmapViewAsync(CurrentProcess, a2[4], a2[11]);
    }
    else
    {
      v11 = PsGetCurrentProcess(v5);
      MmUnmapViewOfSection(v11, a2[11]);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    a2[11] = 0LL;
    return;
  }
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, a2[4], a2[11]);
    else
      MmUnmapViewInSystemSpace(a2[11]);
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  v12 = WdLogNewEntry5_WdAssertion(v5, v4);
  *(_QWORD *)(v12 + 24) = 2495LL;
  WdLogEvent5_WdAssertion(v12);
}
