/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C000F5E0 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C235C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00DA848 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01274B4 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(
        DXGADAPTER *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rdi
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE v39[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v40; // [rsp+28h] [rbp-30h]
  int v41; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5000);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( Current )
    v11 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v11 = 0LL;
  v41 = 0;
  v40 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v32 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v32 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
    v41 = 2;
  }
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  CurrentIrql = KeGetCurrentIrql();
  v17 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_33;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v33 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v17 = 0LL;
      goto LABEL_33;
    }
    v17 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    v21 = *(_DWORD *)(v17 + 136);
    goto LABEL_19;
  }
LABEL_33:
  v21 = 0;
LABEL_19:
  v23 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_QUERYADAPTERINFO *))this + 37))(
          *((_QWORD *)this + 28),
          a2);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( v17 && *(_DWORD *)(v17 + 136) != v21 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v22, v24);
    v36[3] = 275LL;
    v36[4] = 25LL;
    v37 = *(int *)(v17 + 136);
    v36[7] = 0LL;
    v36[5] = v37;
    v36[6] = v21;
    WdLogEvent5_WdCriticalError(v36);
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v22, v24, v25);
  v27[3] = v23;
  v27[4] = a2->Type;
  v27[5] = a2->InputDataSize;
  v27[6] = a2->OutputDataSize;
  WdLogEvent5_WdEvent(v27);
  if ( (_DWORD)v23 != -1073741811 && (_DWORD)v23 != -1073741822 && (_DWORD)v23 != -1073741801 && (_DWORD)v23 )
  {
    v38 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v38 + 24) = v23;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 5000);
  return (unsigned int)v23;
}
