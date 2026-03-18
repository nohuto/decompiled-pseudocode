/*
 * XREFs of ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C00858AC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01A11D4 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(
        DXGADAPTER **this,
        struct _DXGKARG_QUERYVIDPNHWCAPABILITY *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned __int8 v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5047);
  if ( (int)DXGADAPTER::GetDriverVersion(this[2]) < 1105 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v22 + 24) = 2464LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_QWORD *)this[2] + 84) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v23 + 24) = 2465LL;
    WdLogEvent5_WdAssertion(v23);
  }
  DXGADAPTER::AcquireDdiSync((__int64)this[2], 1);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v24 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
      goto LABEL_27;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v12 = *(_DWORD *)(v8 + 136);
    goto LABEL_16;
  }
LABEL_27:
  v12 = 0;
LABEL_16:
  v14 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYVIDPNHWCAPABILITY *))this[2] + 84))(
          *((_QWORD *)this[2] + 30),
          a2);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v13, v15);
    v25[3] = 275LL;
    v25[4] = 16LL;
    v25[5] = this;
    v25[6] = CurrentIrql;
    v26 = KeGetCurrentIrql();
    v25[7] = v26;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v12 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v13, v15);
    v27[3] = 275LL;
    v27[4] = 25LL;
    v28 = *(int *)(v8 + 136);
    v27[7] = 0LL;
    v27[5] = v28;
    v27[6] = v12;
    WdLogEvent5_WdCriticalError(v27);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v13, v15, v16);
  v18[3] = v14;
  v18[4] = *((_QWORD *)this[2] + 30);
  v18[5] = a2->hFunctionalVidPn;
  v18[6] = a2->TargetId;
  v18[7] = &a2->VidPnHWCaps;
  if ( (_DWORD)v14 != -1073741801 && (_DWORD)v14 )
  {
    v29 = WdLogNewEntry5_WdError(&a2->VidPnHWCaps);
    *(_QWORD *)(v29 + 24) = v14;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 5047);
  return (unsigned int)v14;
}
