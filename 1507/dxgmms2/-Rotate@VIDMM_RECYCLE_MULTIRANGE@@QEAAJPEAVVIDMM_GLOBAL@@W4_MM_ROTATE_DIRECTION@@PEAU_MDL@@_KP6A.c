/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069710
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069620 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?SetMemoryRefreshActive@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0010914 (-SetMemoryRefreshActive@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C001093C (-SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0064898 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_GLOBAL *a2,
        enum _MM_ROTATE_DIRECTION a3,
        struct _MDL *a4,
        SIZE_T Size,
        int (*a6)(struct _MDL *, struct _MDL *, void *),
        PVOID a7,
        int a8,
        struct _VIDMM_GLOBAL_ALLOC *a9)
{
  int v9; // r14d
  __int64 v10; // r15
  struct _MDL *v11; // r13
  VIDMM_RECYCLE_MULTIRANGE *QuadPart; // rsi
  _QWORD *v14; // rax
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  struct VIDMM_RECYCLE_RANGE *v22; // r8
  char v23; // al
  void *v24; // rbx
  SIZE_T v25; // rdi
  HANDLE v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void *Context; // r13
  ULONG_PTR v31; // rbx
  struct _MDL *v32; // rdi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // rsi
  char *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  void *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // r13
  NTSTATUS (__stdcall *v46)(PMDL, PMDL, PVOID); // r15
  struct _MDL *v47; // rdi
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  void *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rbx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 *v61; // r13
  __int64 v62; // r15
  PHYSICAL_ADDRESS v63; // rdi
  SIZE_T v64; // rsi
  PHYSICAL_ADDRESS v65; // rbx
  SIZE_T v66; // r12
  _QWORD *v67; // rax
  struct _EPROCESS *v68; // rax
  __int64 CurrentProcess; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned __int64 v73; // [rsp+30h] [rbp-40h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-38h] BYREF
  PVOID VirtualAddress; // [rsp+40h] [rbp-30h]
  ULONG_PTR v76; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER v77; // [rsp+50h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v79; // [rsp+60h] [rbp-10h] BYREF
  union _LARGE_INTEGER v80; // [rsp+68h] [rbp-8h] BYREF
  union _LARGE_INTEGER v81; // [rsp+B0h] [rbp+40h] BYREF
  enum _MM_ROTATE_DIRECTION v82; // [rsp+C0h] [rbp+50h]
  PMDL NewMdl; // [rsp+C8h] [rbp+58h]

  NewMdl = a4;
  v82 = a3;
  v81.QuadPart = (LONGLONG)this;
  v9 = 0;
  v10 = a3;
  v11 = a4;
  QuadPart = this;
  if ( *((_DWORD *)this + 54) == 4 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v14[7] = 0LL;
    v14[3] = 270LL;
    v14[4] = 52LL;
    v14[5] = 11LL;
    v14[6] = v10;
    WdLogEvent5_WdCriticalError(v14);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(this, i);
      v9 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, v16, v17);
      if ( v9 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v18, a2, v19);
        *(_QWORD *)(v20 + 24) = i;
        *(_QWORD *)(v20 + 32) = QuadPart;
        WdLogEvent5_WdWarning(v20);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)QuadPart + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v9;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)QuadPart + 9) )
      break;
  }
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 8);
  v22 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 9);
  while ( (*((_DWORD *)NextRange + 20) & 0x800000) != 0 )
  {
    if ( NextRange == v22 )
    {
      v23 = 1;
      goto LABEL_15;
    }
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  v23 = 0;
LABEL_15:
  v24 = (void *)*((_QWORD *)QuadPart + 6);
  VirtualAddress = v24;
  if ( !v23 )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(NextRange, a2, v22, a4);
        v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v71, v70);
        v72[3] = 270LL;
        v72[4] = 1LL;
        v72[5] = CurrentProcess;
        v72[6] = QuadPart;
        v72[7] = v10;
        WdLogEvent5_WdCriticalError(v72);
      }
    }
    return (unsigned int)v9;
  }
  LODWORD(a9) = 0;
  if ( (unsigned int)v10 <= 1 )
  {
    v25 = Size;
    v73 = Size;
    if ( !*((_QWORD *)QuadPart + 24) )
    {
      v26 = MmSecureVirtualMemory(v24, Size, 4u);
      *((_QWORD *)QuadPart + 24) = v26;
      if ( !v26 )
      {
        _InterlockedIncrement(&dword_1C00275AC);
        v28 = WdLogNewEntry5_WdLowResource(v27);
        *(_QWORD *)(v28 + 24) = 2806LL;
        WdLogEvent5_WdLowResource(v28);
        return 3221225495LL;
      }
    }
    VIDMM_GLOBAL::SetMemoryRefreshActive(a2);
    LODWORD(a9) = 1;
  }
  else
  {
    v25 = *((_QWORD *)QuadPart + 17);
    v73 = v25;
  }
  if ( (_DWORD)v10 == 2 )
  {
    Context = a7;
    v31 = v25;
    v32 = NewMdl;
    CopyFunction = a6;
    v34 = (char *)VirtualAddress;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = v31;
      v9 = MmRotatePhysicalView(v34, &NumberOfBytes, v32, MmToRegularMemory, CopyFunction, Context);
      if ( v9 != 1073741849 )
        break;
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      WdLogEvent5_WdWarning(v38);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v39, &EventPerformanceWarning, v40, 12);
      }
      v34 += NumberOfBytes;
      v31 -= NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    VirtualAddress = v34;
    VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
    QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v81.QuadPart;
  }
  else
  {
    if ( (_DWORD)v10 != 3 )
    {
      v79 = v25;
      v9 = MmRotatePhysicalView(v24, &v79, v11, (MM_ROTATE_DIRECTION)v10, a6, a7);
      goto LABEL_43;
    }
    v45 = a7;
    v46 = a6;
    v76 = v25;
    v47 = NewMdl;
    v77.QuadPart = -10000LL;
    while ( 1 )
    {
      v48 = MmRotatePhysicalView(v24, &v76, v47, MmToRegularMemoryNoCopy, v46, v45);
      v9 = v48;
      if ( !a8 || v48 != 1073741849 )
        break;
      v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      WdLogEvent5_WdWarning(v52);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v53, &EventPerformanceWarning, v54, 12);
      while ( MmRotatePhysicalView(v24, &v76, *((PMDL *)QuadPart + 18), MmToFrameBufferNoCopy, v46, v45) < 0 )
        KeDelayExecutionThread(0, 0, &v77);
      KeDelayExecutionThread(0, 0, &v77);
    }
    VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
  }
  LODWORD(v10) = v82;
  v25 = v73;
  v11 = NewMdl;
