/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C0089440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 1);
  v20 = 0LL;
  v5 = *v3;
  if ( PsGetCurrentProcess() != v5 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  v11 = 4;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v12 = 0LL;
    v13 = a2[4];
    if ( ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 )
      v11 = 1028;
  }
  else
  {
    v14 = a2[1];
    v12 = a2[2];
    v13 = *(_QWORD *)(v14 + 88);
    v15 = *(_DWORD *)(v14 + 80) - 4;
    v16 = 4;
    v7 = v15 & 0xFFFFFFFD;
    if ( (_DWORD)v7 )
      v16 = 1028;
    v11 = v16;
  }
  v21 = v12;
  if ( (gVidMmGlobalFault & 0x1000) != 0 )
  {
    _InterlockedIncrement(&dword_1C002F5E0);
    v17 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v17 + 24) = 2563LL;
    WdLogEvent5_WdLowResource(v17);
    return v20;
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(v13, CurrentProcess, &v20, 0LL, v22, &v21, &v22, 2, 0, v11) < 0 )
    return v20;
  return v12 - v21 + v20;
}
