/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C005DC50
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010188 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C001FD64 (Template_pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C00670F8 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3, PVOID a4)
{
  PVOID *v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rax
  VIDMM_RECYCLE_BLOCK **v10; // rdx
  VIDMM_RECYCLE_BLOCK **v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v5 = (PVOID *)((char *)this + 40);
  v6 = *((_QWORD *)this + 5);
  RegionSize = *((_QWORD *)this + 6) - v6;
  v7 = **((unsigned int **)this + 4);
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    if ( v6 )
    {
      v12 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5, &RegionSize, 0x8000u);
      v13 = v12;
      v6 = v12 + 0x80000000;
      if ( (v6 & 0x80000000) == 0LL && v12 != -1073741558 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6, v7);
        v14[3] = *v5;
        v14[4] = this;
        v14[5] = v13;
        WdLogEvent5_WdAssertion(v14);
      }
    }
  }
  else
  {
    if ( (unsigned int)(v7 - 5) <= 1 && v6 )
      MmUnmapViewInSystemSpace((PVOID)v6);
    v8 = (void *)*((_QWORD *)this + 7);
    if ( v8 && !*((_QWORD *)this + 8) )
      goto LABEL_9;
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
    {
      ObCloseHandle((HANDLE)v6, (v6 & 0xFFFFFFFF80000000uLL) == 0);
      v8 = (void *)*((_QWORD *)this + 7);
LABEL_9:
      VidMmDereferenceObjectAsync(v8);
    }
  }
  if ( bTracingEnabled )
  {
    v6 = *((_QWORD *)this + 4);
    v7 = *(unsigned int *)v6;
    a4 = (unsigned int)(v7 - 3) > 3 ? *v5 : (PVOID)*((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_pxqqt(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL),
        &EventDestroyProcessAllocation,
        a3,
        a4,
        RegionSize,
        v7,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL) + 8LL),
        1);
  }
  v9 = WdLogNewEntry5_WdEvent(v6, v7, a3, a4);
  *(_QWORD *)(v9 + 24) = this;
  WdLogEvent5_WdEvent(v9);
  v10 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  v11 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3);
  if ( v10[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) || *v11 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) )
    __fastfail(3u);
  *v11 = (VIDMM_RECYCLE_BLOCK *)v10;
  v10[1] = (VIDMM_RECYCLE_BLOCK *)v11;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
