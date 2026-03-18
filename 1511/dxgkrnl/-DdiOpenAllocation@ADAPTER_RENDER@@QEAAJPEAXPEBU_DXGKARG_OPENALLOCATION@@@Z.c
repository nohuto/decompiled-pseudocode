/*
 * XREFs of ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C01245FC
 * Callers:
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C0072190 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiOpenAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_OPENALLOCATION *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  DXGK_OPENALLOCATIONINFO *pOpenAllocation; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5028);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
LABEL_13:
      v17 = 0;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_13;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_14:
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_OPENALLOCATION *))(*((_QWORD *)this + 2) + 568LL))(a2, a3);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v12 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v17;
    WdLogEvent5_WdCriticalError(v25);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v20, v21);
  v27[3] = v19;
  v27[4] = a2;
  v27[5] = a3->pOpenAllocation->hAllocation;
  v27[6] = a3->pOpenAllocation->pPrivateDriverData;
  pOpenAllocation = a3->pOpenAllocation;
  v27[7] = pOpenAllocation->hDeviceSpecificAllocation;
  if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    v29 = WdLogNewEntry5_WdError(pOpenAllocation);
    *(_QWORD *)(v29 + 24) = v19;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( !a3->pOpenAllocation->hDeviceSpecificAllocation && (int)v19 >= 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v31 + 24) = 28841LL;
    WdLogEvent5_WdAssertion(v31);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 5028);
  return (unsigned int)v19;
}
