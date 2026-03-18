/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0085F9C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  ULONG TimeIncrement; // eax
  int v19; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+28h] [rbp-58h]
  _QWORD v32[8]; // [rsp+30h] [rbp-50h] BYREF

  memset(v32, 0, sizeof(v32));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v30 = MEMORY[0xFFFFF78000000320];
  v7 = v30 * KeQueryTimeIncrement();
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v25 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v25);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_24;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 136);
    goto LABEL_12;
  }
LABEL_24:
  v13 = 0;
LABEL_12:
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v13 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v28[3] = 275LL;
    v28[4] = 25LL;
    v28[5] = *(int *)(v9 + 136);
    v28[6] = v13;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  v31 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v19 = *(_DWORD *)(*((_QWORD *)this + 2) + 268LL);
  memset(&v32[1], 0, 36);
  LODWORD(v32[7]) = a2->AffectedVidPnSourceId;
  HIDWORD(v32[6]) = v19;
  HIDWORD(v32[7]) = (v31 * (unsigned __int64)TimeIncrement - v7) / 0x2710;
  v32[0] = 0x4000000006LL;
  LODWORD(v32[6]) = 80;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v20[3] = v15;
  v20[4] = a2->hFunctionalVidPn;
  v20[5] = a2->AffectedVidPnSourceId;
  v20[6] = a2->MonitorConnectivityChecks;
  v20[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v20);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 != -1071774920 && (_DWORD)v15 )
  {
    v29 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 5009);
  return (unsigned int)v15;
}
