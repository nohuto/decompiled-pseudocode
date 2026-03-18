/*
 * XREFs of ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7E90 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01489E4 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F038 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F7CC (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresent(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v21; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 DmaSize; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  _QWORD *v40; // rax
  unsigned __int8 v41; // cl
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5031);
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v11 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v36 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v36 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v36);
    v11 = 0LL;
  }
  if ( v11 )
    v12 = v11 + 96;
  else
    v12 = 0LL;
  v13 = 0;
  if ( v12 && *(struct _KTHREAD **)(v12 + 8) == KeGetCurrentThread() )
  {
    v37 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v37 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( v11 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *(_DWORD *)(v12 + 16);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v14, &EventBlockThread, v15, v38);
      }
      ExAcquirePushLockExclusiveEx(v12, 0LL);
    }
    v13 = 2;
    *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_42;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v39 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v39 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v39);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v18, v19);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v21 = 0LL;
      goto LABEL_42;
    }
    v21 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    v25 = *(_DWORD *)(v21 + 136);
    goto LABEL_22;
  }
LABEL_42:
  v25 = 0;
LABEL_22:
  v27 = (*(int (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 592LL))(a2, a3);
  v30 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v30 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v26, v28);
    v40[3] = 275LL;
    v40[4] = 16LL;
    v40[5] = this;
    v40[6] = CurrentIrql;
    v41 = KeGetCurrentIrql();
    v40[7] = v41;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( v21 && *(_DWORD *)(v21 + 136) != v25 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v26, v28);
    v42[3] = 275LL;
    v42[4] = 25LL;
    v43 = *(int *)(v21 + 136);
    v42[7] = 0LL;
    v42[5] = v43;
    v42[6] = v25;
    WdLogEvent5_WdCriticalError(v42);
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v26, v28, v29);
  v31[3] = v27;
  v31[4] = a2;
  v31[5] = a3->SubRectCnt;
  v31[6] = a3->pDmaBuffer;
  DmaSize = a3->DmaSize;
  v31[7] = DmaSize;
  if ( (_DWORD)v27 != -1073741816
    && (_DWORD)v27 != -1073741801
    && (_DWORD)v27 != -1073741795
    && (_DWORD)v27 != -1073741674
    && (_DWORD)v27 != -1073741670
    && (_DWORD)v27 != -1071775743
    && (_DWORD)v27 != -1071775736
    && (_DWORD)v27 != -1071775232
    && (_DWORD)v27 )
  {
    v44 = WdLogNewEntry5_WdError(DmaSize);
    *(_QWORD *)(v44 + 24) = v27;
    WdLogEvent5_WdError(v44);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v13 == 2 )
  {
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 5031);
  return (unsigned int)v27;
}
