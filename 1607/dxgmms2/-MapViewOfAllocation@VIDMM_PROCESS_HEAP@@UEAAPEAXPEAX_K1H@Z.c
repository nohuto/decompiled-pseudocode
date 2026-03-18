/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C009E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  int v15; // r14d
  __int64 v16; // rbx
  void *v17; // r12
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  __int64 CurrentProcess; // rax
  char *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v29; // rax
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this) != v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v12, v13);
    v14[3] = 270LL;
    v14[4] = 30LL;
    v14[5] = 0LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  v15 = 4;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v16 = a3;
    v17 = (void *)a2[4];
    if ( ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1028;
  }
  else
  {
    v11 = a2[1];
    v16 = a3 + a2[2];
    v17 = *(void **)(v11 + 88);
    v18 = 4;
    if ( ((*(_DWORD *)(v11 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v18 = 1028;
    v15 = v18;
  }
  v31 = v16;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0035660);
    v19 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v19 + 24) = 2349LL;
    WdLogEvent5_WdLowResource(v19);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11);
    if ( (int)MmMapViewOfSection(v17, CurrentProcess, &MappedBase, 0LL, v34, &v31, &v34, 2, 0, v15) >= 0 )
    {
      v25 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v26 = v16 - v31;
      a2[11] = v25;
      return &v25[v26];
    }
  }
  _InterlockedIncrement(&dword_1C0035660);
  v21 = WdLogNewEntry5_WdLowResource(v20);
  *(_QWORD *)(v21 + 24) = a5;
  WdLogEvent5_WdLowResource(v21);
  if ( a5 )
    return (char *)MappedBase;
  v22 = *(_DWORD *)a2;
  ViewSize = 0LL;
  if ( (v22 & 1) != 0 )
  {
    v23 = 0LL;
    ViewSize = a2[7];
  }
  else
  {
    v23 = a2[2];
    ViewSize = *(_QWORD *)(a2[1] + 40LL);
  }
  if ( MmMapViewInSystemSpace(v17, &MappedBase, &ViewSize) < 0 )
  {
    _InterlockedIncrement(&dword_1C0035660);
    v29 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v29 + 24) = 2445LL;
    WdLogEvent5_WdLowResource(v29);
  }
  else
  {
    v28 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v28;
    return &v28[v23 + a3];
  }
  return (char *)v6;
}
