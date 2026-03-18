/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0099BD4
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // r14
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  _DWORD v36[16]; // [rsp+40h] [rbp-78h] BYREF

  memset(v36, 0, sizeof(v36));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v35 = MEMORY[0xFFFFF78000000320];
  v7 = v35 * KeQueryTimeIncrement();
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v28 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v28);
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
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 496LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v13 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v9 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v13;
    WdLogEvent5_WdCriticalError(v31);
  }
  v34 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkDiagInitializeCodePointPacket(
    v36,
    80,
    *(_DWORD *)(*((_QWORD *)this + 2) + 252LL),
    a2->AffectedVidPnSourceId,
    (v34 * (unsigned __int64)TimeIncrement - v7) / 0x2710);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v36);
  v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
  v23[3] = v15;
  v23[4] = a2->hFunctionalVidPn;
  v23[5] = a2->AffectedVidPnSourceId;
  v23[6] = a2->MonitorConnectivityChecks;
  v23[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v23);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 != -1071774920 && (_DWORD)v15 )
  {
    v33 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v33 + 24) = v15;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 5009);
  return (unsigned int)v15;
}
