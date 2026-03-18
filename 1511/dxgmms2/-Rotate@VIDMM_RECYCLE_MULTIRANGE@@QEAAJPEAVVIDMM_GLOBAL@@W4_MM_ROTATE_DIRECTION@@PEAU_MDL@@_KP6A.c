/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BCFC
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A4C0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A1AC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005D7CC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C005E7C8 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        struct _MDL *a4,
        SIZE_T Size,
        int (*CopyFunction)(struct _MDL *, struct _MDL *, void *),
        PVOID Context,
        int a8,
        struct _VIDMM_GLOBAL_ALLOC *a9)
{
  NTSTATUS v9; // r14d
  __int64 v10; // r15
  struct _MDL *v11; // r12
  VIDMM_RECYCLE_MULTIRANGE *QuadPart; // rsi
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  struct VIDMM_RECYCLE_RANGE *v16; // r8
  char v17; // al
  char *v18; // rcx
  ULONG_PTR v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _EPROCESS *v24; // rax
  HANDLE v26; // rax
  __int64 v27; // rcx
  void *v28; // rbx
  NTSTATUS (__stdcall *v29)(PMDL, PMDL, PVOID); // r12
  struct _MDL *v30; // r13
  void *v31; // rcx
  void *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // r12
  ULONG_PTR v38; // rbx
  struct _MDL *v39; // r13
  NTSTATUS (__stdcall *v40)(PMDL, PMDL, PVOID); // rsi
  char *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rbx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 *v53; // r13
  __int64 v54; // r15
  PHYSICAL_ADDRESS v55; // rdi
  SIZE_T v56; // rsi
  PHYSICAL_ADDRESS v57; // rbx
  SIZE_T v58; // r12
  void *v59; // rcx
  _QWORD *v60; // rax
  __int64 CurrentProcess; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rax
  char *VirtualAddress; // [rsp+30h] [rbp-40h]
  SIZE_T v68; // [rsp+38h] [rbp-38h]
  ULONG_PTR v69; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v70; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER v71; // [rsp+50h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+60h] [rbp-10h] BYREF
  union _LARGE_INTEGER v74; // [rsp+68h] [rbp-8h] BYREF
  union _LARGE_INTEGER v75; // [rsp+B0h] [rbp+40h] BYREF
  int v76; // [rsp+C0h] [rbp+50h]
  PMDL NewMdl; // [rsp+C8h] [rbp+58h]

