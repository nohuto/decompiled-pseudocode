/*
 * XREFs of ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00861DC
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqt @ 0x1C0020924 (Template_pqt.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *a2,
        __int64 a3)
{
  __int16 v3; // ax
  __int64 VidPnSourceId; // rcx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax

  v3 = Microsoft_Windows_DxgKrnlEnableBits;
  VidPnSourceId = a2->VidPnSourceId;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    Template_pqt(VidPnSourceId, (__int64)a2, a3, this, VidPnSourceId, a2->Visible != 0);
    v3 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C0056840 & 2) != 0 && (v3 & 0x2000) != 0 )
    Template_q(VidPnSourceId, &EventProfilerEnter, a3, 5011);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_27;
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
    goto LABEL_14;
  }
LABEL_27:
  v13 = 0;
LABEL_14:
  v15 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *))(*((_QWORD *)this + 2) + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v24[3] = 275LL;
    v24[4] = 16LL;
    v24[5] = this;
    v24[6] = CurrentIrql;
    v25 = KeGetCurrentIrql();
    v24[7] = v25;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v13 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v14, v16);
    v26[3] = 275LL;
    v26[4] = 25LL;
    v27 = *(int *)(v9 + 136);
    v26[7] = 0LL;
    v26[5] = v27;
    v26[6] = v13;
    WdLogEvent5_WdCriticalError(v26);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v18[3] = v15;
  v18[4] = a2->VidPnSourceId;
  v18[5] = a2->Visible;
  WdLogEvent5_WdEvent(v18);
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v28 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v28 + 24) = v15;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (int)v15 >= 0 )
  {
    v20 = *((_QWORD *)this + 14);
    *(_BYTE *)(1016LL * a2->VidPnSourceId + v20 + 705) = a2->Visible;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 5011);
  return (unsigned int)v15;
}
