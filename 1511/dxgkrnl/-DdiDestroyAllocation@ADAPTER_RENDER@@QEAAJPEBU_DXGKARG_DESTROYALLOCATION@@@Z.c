/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0069BA8
 * Callers:
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0065A5C (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0132F4C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rdi
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  const HANDLE *pAllocationList; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5005);
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
    v8 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v8 = 0LL;
  v35 = 0;
  v34 = v8;
  if ( v8 && v8[1] == KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v26 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v7 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v8);
    v35 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_31;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v27 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_31;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v15 = *(_DWORD *)(v11 + 136);
    goto LABEL_19;
  }
LABEL_31:
  v15 = 0;
LABEL_19:
  v17 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 320LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v15 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v30[3] = 275LL;
    v30[4] = 25LL;
    v31 = *(int *)(v11 + 136);
    v30[7] = 0LL;
    v30[5] = v31;
    v30[6] = v15;
    WdLogEvent5_WdCriticalError(v30);
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v21[3] = v17;
  v21[4] = a2->Flags.Value;
  v21[5] = a2->hResource;
  v21[6] = a2->NumAllocations;
  pAllocationList = a2->pAllocationList;
  if ( pAllocationList )
    pAllocationList = (const HANDLE *)*pAllocationList;
  v21[7] = pAllocationList;
  if ( (_DWORD)v17 )
  {
    v32 = WdLogNewEntry5_WdError(pAllocationList);
    *(_QWORD *)(v32 + 24) = v17;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5005);
  return (unsigned int)v17;
}