  NewMdl = a4;
  v76 = a3;
  v75.QuadPart = (LONGLONG)this;
  v9 = 0;
  v10 = (int)a3;
  v11 = a4;
  QuadPart = this;
  if ( *((_DWORD *)this + 54) == 4 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v33[7] = 0LL;
    v33[3] = 270LL;
    v33[4] = 52LL;
    v33[5] = 11LL;
    v33[6] = v10;
    WdLogEvent5_WdCriticalError(v33);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(this, i);
      v9 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i);
      if ( v9 < 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v34);
        *(_QWORD *)(v35 + 24) = i;
        *(_QWORD *)(v35 + 32) = QuadPart;
        WdLogEvent5_WdWarning(v35);
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
  v16 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 9);
  while ( (*((_DWORD *)NextRange + 20) & 0x800000) != 0 )
  {
    if ( NextRange == v16 )
    {
      v17 = 1;
      goto LABEL_10;
    }
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  v17 = 0;
LABEL_10:
  v18 = (char *)*((_QWORD *)QuadPart + 6);
  VirtualAddress = v18;
  if ( !v17 )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess();
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
  LODWORD(a9) = 0;
  if ( (unsigned int)v10 > 1 )
  {
    v19 = *((_QWORD *)QuadPart + 17);
    v68 = v19;
    goto LABEL_13;
  }
  v19 = Size;
  v68 = Size;
  if ( *((_QWORD *)QuadPart + 24)
    || (v26 = MmSecureVirtualMemory(v18, Size, 4u), (*((_QWORD *)QuadPart + 24) = v26) != 0LL) )
  {
    if ( *((_DWORD *)a2 + 10003) != -1 )
      (*((void (__fastcall **)(_QWORD))a2 + 4992))(*((_QWORD *)a2 + 4998));
    v18 = VirtualAddress;
    LODWORD(a9) = 1;
LABEL_13:
    if ( (_DWORD)v10 == 2 )
    {
      v37 = Context;
      v38 = v19;
      v39 = NewMdl;
      v40 = CopyFunction;
      v41 = VirtualAddress;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        v69 = v38;
        v9 = MmRotatePhysicalView(v41, &v69, v39, MmToRegularMemory, v40, v37);
        if ( v9 != 1073741849 )
          break;
        v42 = WdLogNewEntry5_WdWarning(v21);
        WdLogEvent5_WdWarning(v42);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v43, &EventPerformanceWarning, v44, 12);
        v41 += v69;
        v38 -= v69;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v75.QuadPart;
      VirtualAddress = v41;
    }
    else
    {
      if ( (_DWORD)v10 != 3 )
      {
        NumberOfBytes = v19;
        v9 = MmRotatePhysicalView(v18, &NumberOfBytes, v11, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
        goto LABEL_16;
      }
      v28 = Context;
      v29 = CopyFunction;
      v70 = v19;
      v30 = NewMdl;
      v71.QuadPart = -10000LL;
      while ( 1 )
      {
        v9 = MmRotatePhysicalView(VirtualAddress, &v70, v30, MmToRegularMemoryNoCopy, v29, v28);
        if ( v9 != 1073741849 || !a8 )
          break;
        v45 = WdLogNewEntry5_WdWarning(v21);
        WdLogEvent5_WdWarning(v45);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v46, &EventPerformanceWarning, v47, 12);
        while ( MmRotatePhysicalView(VirtualAddress, &v70, *((PMDL *)QuadPart + 18), MmToFrameBufferNoCopy, v29, v28) < 0 )
          KeDelayExecutionThread(0, 0, &v71);
        KeDelayExecutionThread(0, 0, &v71);
      }
    }
    v20 = *((unsigned int *)a2 + 10003);
    LODWORD(v10) = v76;
    v19 = v68;
    if ( (_DWORD)v20 != -1 )
      (*((void (__fastcall **)(_QWORD))a2 + 4994))(*((_QWORD *)a2 + 4998));
    v11 = NewMdl;
LABEL_16:
    if ( v9 < 0 )
    {
      if ( v9 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
      {
        v48 = *((_QWORD *)QuadPart + 18);
        if ( v48 )
        {
          v49 = 1LL;
          v50 = *(_QWORD *)(v48 + 48);
          v51 = *(_DWORD *)(v48 + 40) >> 12;
          v52 = v50;
          if ( v51 > 1 )
          {
            v53 = (__int64 *)(v48 + 56);
            v54 = v51 - 1;
            do
            {
              if ( *v53 == v52 + 1 )
              {
                v52 = *v53;
                ++v49;
              }
              else
              {
                v55.QuadPart = v50 << 12;
                v50 = *v53;
                NumberOfBytes = v49 << 12;
                v49 = 1LL;
                if ( MmIsIoSpaceActive(v55, NumberOfBytes) )
                {
                  v56 = NumberOfBytes;
                  do
                  {
                    v74.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v74);
                  }
                  while ( MmIsIoSpaceActive(v55, v56) );
                }
                v52 = v50;
              }
              ++v53;
              --v54;
            }
            while ( v54 );
            QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v75.QuadPart;
            LODWORD(v10) = v76;
            v19 = v68;
          }
          v57.QuadPart = v50 << 12;
          v58 = v49 << 12;
          while ( MmIsIoSpaceActive(v57, v58) )
          {
            v75.QuadPart = -10000LL;
            KeDelayExecutionThread(0, 0, &v75);
          }
          v59 = (void *)*((_QWORD *)QuadPart + 18);
          *((_BYTE *)QuadPart + 130) = 0;
          ExFreePoolWithTag(v59, 0);
          *((_QWORD *)QuadPart + 18) = 0LL;
        }
        else
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22, v23);
          v60[7] = 0LL;
          v60[3] = 270LL;
          v60[4] = 4LL;
          v60[5] = QuadPart;
          v60[6] = -1073741558LL;
          WdLogEvent5_WdCriticalError(v60);
        }
      }
      else if ( (_DWORD)a9 && *((_DWORD *)a2 + 10003) != -1 )
      {
        (*((void (__fastcall **)(_QWORD))a2 + 4994))(*((_QWORD *)a2 + 4998));
      }
    }
    else if ( (unsigned int)v10 > 1 )
    {
      v31 = (void *)*((_QWORD *)QuadPart + 18);
      *((_BYTE *)QuadPart + 130) = 0;
      ExFreePoolWithTag(v31, 0);
      v32 = (void *)*((_QWORD *)QuadPart + 24);
      *((_QWORD *)QuadPart + 18) = 0LL;
      if ( v32 )
      {
        MmUnsecureVirtualMemory(v32);
        *((_QWORD *)QuadPart + 24) = 0LL;
      }
    }
    else
    {
      *((_BYTE *)QuadPart + 130) = 1;
      *((_QWORD *)QuadPart + 17) = v19;
      *((_QWORD *)QuadPart + 18) = v11;
    }
    v24 = (struct _EPROCESS *)PsGetCurrentProcess();
    VIDMM_GLOBAL::RecordRotation(v24, VirtualAddress, v19, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v9);
    return (unsigned int)v9;
  }
  _InterlockedIncrement(&dword_1C002F5BC);
  v36 = WdLogNewEntry5_WdLowResource(v27);
  *(_QWORD *)(v36 + 24) = 2888LL;
  WdLogEvent5_WdLowResource(v36);
  return 3221225495LL;
}
