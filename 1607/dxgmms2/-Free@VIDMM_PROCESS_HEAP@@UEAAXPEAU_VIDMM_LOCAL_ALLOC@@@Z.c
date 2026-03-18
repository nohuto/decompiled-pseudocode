/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009D870
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     Template_pxqqt @ 0x1C001FD64 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C00670F8 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009DBF8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
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
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // [rsp+30h] [rbp+28h]
  __int64 v25; // [rsp+38h] [rbp+30h]

  v3 = (_DWORD *)*((_QWORD *)a2 + 3);
  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v5 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 30LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  if ( (*v3 & 1) != 0 )
  {
    v11 = v3[6];
    if ( (unsigned int)(v11 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v3 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 1, (PSIZE_T)v3 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v11 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v3 + 1));
      ObCloseHandle(*((HANDLE *)v3 + 5), (*((_QWORD *)v3 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v3 + 4), v12, v13);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) -= *((_QWORD *)v3 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) -= *((_QWORD *)v3 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 108LL);
    v15 = v3[6];
    v16 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v15 == 1 )
    {
      v16[14] -= *((_QWORD *)v3 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 120LL) -= *((_QWORD *)v3 + 7);
    }
    else
    {
      v17 = v15 == 2;
      v18 = *((_QWORD *)v3 + 7);
      if ( v17 )
      {
        v16[16] -= v18;
        *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v3 + 7);
      }
      else
      {
        v16[18] -= v18;
        *(_QWORD *)(*((_QWORD *)this + 1) + 152LL) -= *((_QWORD *)v3 + 7);
      }
    }
    v19 = bTracingEnabled;
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v3[6] - 3) > 3 )
        v20 = *((_QWORD *)v3 + 1);
      else
        v20 = *((_QWORD *)v3 + 4);
      v21 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        Template_qpxp(
          *((_QWORD *)this + 1),
          &EventDestroyProcessAllocationDetails,
          v14,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v3,
          *((_QWORD *)v3 + 7),
          v20);
        v19 = bTracingEnabled;
        v21 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( v19 )
      {
        v22 = (unsigned int)(v3[6] - 3);
        if ( (unsigned int)v22 > 3 )
          v23 = *((_QWORD *)v3 + 1);
        else
          v23 = *((_QWORD *)v3 + 4);
        if ( v21 < 0 )
        {
          LODWORD(v25) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v24) = v3[6];
          Template_pxqqt(v22, &EventDestroyProcessAllocation, v14, v23, *((_QWORD *)v3 + 7), v24, v25, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v3);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
