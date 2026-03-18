/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0059B94
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0011D08 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C001E214 (Template_pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005E70C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  PVOID *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rax
  VIDMM_RECYCLE_BLOCK **v9; // rdx
  VIDMM_RECYCLE_BLOCK **v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rax
  PVOID v15; // r9
  __int64 v16; // rcx
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+38h] [rbp-10h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v4 = (PVOID *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  RegionSize = *((_QWORD *)this + 6) - v5;
  v6 = **((unsigned int **)this + 4);
  if ( (unsigned int)(v6 - 3) > 3 )
  {
    if ( v5 )
    {
      v11 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, &RegionSize, 0x8000u);
      v13 = v11;
      if ( v11 < 0 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, v6, a3, v12);
        v14[3] = *v4;
        v14[4] = this;
        v14[5] = v13;
        WdLogEvent5_WdAssertion(v14);
      }
    }
  }
  else
  {
    if ( (unsigned int)(v6 - 5) <= 1 && v5 )
      MmUnmapViewInSystemSpace((PVOID)v5);
    v7 = (void *)*((_QWORD *)this + 7);
    if ( v7 && !*((_QWORD *)this + 8) )
      goto LABEL_9;
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      ObCloseHandle((HANDLE)v5, (v5 & 0xFFFFFFFF80000000uLL) == 0);
      v7 = (void *)*((_QWORD *)this + 7);
LABEL_9:
      VidMmDereferenceObjectAsync(v7);
    }
  }
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = *(unsigned int *)v5;
    v15 = (unsigned int)(v6 - 3) > 3 ? *v4 : (PVOID)*((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v19 = 1;
      v16 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL);
      v18 = *(_DWORD *)(v16 + 8);
      v17 = v6;
      Template_pxqqt(v16, &EventDestroyProcessAllocation, a3, v15, RegionSize, v17, v18, v19);
    }
  }
  v8 = WdLogNewEntry5_WdEvent(v5, v6);
  *(_QWORD *)(v8 + 24) = this;
  WdLogEvent5_WdEvent(v8);
  v9 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  v10 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3);
  if ( v9[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) || *v10 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) )
    __fastfail(3u);
  *v10 = (VIDMM_RECYCLE_BLOCK *)v9;
  v9[1] = (VIDMM_RECYCLE_BLOCK *)v10;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
}
