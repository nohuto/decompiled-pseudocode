/*
 * XREFs of ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C014BE14
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRenderKm(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  DXGK_ALLOCATIONLIST *pAllocationList; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5045);
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, ProcessDxgProcess);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v16 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v14 = 0LL;
LABEL_13:
      v19 = 0;
      goto LABEL_14;
    }
    v14 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    goto LABEL_13;
  v19 = *(_DWORD *)(v14 + 136);
LABEL_14:
  v21 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 664LL))(a2, a3);
  v24 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v24 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v20, v22);
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v19 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v20, v22);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v14 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v19;
    WdLogEvent5_WdCriticalError(v27);
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v20, v22, v23);
  v29[3] = v21;
  v29[4] = a2;
  v29[5] = a3->pDmaBuffer;
  v29[6] = a3->DmaSize;
  pAllocationList = a3->pAllocationList;
  v29[7] = pAllocationList;
  if ( (_DWORD)v21 != -1073741816
    && (_DWORD)v21 != -1073741811
    && (_DWORD)v21 != -1073741801
    && (_DWORD)v21 != -1073741592
    && (_DWORD)v21 != -1071775743
    && (_DWORD)v21 != -1071775232
    && (_DWORD)v21 )
  {
    v31 = WdLogNewEntry5_WdError(pAllocationList);
    *(_QWORD *)(v31 + 24) = v21;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 5045);
  return (unsigned int)v21;
}