LABEL_43:
  if ( v9 < 0 )
  {
    if ( v9 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
    {
      v56 = *((_QWORD *)QuadPart + 18);
      if ( v56 )
      {
        v57 = 1LL;
        v58 = *(_QWORD *)(v56 + 48);
        v59 = *(_DWORD *)(v56 + 40) >> 12;
        v60 = v58;
        if ( v59 > 1 )
        {
          v61 = (__int64 *)(v56 + 56);
          v62 = v59 - 1;
          do
          {
            if ( *v61 == v60 + 1 )
            {
              v60 = *v61;
              ++v57;
            }
            else
            {
              v63.QuadPart = v58 << 12;
              v58 = *v61;
              v79 = v57 << 12;
              v57 = 1LL;
              if ( MmIsIoSpaceActive(v63, v79) )
              {
                v64 = v79;
                do
                {
                  v80.QuadPart = -10000LL;
                  KeDelayExecutionThread(0, 0, &v80);
                }
                while ( MmIsIoSpaceActive(v63, v64) );
              }
              v60 = v58;
            }
            ++v61;
            --v62;
          }
          while ( v62 );
          QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v81.QuadPart;
          LODWORD(v10) = v82;
          v25 = v73;
        }
        v65.QuadPart = v58 << 12;
        v66 = v57 << 12;
        while ( MmIsIoSpaceActive(v65, v66) )
        {
          v81.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &v81);
        }
        ExFreePoolWithTag(*((PVOID *)QuadPart + 18), 0);
        *((_QWORD *)QuadPart + 18) = 0LL;
      }
      else
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41);
        v67[3] = 270LL;
        v67[4] = 4LL;
        v67[5] = QuadPart;
        v67[6] = -1073741558LL;
        v67[7] = 0LL;
        WdLogEvent5_WdCriticalError(v67);
      }
    }
    else if ( (_DWORD)a9 )
    {
      VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
    }
  }
  else if ( (unsigned int)v10 <= 1 )
  {
    *((_BYTE *)QuadPart + 130) = 1;
    *((_QWORD *)QuadPart + 17) = v25;
    *((_QWORD *)QuadPart + 18) = v11;
  }
  else
  {
    v55 = (void *)*((_QWORD *)QuadPart + 18);
    *((_BYTE *)QuadPart + 130) = 0;
    ExFreePoolWithTag(v55, 0);
    v42 = (void *)*((_QWORD *)QuadPart + 24);
    *((_QWORD *)QuadPart + 18) = 0LL;
    if ( v42 )
    {
      MmUnsecureVirtualMemory(v42);
      *((_QWORD *)QuadPart + 24) = 0LL;
    }
  }
  v68 = (struct _EPROCESS *)PsGetCurrentProcess(v42, v41, v43, v44);
  VIDMM_GLOBAL::RecordRotation(v68, VirtualAddress, v25, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v9);
  return (unsigned int)v9;
}
