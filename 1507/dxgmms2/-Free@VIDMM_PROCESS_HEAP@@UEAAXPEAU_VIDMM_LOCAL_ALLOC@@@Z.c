/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0074900
 * Callers:
 *     <none>
 * Callees:
 *     Template_pxqqt @ 0x1C0010B08 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C0010BAC (Template_qpxp.c)
 *     ExFreeToPagedLookasideList @ 0x1C0011F44 (ExFreeToPagedLookasideList.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0032600 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0074C78 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // eax
  _QWORD *v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // [rsp+30h] [rbp+28h]
  __int64 v25; // [rsp+38h] [rbp+30h]

  v5 = (_DWORD *)*((_QWORD *)a2 + 3);
  v7 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v7 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  if ( (*v5 & 1) != 0 )
  {
    v11 = v5[6];
    if ( (unsigned int)(v11 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v5 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 1, (PSIZE_T)v5 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v11 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v5 + 1));
      ObCloseHandle(*((HANDLE *)v5 + 5), (*((_QWORD *)v5 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v5 + 4), v12, v13);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 72LL) -= *((_QWORD *)v5 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) -= *((_QWORD *)v5 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 84LL);
    v15 = v5[6];
    v16 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v15 == 1 )
    {
      v16[11] -= *((_QWORD *)v5 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) -= *((_QWORD *)v5 + 7);
    }
    else
    {
      v17 = v15 == 2;
      v18 = *((_QWORD *)v5 + 7);
      if ( v17 )
      {
        v16[13] -= v18;
        *(_QWORD *)(*((_QWORD *)this + 1) + 112LL) -= *((_QWORD *)v5 + 7);
      }
      else
      {
        v16[15] -= v18;
        *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) -= *((_QWORD *)v5 + 7);
      }
    }
    v19 = bTracingEnabled;
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v5[6] - 3) > 3 )
        v20 = *((_QWORD *)v5 + 1);
      else
        v20 = *((_QWORD *)v5 + 4);
      v21 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        Template_qpxp(
          *((_QWORD *)this + 1),
          &EventDestroyProcessAllocationDetails,
          v14,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v5,
          *((_QWORD *)v5 + 7),
          v20);
        v19 = bTracingEnabled;
        v21 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( v19 )
      {
        v22 = (unsigned int)(v5[6] - 3);
        if ( (unsigned int)v22 > 3 )
          v23 = *((_QWORD *)v5 + 1);
        else
          v23 = *((_QWORD *)v5 + 4);
        if ( (v21 & 0x10000) != 0 )
        {
          LODWORD(v25) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v24) = v5[6];
          Template_pxqqt(v22, &EventDestroyProcessAllocation, v14, v23, *((_QWORD *)v5 + 7), v24, v25, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v5);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
