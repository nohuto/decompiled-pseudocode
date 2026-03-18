/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009E6F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00685B8 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
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
  __int64 v10; // r14
  struct VIDMM_GLOBAL *v11; // r15
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // rbx
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  SIZE_T v29; // r12
  HANDLE v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _MDL *v33; // r13
  PVOID Context; // r14
  ULONG_PTR v35; // rdi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  PVOID v41; // r14
  NTSTATUS (__stdcall *v42)(PMDL, PMDL, PVOID); // r15
  NTSTATUS v43; // eax
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
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8005);
  v13 = 0;
  v14 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = v9;
    *(_QWORD *)(v20 + 32) = v10;
  }
  v21 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v22 = *(char **)(v9 + 8);
    if ( (*(_DWORD *)(v9 + 20) & 0x800000) == 0 )
      goto LABEL_10;
  }
  else
  {
    v22 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v21 + 32));
    if ( (*(_DWORD *)(v21 + 64) & 1) == 0 )
    {
LABEL_10:
      if ( (int)v10 >= 0 )
      {
        if ( (int)v10 <= 1 )
        {
          v13 = -1073741823;
        }
        else if ( (int)v10 <= 3 )
        {
          CurrentProcess = PsGetCurrentProcess(v21);
          v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26, v27);
          v28[3] = 270LL;
          v28[4] = 1LL;
          v28[5] = CurrentProcess;
          v28[6] = v9;
          v28[7] = v10;
          WdLogEvent5_WdCriticalError(v28);
        }
      }
      goto LABEL_55;
    }
  }
  v54 = 0;
  if ( (unsigned int)v10 <= 1 )
  {
    v29 = Size;
    if ( (*(_DWORD *)v9 & 1) == 0 && !*(_QWORD *)(v21 + 56) && !*(_QWORD *)(v9 + 32) )
    {
      v30 = MmSecureVirtualMemory(v22, Size, 4u);
      *(_QWORD *)(v9 + 32) = v30;
      if ( !v30 )
      {
        _InterlockedIncrement(&dword_1C003563C);
        v32 = WdLogNewEntry5_WdLowResource(v31);
        *(_QWORD *)(v32 + 24) = 1550LL;
        WdLogEvent5_WdLowResource(v32);
        v13 = -1073741801;
        goto LABEL_55;
      }
    }
    if ( *((_DWORD *)v11 + 10025) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5001))(*((_QWORD *)v11 + 5009));
    v54 = 1;
  }
  else
  {
    v29 = *(_QWORD *)(v9 + 64);
  }
  v33 = NewMdl;
  if ( (_DWORD)v10 == 2 )
  {
    Context = a8;
    v35 = v29;
    CopyFunction = a7;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = v35;
      v13 = MmRotatePhysicalView(v22, &NumberOfBytes, v33, MmToRegularMemory, CopyFunction, Context);
      if ( v13 != 1073741849 )
        break;
      v38 = WdLogNewEntry5_WdWarning(v37);
      WdLogEvent5_WdWarning(v38);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v39, &EventPerformanceWarning, v40, 12);
      v22 += NumberOfBytes;
      v35 -= NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = v56;
LABEL_33:
    v11 = a2;
    LODWORD(v10) = v57;
    if ( *((_DWORD *)a2 + 10025) != -1 )
      (*((void (__fastcall **)(_QWORD))a2 + 5003))(*((_QWORD *)a2 + 5009));
    goto LABEL_46;
  }
  if ( (_DWORD)v10 == 3 )
  {
    v41 = a8;
    v42 = a7;
    v51.QuadPart = -10000LL;
    v56 = v29;
    while ( 1 )
    {
      v43 = MmRotatePhysicalView(v22, &v56, v33, MmToRegularMemoryNoCopy, v42, v41);
      v13 = v43;
      if ( !a9 || v43 != 1073741849 )
        break;
      v44 = WdLogNewEntry5_WdWarning(v37);
      WdLogEvent5_WdWarning(v44);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v45, &EventPerformanceWarning, v46, 12);
      while ( MmRotatePhysicalView(v22, &v56, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v42, v41) < 0 )
        KeDelayExecutionThread(0, 0, &v51);
      KeDelayExecutionThread(0, 0, &v51);
    }
    goto LABEL_33;
  }
  v53[0] = v29;
  v13 = MmRotatePhysicalView(v22, v53, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
LABEL_46:
  if ( v13 < 0 )
  {
    if ( v54 && *((_DWORD *)v11 + 10025) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5003))(*((_QWORD *)v11 + 5009));
  }
  else if ( (unsigned int)v10 <= 1 )
  {
    *(_BYTE *)(v9 + 72) = 1;
    *(_QWORD *)(v9 + 64) = v29;
    *(_QWORD *)(v9 + 80) = v33;
  }
  else
  {
    v47 = *(void **)(v9 + 80);
    *(_BYTE *)(v9 + 72) = 0;
    ExFreePoolWithTag(v47, 0);
    *(_QWORD *)(v9 + 80) = 0LL;
  }
  v48 = (struct _EPROCESS *)PsGetCurrentProcess(v37);
  VIDMM_GLOBAL::RecordRotation(v48, v22, v29, v33, (enum _MM_ROTATE_DIRECTION)v10, v13);
LABEL_55:
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v17, 8005);
  return (unsigned int)v13;
}
