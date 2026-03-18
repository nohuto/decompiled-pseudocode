/*
 * XREFs of ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C0085E38
 * Callers:
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B9AE8 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00B9E40 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5012);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v21 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_10:
      v11 = 0;
      goto LABEL_11;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_10;
  v11 = *(_DWORD *)(v7 + 136);
LABEL_11:
  v13 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *))(*((_QWORD *)this + 2)
                                                                                            + 520LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v12, v14);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v11 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v12, v14);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v7 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v11;
    WdLogEvent5_WdCriticalError(v24);
  }
  v16 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v16 + 24) = v13;
  *(_QWORD *)(v16 + 32) = a2;
  WdLogEvent5_WdEvent(v16);
  if ( (_DWORD)v13 != -1073741801 && (_DWORD)v13 != -1071774906 && (_DWORD)v13 != -1071774904 && (_DWORD)v13 )
  {
    v26 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v26 + 24) = v13;
    WdLogEvent5_WdError(v26);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 5012);
  return (unsigned int)v13;
}
