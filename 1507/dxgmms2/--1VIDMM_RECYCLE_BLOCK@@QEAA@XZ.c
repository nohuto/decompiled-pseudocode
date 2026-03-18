/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0064AC0
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010858 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C0010B08 (Template_pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0032600 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  PVOID *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // r9
  __int64 v9; // rsi
  _QWORD *v10; // rax
  void *v11; // rcx
  PVOID v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  VIDMM_RECYCLE_BLOCK **v15; // rdx
  VIDMM_RECYCLE_BLOCK **v16; // rcx
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+38h] [rbp-10h]
  ULONG_PTR v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = (PVOID *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  v20 = *((_QWORD *)this + 6) - v5;
  v6 = **((unsigned int **)this + 4);
  if ( (unsigned int)(v6 - 3) <= 3 )
  {
    if ( (unsigned int)(v6 - 5) <= 1 && v5 )
      MmUnmapViewInSystemSpace((PVOID)v5);
    v11 = (void *)*((_QWORD *)this + 7);
    if ( !v11 || *((_QWORD *)this + 8) )
    {
      v5 = *((_QWORD *)this + 8);
      if ( !v5 )
        goto LABEL_13;
      ObCloseHandle((HANDLE)v5, (v5 & 0xFFFFFFFF80000000uLL) == 0);
      v11 = (void *)*((_QWORD *)this + 7);
    }
    VidMmDereferenceObjectAsync(v11, v6, a3);
    goto LABEL_13;
  }
  if ( v5 )
  {
    v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, &v20, 0x8000u);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, v6, a3, v8);
      v10[3] = *v4;
      v10[4] = this;
      v10[5] = v9;
      WdLogEvent5_WdAssertion(v10);
    }
  }
LABEL_13:
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = *(unsigned int *)v5;
    v12 = (unsigned int)(v6 - 3) > 3 ? *v4 : (PVOID)*((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v19 = 1;
      v13 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL);
      v18 = *(_DWORD *)(v13 + 8);
      v17 = v6;
      Template_pxqqt(v13, &EventDestroyProcessAllocation, a3, v12, v20, v17, v18, v19);
    }
  }
  v14 = WdLogNewEntry5_WdEvent(v5, v6);
  *(_QWORD *)(v14 + 24) = this;
  WdLogEvent5_WdEvent(v14);
  v15 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  v16 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3);
  if ( v15[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) || *v16 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16) )
    __fastfail(3u);
  *v16 = (VIDMM_RECYCLE_BLOCK *)v15;
  v15[1] = (VIDMM_RECYCLE_BLOCK *)v16;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
}
