/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C00065DC
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0006030 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        DXGADAPTER **this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  char v5; // r15
  DXGADAPTER *v6; // rcx
  int v7; // eax
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // rbx
  int v10; // esi
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // r8
  HANDLE hAllocation; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5010LL);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v5 = 1;
    DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  }
  v6 = this[2];
  v7 = *((_DWORD *)v6 + 448);
  if ( v7 != 0x2000
    && v7 != 4864
    && v7 != 8448
    && !*((_QWORD *)v6 + 88)
    && v7 != 4608
    && (!*((_QWORD *)v6 + 84) || !*((_QWORD *)v6 + 83) || (*((_DWORD *)v6 + 377) & 4) == 0) )
  {
    v11 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))v6 + 62))(
            *((_QWORD *)v6 + 30),
            a2);
    goto LABEL_10;
  }
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v19 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 136);
    goto LABEL_7;
  }
LABEL_6:
  v10 = 0;
LABEL_7:
  v11 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))this[2] + 62))(
          *((_QWORD *)this[2] + 30),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v10 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v9 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v10;
    WdLogEvent5_WdCriticalError(v22);
  }
LABEL_10:
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = (int)v11;
  v12[4] = a2->VidPnSourceId;
  v12[5] = a2->PrimarySegment;
  v12[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v12[7] = hAllocation;
  if ( v11 != -1073741811 && v11 != -1073741801 && v11 )
  {
    v24 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v24 + 24) = (int)v11;
    WdLogEvent5_WdError(v24);
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(this[2]);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(hAllocation, &EventProfilerExit, v13, 5010LL);
  return v11;
}
