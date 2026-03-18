/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00755D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?SetMemoryRefreshActive@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0010914 (-SetMemoryRefreshActive@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C001093C (-SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0064898 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_GLOBAL *a2,
        signed __int64 a3,
        __int64 a4,
        struct _MDL *NewMdl,
        SIZE_T Size,
        int (*a7)(struct _MDL *, struct _MDL *, void *),
        PVOID a8,
        int a9)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // r14
  VIDMM_GLOBAL *v11; // r13
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  char *v22; // rbx
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  SIZE_T v27; // r15
  HANDLE v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _MDL *v31; // r12
  void *Context; // rdi
  ULONG_PTR v33; // r13
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // r14
  NTSTATUS (__stdcall *v46)(PMDL, PMDL, PVOID); // r13
  NTSTATUS v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  void *v54; // rcx
  struct _EPROCESS *v55; // rax
  ULONG_PTR NumberOfBytes; // [rsp+30h] [rbp-28h] BYREF
  union _LARGE_INTEGER v58; // [rsp+38h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR v60[2]; // [rsp+48h] [rbp-10h] BYREF
  int v61; // [rsp+A0h] [rbp+48h]
  ULONG_PTR v63; // [rsp+B0h] [rbp+58h] BYREF
  enum _MM_ROTATE_DIRECTION v64; // [rsp+B8h] [rbp+60h]

  v64 = (int)a4;
  v63 = a3;
  v9 = a3;
  v10 = (int)a4;
  v11 = a2;
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8005);
  v13 = 0;
  v14 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v20 = *(_QWORD *)(v9 + 8);
  v21 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v22 = *(char **)(v9 + 8);
    if ( (*(_DWORD *)(v9 + 20) & 0x800000) == 0 )
      goto LABEL_8;
  }
  else
  {
    v22 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v20 + 32));
    if ( (*(_DWORD *)(v20 + 64) & 1) == 0 )
    {
LABEL_8:
      if ( (int)v10 >= 0 )
      {
        if ( (int)v10 <= 1 )
        {
          v13 = -1073741823;
        }
        else if ( (int)v10 <= 3 )
        {
          CurrentProcess = PsGetCurrentProcess(v20, v21, v17, v18);
          v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
          v26[3] = 270LL;
          v26[4] = 1LL;
          v26[5] = CurrentProcess;
          v26[6] = v9;
          v26[7] = v10;
          WdLogEvent5_WdCriticalError(v26);
        }
      }
      goto LABEL_50;
    }
  }
  v61 = 0;
  if ( (unsigned int)v10 <= 1 )
  {
    v27 = Size;
    if ( !(_DWORD)v21 && !*(_QWORD *)(v20 + 56) && !*(_QWORD *)(v9 + 32) )
    {
      v28 = MmSecureVirtualMemory(v22, Size, 4u);
      *(_QWORD *)(v9 + 32) = v28;
      if ( !v28 )
      {
        _InterlockedIncrement(&dword_1C00275AC);
        v30 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v30 + 24) = 1547LL;
        WdLogEvent5_WdLowResource(v30);
        v13 = -1073741801;
        goto LABEL_50;
      }
    }
    VIDMM_GLOBAL::SetMemoryRefreshActive(v11);
    v61 = 1;
  }
  else
  {
    v27 = *(_QWORD *)(v9 + 64);
  }
  v31 = NewMdl;
  if ( (_DWORD)v10 == 2 )
  {
    Context = a8;
    v33 = v27;
    CopyFunction = a7;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = v33;
      v13 = MmRotatePhysicalView(v22, &NumberOfBytes, v31, MmToRegularMemory, CopyFunction, Context);
      if ( v13 != 1073741849 )
        break;
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      WdLogEvent5_WdWarning(v38);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v39, &EventPerformanceWarning, v40, 12);
      v22 += NumberOfBytes;
      v33 -= NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v11 = a2;
    VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
    v9 = v63;
  }
  else
  {
    if ( (_DWORD)v10 != 3 )
    {
      v60[0] = v27;
      v13 = MmRotatePhysicalView(v22, v60, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
      goto LABEL_42;
    }
    v45 = a8;
    v46 = a7;
    v58.QuadPart = -10000LL;
    v63 = v27;
    while ( 1 )
    {
      v47 = MmRotatePhysicalView(v22, &v63, v31, MmToRegularMemoryNoCopy, v46, v45);
      v13 = v47;
      if ( !a9 || v47 != 1073741849 )
        break;
      v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
      WdLogEvent5_WdWarning(v51);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v52, &EventPerformanceWarning, v53, 12);
      while ( MmRotatePhysicalView(v22, &v63, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v46, v45) < 0 )
        KeDelayExecutionThread(0, 0, &v58);
      KeDelayExecutionThread(0, 0, &v58);
    }
    v11 = a2;
    VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
  }
  LODWORD(v10) = v64;
LABEL_42:
  if ( v13 < 0 )
  {
    if ( v61 )
      VIDMM_GLOBAL::SetMemoryRefreshIdle(v11);
  }
  else if ( (unsigned int)v10 <= 1 )
  {
    *(_BYTE *)(v9 + 72) = 1;
    *(_QWORD *)(v9 + 64) = v27;
    *(_QWORD *)(v9 + 80) = v31;
  }
  else
  {
    v54 = *(void **)(v9 + 80);
    *(_BYTE *)(v9 + 72) = 0;
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(v9 + 80) = 0LL;
  }
  v55 = (struct _EPROCESS *)PsGetCurrentProcess(v42, v41, v43, v44);
  VIDMM_GLOBAL::RecordRotation(v55, v22, v27, v31, (enum _MM_ROTATE_DIRECTION)v10, v13);
LABEL_50:
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v17, 8005);
  return (unsigned int)v13;
}
