/*
 * XREFs of ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A80F0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00AF070 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01724F4 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0189C14 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018A568 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018AE80 (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresent(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 DmaSize; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5031);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
    v10 = ProcessDxgProcess + 88;
  else
    v10 = 0LL;
  v11 = 0;
  if ( v10 && *(struct _KTHREAD **)(v10 + 8) == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v31 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v9 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *(_DWORD *)(v10 + 16);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v12, &EventBlockThread, v13, v32);
      }
      ExAcquirePushLockExclusiveEx(v10, 0LL);
    }
    v11 = 2;
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_40;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v33 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v16 = 0LL;
      goto LABEL_40;
    }
    v16 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v20 = *(_DWORD *)(v16 + 136);
    goto LABEL_20;
  }
LABEL_40:
  v20 = 0;
LABEL_20:
  v22 = (*(int (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 608LL))(a2, a3);
  v25 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v25 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21, v23);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( v16 && *(_DWORD *)(v16 + 136) != v20 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21, v23);
    v36[3] = 275LL;
    v36[4] = 25LL;
    v37 = *(int *)(v16 + 136);
    v36[7] = 0LL;
    v36[5] = v37;
    v36[6] = v20;
    WdLogEvent5_WdCriticalError(v36);
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v21, v23, v24);
  v26[3] = v22;
  v26[4] = a2;
  v26[5] = a3->SubRectCnt;
  v26[6] = a3->pDmaBuffer;
  DmaSize = a3->DmaSize;
  v26[7] = DmaSize;
  if ( (_DWORD)v22 != -1073741816
    && (_DWORD)v22 != -1073741801
    && (_DWORD)v22 != -1073741795
    && (_DWORD)v22 != -1073741674
    && (_DWORD)v22 != -1073741670
    && (_DWORD)v22 != -1071775743
    && (_DWORD)v22 != -1071775736
    && (_DWORD)v22 != -1071775232
    && (_DWORD)v22 )
  {
    v38 = WdLogNewEntry5_WdError(DmaSize);
    *(_QWORD *)(v38 + 24) = v22;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v11 == 2 )
  {
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 5031);
  return (unsigned int)v22;
}
