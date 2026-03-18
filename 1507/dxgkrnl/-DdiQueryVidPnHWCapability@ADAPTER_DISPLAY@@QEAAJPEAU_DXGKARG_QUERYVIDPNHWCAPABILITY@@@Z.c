/*
 * XREFs of ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00CECC8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C0172FD8 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(
        DXGADAPTER **this,
        struct _DXGKARG_QUERYVIDPNHWCAPABILITY *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5047);
  if ( (int)DXGADAPTER::GetDriverVersion(this[2]) < 1105 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v28 + 24) = 28390LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_QWORD *)this[2] + 82) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v29 + 24) = 28391LL;
    WdLogEvent5_WdAssertion(v29);
  }
  DXGADAPTER::AcquireDdiSync((__int64)this[2], 1);
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v30 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v30);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v14 = 0LL;
      goto LABEL_27;
    }
    v14 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v18 = *(_DWORD *)(v14 + 136);
    goto LABEL_16;
  }
LABEL_27:
  v18 = 0;
LABEL_16:
  v20 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYVIDPNHWCAPABILITY *))this[2] + 82))(
          *((_QWORD *)this[2] + 28),
          a2);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v18 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v33[3] = 275LL;
    v33[4] = 25LL;
    v34 = *(int *)(v14 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v18;
    WdLogEvent5_WdCriticalError(v33);
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v19, v21, v22);
  v24[3] = v20;
  v24[4] = *((_QWORD *)this[2] + 28);
  v24[5] = a2->hFunctionalVidPn;
  v24[6] = a2->TargetId;
  v24[7] = &a2->VidPnHWCaps;
  if ( (_DWORD)v20 != -1073741801 && (_DWORD)v20 )
  {
    v35 = WdLogNewEntry5_WdError(&a2->VidPnHWCaps);
    *(_QWORD *)(v35 + 24) = v20;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 5047);
  return (unsigned int)v20;
}
