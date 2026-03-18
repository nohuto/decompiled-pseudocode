/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddress(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  char v5; // r15
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v8; // rbx
  int v9; // ebp
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // r8
  HANDLE hAllocation; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 5010LL);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v5 = 1;
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)a1 + 2), 1);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)a1 + 2)) < 1105 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v6 + 480))(
            *(_QWORD *)(v6 + 224),
            a2);
    goto LABEL_10;
  }
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
      goto LABEL_6;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 136);
    goto LABEL_7;
  }
LABEL_6:
  v9 = 0;
LABEL_7:
  v10 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)a1 + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 224LL),
          a2);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = a1;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v9 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v21[3] = 275LL;
    v21[4] = 25LL;
    v22 = *(int *)(v8 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v9;
    WdLogEvent5_WdCriticalError(v21);
  }
LABEL_10:
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = (int)v10;
  v11[4] = a2->VidPnSourceId;
  v11[5] = a2->PrimarySegment;
  v11[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v11[7] = hAllocation;
  if ( v10 != -1073741811 && v10 != -1073741801 && v10 )
  {
    v23 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v23 + 24) = (int)v10;
    WdLogEvent5_WdError(v23);
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)a1 + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(hAllocation, &EventProfilerExit, v12, 5010LL);
  return v10;
}
