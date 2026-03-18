/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089890
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C005E7C8 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_GLOBAL *a2,
        signed __int64 a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        int a9)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // r15
  struct VIDMM_GLOBAL *v11; // r14
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rbx
  __int64 CurrentProcess; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  SIZE_T v28; // r12
  HANDLE v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _MDL *v32; // r13
  PVOID Context; // r15
  ULONG_PTR v34; // rdi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r14
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID v40; // r15
  NTSTATUS (__stdcall *v41)(PMDL, PMDL, PVOID); // r14
  NTSTATUS v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  void *v47; // rcx
  struct _EPROCESS *v48; // rax
  ULONG_PTR NumberOfBytes; // [rsp+30h] [rbp-28h] BYREF
  union _LARGE_INTEGER v51; // [rsp+38h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR v53[2]; // [rsp+48h] [rbp-10h] BYREF
  int v54; // [rsp+A0h] [rbp+48h]
  ULONG_PTR v56; // [rsp+B0h] [rbp+58h] BYREF
  enum _MM_ROTATE_DIRECTION v57; // [rsp+B8h] [rbp+60h]

  v57 = a4;
  v56 = a3;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8005);
  v13 = 0;
  v14 = **((_QWORD **)this + 1);
  if ( ((__int64 (*)(void))PsGetCurrentProcess)() != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v20 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v21 = *(char **)(v9 + 8);
    if ( (*(_DWORD *)(v9 + 20) & 0x800000) == 0 )
      goto LABEL_8;
  }
  else
  {
    v21 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v20 + 32));
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
          CurrentProcess = PsGetCurrentProcess(v20);
          v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25, v26);
          v27[3] = 270LL;
          v27[4] = 1LL;
          v27[5] = CurrentProcess;
          v27[6] = v9;
          v27[7] = v10;
          WdLogEvent5_WdCriticalError(v27);
        }
      }
      goto LABEL_53;
    }
  }
  v54 = 0;
  if ( (unsigned int)v10 <= 1 )
  {
    v28 = Size;
    if ( (*(_DWORD *)v9 & 1) == 0 && !*(_QWORD *)(v20 + 56) && !*(_QWORD *)(v9 + 32) )
    {
      v29 = MmSecureVirtualMemory(v21, Size, 4u);
      *(_QWORD *)(v9 + 32) = v29;
      if ( !v29 )
      {
        _InterlockedIncrement(&dword_1C002F5BC);
        v31 = WdLogNewEntry5_WdLowResource(v30);
        *(_QWORD *)(v31 + 24) = 1547LL;
        WdLogEvent5_WdLowResource(v31);
        v13 = -1073741801;
        goto LABEL_53;
      }
    }
    if ( *((_DWORD *)v11 + 10003) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 4992))(*((_QWORD *)v11 + 4998));
    v54 = 1;
  }
  else
  {
    v28 = *(_QWORD *)(v9 + 64);
  }
  v32 = NewMdl;
  if ( (_DWORD)v10 == 2 )
  {
    Context = a8;
    v34 = v28;
    CopyFunction = a7;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = v34;
      v13 = MmRotatePhysicalView(v21, &NumberOfBytes, v32, MmToRegularMemory, CopyFunction, Context);
      if ( v13 != 1073741849 )
        break;
      v37 = WdLogNewEntry5_WdWarning(v36);
      WdLogEvent5_WdWarning(v37);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v38, &EventPerformanceWarning, v39, 12);
      v21 += NumberOfBytes;
      v34 -= NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = v56;
LABEL_31:
    v11 = a2;
    LODWORD(v10) = v57;
    if ( *((_DWORD *)a2 + 10003) != -1 )
      (*((void (__fastcall **)(_QWORD))a2 + 4994))(*((_QWORD *)a2 + 4998));
    goto LABEL_44;
  }
  if ( (_DWORD)v10 == 3 )
  {
    v40 = a8;
    v41 = a7;
    v51.QuadPart = -10000LL;
    v56 = v28;
    while ( 1 )
    {
      v42 = MmRotatePhysicalView(v21, &v56, v32, MmToRegularMemoryNoCopy, v41, v40);
      v13 = v42;
      if ( !a9 || v42 != 1073741849 )
        break;
      v44 = WdLogNewEntry5_WdWarning(v43);
      WdLogEvent5_WdWarning(v44);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v45, &EventPerformanceWarning, v46, 12);
      while ( MmRotatePhysicalView(v21, &v56, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v41, v40) < 0 )
        KeDelayExecutionThread(0, 0, &v51);
      KeDelayExecutionThread(0, 0, &v51);
    }
    goto LABEL_31;
  }
  v53[0] = v28;
  v13 = MmRotatePhysicalView(v21, v53, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
LABEL_44:
  if ( v13 < 0 )
  {
    if ( v54 && *((_DWORD *)v11 + 10003) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 4994))(*((_QWORD *)v11 + 4998));
  }
  else if ( (unsigned int)v10 <= 1 )
  {
    *(_BYTE *)(v9 + 72) = 1;
    *(_QWORD *)(v9 + 64) = v28;
    *(_QWORD *)(v9 + 80) = v32;
  }
  else
  {
    v47 = *(void **)(v9 + 80);
    *(_BYTE *)(v9 + 72) = 0;
    ExFreePoolWithTag(v47, 0);
    *(_QWORD *)(v9 + 80) = 0LL;
  }
  v48 = (struct _EPROCESS *)((__int64 (*)(void))PsGetCurrentProcess)();
  VIDMM_GLOBAL::RecordRotation(v48, v21, v28, v32, (enum _MM_ROTATE_DIRECTION)v10, v13);
LABEL_53:
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v17, 8005);
  return (unsigned int)v13;
}
