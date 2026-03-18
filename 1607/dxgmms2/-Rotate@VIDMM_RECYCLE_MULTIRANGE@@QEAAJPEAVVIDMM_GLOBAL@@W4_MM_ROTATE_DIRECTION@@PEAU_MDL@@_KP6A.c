/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006805C
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067FB0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C005EE24 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00685B8 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID a7,
        int a8,
        ULONG_PTR NumberOfBytes)
{
  int v9; // r15d
  __int64 v10; // r13
  struct _MDL *v11; // rdi
  VIDMM_RECYCLE_MULTIRANGE *QuadPart; // rsi
  _QWORD *v13; // rax
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  PVOID v23; // r10
  ULONG_PTR v24; // rbx
  bool v25; // zf
  HANDLE v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void *Context; // r12
  struct _VIDMM_GLOBAL_ALLOC *v31; // rdi
  __int64 v32; // rdx
  void *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  void *v39; // r12
  NTSTATUS v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  PVOID v44; // rdi
  NTSTATUS (__stdcall *v45)(PMDL, PMDL, PVOID); // r13
  void *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rbx
  unsigned int v50; // ecx
  __int64 v51; // r8
  __int64 *v52; // rdx
  __int64 v53; // r13
  PHYSICAL_ADDRESS v54; // rdi
  SIZE_T v55; // rsi
  PHYSICAL_ADDRESS v56; // rbx
  SIZE_T v57; // r12
  void *v58; // rcx
  _QWORD *v59; // rax
  struct _EPROCESS *v60; // rax
  __int64 CurrentProcess; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rax
  ULONG_PTR v67; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T v68; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER v69; // [rsp+40h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp-20h] BYREF
  ULONG_PTR v71; // [rsp+50h] [rbp-18h] BYREF
  union _LARGE_INTEGER v72; // [rsp+58h] [rbp-10h] BYREF
  union _LARGE_INTEGER v73; // [rsp+B0h] [rbp+48h] BYREF
  PVOID VirtualAddress; // [rsp+B8h] [rbp+50h]
  int v75; // [rsp+C0h] [rbp+58h]
  PMDL NewMdl; // [rsp+C8h] [rbp+60h]

  NewMdl = a4;
  v75 = a3;
  VirtualAddress = a2;
  v73.QuadPart = (LONGLONG)this;
  v9 = 0;
  v10 = (int)a3;
  v11 = a4;
  QuadPart = this;
  if ( *((_DWORD *)this + 54) == 4 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v13[7] = 0LL;
    v13[3] = 270LL;
    v13[4] = 52LL;
    v13[5] = 11LL;
    v13[6] = v10;
    WdLogEvent5_WdCriticalError(v13);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(this, i, a3, (__int64)a4);
      v9 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, v15, v16, v17);
      if ( v9 < 0 )
      {
        v19 = WdLogNewEntry5_WdWarning(v18);
        *(_QWORD *)(v19 + 24) = i;
        *(_QWORD *)(v19 + 32) = QuadPart;
        WdLogEvent5_WdWarning(v19);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)QuadPart + 10) + 32LL) + 8LL),
          i,
          v20,
          v21);
        return (unsigned int)v9;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)QuadPart + 9) )
      break;
  }
  VirtualAddress = (PVOID)*((_QWORD *)QuadPart + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)QuadPart) )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v22);
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v62, v64, v65);
        v66[3] = 270LL;
        v66[4] = 1LL;
        v66[5] = CurrentProcess;
        v66[6] = QuadPart;
        v66[7] = v10;
        WdLogEvent5_WdCriticalError(v66);
      }
    }
    return (unsigned int)v9;
  }
  if ( (unsigned int)v10 <= 1 )
  {
    v25 = *((_QWORD *)QuadPart + 24) == 0LL;
    v24 = Size;
    v68 = Size;
    if ( v25 )
    {
      v26 = MmSecureVirtualMemory(v23, Size, 4u);
      *((_QWORD *)QuadPart + 24) = v26;
      if ( !v26 )
      {
        _InterlockedAdd(&dword_1C003563C, 1u);
        v28 = WdLogNewEntry5_WdLowResource(v27);
        *(_QWORD *)(v28 + 24) = 2933LL;
        WdLogEvent5_WdLowResource(v28);
        return 3221225495LL;
      }
      v23 = VirtualAddress;
    }
  }
  else
  {
    v24 = *((_QWORD *)QuadPart + 17);
    v68 = v24;
  }
  if ( (_DWORD)v10 == 2 )
  {
    Context = a7;
    v31 = (struct _VIDMM_GLOBAL_ALLOC *)v24;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = (ULONG_PTR)v31;
      v9 = MmRotatePhysicalView(v23, &NumberOfBytes, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( v9 != 1073741849 )
        break;
      v36 = WdLogNewEntry5_WdWarning(v33);
      WdLogEvent5_WdWarning(v36);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v37, &EventPerformanceWarning, v38, 12);
      }
      v31 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)v31 - NumberOfBytes);
      VirtualAddress = (char *)VirtualAddress + NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
      v23 = VirtualAddress;
    }
    v11 = NewMdl;
  }
  else if ( (_DWORD)v10 == 3 )
  {
    v39 = a7;
    v69.QuadPart = -10000LL;
    v67 = v24;
    while ( 1 )
    {
      v40 = MmRotatePhysicalView(v23, &v67, v11, MmToRegularMemoryNoCopy, CopyFunction, v39);
      v9 = v40;
      if ( !a8 || v40 != 1073741849 )
        break;
      v41 = WdLogNewEntry5_WdWarning(v33);
      WdLogEvent5_WdWarning(v41);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v42, &EventPerformanceWarning, v43, 12);
      v44 = VirtualAddress;
      v45 = CopyFunction;
      while ( MmRotatePhysicalView(v44, &v67, *((PMDL *)QuadPart + 18), MmToFrameBufferNoCopy, v45, v39) < 0 )
        KeDelayExecutionThread(0, 0, &v69);
      KeDelayExecutionThread(0, 0, &v69);
      LODWORD(v10) = v75;
      v23 = v44;
      v11 = NewMdl;
    }
  }
  else
  {
    v71 = v24;
    v9 = MmRotatePhysicalView(v23, &v71, v11, (MM_ROTATE_DIRECTION)v10, CopyFunction, a7);
  }
  if ( v9 < 0 )
  {
    if ( v9 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
    {
      v47 = *((_QWORD *)QuadPart + 18);
      if ( v47 )
      {
        v48 = 1LL;
        v49 = *(_QWORD *)(v47 + 48);
        v50 = *(_DWORD *)(v47 + 40) >> 12;
        v51 = v49;
        if ( v50 > 1 )
        {
          v52 = (__int64 *)(v47 + 56);
          v67 = v47 + 56;
          v53 = v50 - 1;
          do
          {
            if ( *v52 == v51 + 1 )
            {
              v51 = *v52;
              ++v48;
            }
            else
            {
              v54.QuadPart = v49 << 12;
              v49 = *v52;
              v71 = v48 << 12;
              v48 = 1LL;
              if ( MmIsIoSpaceActive(v54, v71) )
              {
                v55 = v71;
                do
                {
                  v72.QuadPart = -10000LL;
                  KeDelayExecutionThread(0, 0, &v72);
                }
                while ( MmIsIoSpaceActive(v54, v55) );
              }
              v52 = (__int64 *)v67;
              v51 = v49;
            }
            v67 = (ULONG_PTR)++v52;
            --v53;
          }
          while ( v53 );
          QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v73.QuadPart;
          LODWORD(v10) = v75;
        }
        v56.QuadPart = v49 << 12;
        v57 = v48 << 12;
        while ( MmIsIoSpaceActive(v56, v57) )
        {
          v73.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &v73);
        }
        v58 = (void *)*((_QWORD *)QuadPart + 18);
        *((_BYTE *)QuadPart + 130) = 0;
        ExFreePoolWithTag(v58, 0);
        *((_QWORD *)QuadPart + 18) = 0LL;
        v24 = v68;
      }
      else
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34, v35);
        v59[7] = 0LL;
        v59[3] = 270LL;
        v59[4] = 4LL;
        v59[5] = QuadPart;
        v59[6] = -1073741558LL;
        WdLogEvent5_WdCriticalError(v59);
      }
    }
    goto LABEL_58;
  }
  if ( (unsigned int)v10 > 1 )
  {
    v46 = (void *)*((_QWORD *)QuadPart + 18);
    *((_BYTE *)QuadPart + 130) = 0;
    ExFreePoolWithTag(v46, 0);
    *((_QWORD *)QuadPart + 18) = 0LL;
LABEL_58:
    v33 = (void *)*((_QWORD *)QuadPart + 24);
    if ( v33 )
    {
      MmUnsecureVirtualMemory(v33);
      *((_QWORD *)QuadPart + 24) = 0LL;
    }
    goto LABEL_60;
  }
  *((_BYTE *)QuadPart + 130) = 1;
  *((_QWORD *)QuadPart + 17) = v24;
  *((_QWORD *)QuadPart + 18) = v11;
LABEL_60:
  v60 = (struct _EPROCESS *)PsGetCurrentProcess(v33);
  VIDMM_GLOBAL::RecordRotation(v60, VirtualAddress, v24, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v9);
  return (unsigned int)v9;
}
