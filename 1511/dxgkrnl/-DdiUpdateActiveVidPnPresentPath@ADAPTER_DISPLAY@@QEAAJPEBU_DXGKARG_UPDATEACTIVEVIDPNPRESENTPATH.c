/*
 * XREFs of ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00998F4
 * Callers:
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5012);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_10;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v22 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v22);
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
                                                                                            + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v12, v14);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v11 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v12, v14);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v7 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v11;
    WdLogEvent5_WdCriticalError(v25);
  }
  v17 = WdLogNewEntry5_WdEvent(v16, v12, v14, v15);
  *(_QWORD *)(v17 + 24) = v13;
  *(_QWORD *)(v17 + 32) = a2;
  WdLogEvent5_WdEvent(v17);
  if ( (_DWORD)v13 != -1073741801 && (_DWORD)v13 != -1071774906 && (_DWORD)v13 != -1071774904 && (_DWORD)v13 )
  {
    v27 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v27 + 24) = v13;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 5012);
  return (unsigned int)v13;
}
