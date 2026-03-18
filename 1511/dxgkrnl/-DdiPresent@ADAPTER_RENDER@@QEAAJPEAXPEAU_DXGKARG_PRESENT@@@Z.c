/*
 * XREFs of ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DB48 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00847C4 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C014C6BC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163308 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163A78 (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresent(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 DmaSize; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v35; // [rsp+28h] [rbp-30h]
  int v36; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5031);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( Current )
    v9 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v9 = 0LL;
  v36 = 0;
  v35 = v9;
  if ( v9 && v9[1] == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v27 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v8 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v9);
    v36 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_37;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_37;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v16 = *(_DWORD *)(v12 + 136);
    goto LABEL_19;
  }
LABEL_37:
  v16 = 0;
LABEL_19:
  v18 = (*(int (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 592LL))(a2, a3);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v16 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v12 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v16;
    WdLogEvent5_WdCriticalError(v31);
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v17, v19, v20);
  v22[3] = v18;
  v22[4] = a2;
  v22[5] = a3->SubRectCnt;
  v22[6] = a3->pDmaBuffer;
  DmaSize = a3->DmaSize;
  v22[7] = DmaSize;
  if ( (_DWORD)v18 != -1073741816
    && (_DWORD)v18 != -1073741801
    && (_DWORD)v18 != -1073741795
    && (_DWORD)v18 != -1073741674
    && (_DWORD)v18 != -1073741670
    && (_DWORD)v18 != -1071775743
    && (_DWORD)v18 != -1071775736
    && (_DWORD)v18 != -1071775232
    && (_DWORD)v18 )
  {
    v33 = WdLogNewEntry5_WdError(DmaSize);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 5031);
  return (unsigned int)v18;
}
