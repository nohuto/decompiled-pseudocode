/*
 * XREFs of ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00A6C00
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkCloseAdapter(const struct _D3DKMT_CLOSEADAPTER *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_CLOSEADAPTER *v4; // rbx
  unsigned int hAdapter; // ebx
  __int64 CurrentProcess; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2002);
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_CLOSEADAPTER *)MmUserProbeAddress;
    hAdapter = v4->hAdapter;
  }
  else
  {
    hAdapter = v4->hAdapter;
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v12 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v16 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    *(_QWORD *)(v16 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v16);
    v12 = 0LL;
  }
  if ( v12 )
  {
    v13 = DXGADAPTER::DestroyHandle(hAdapter);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9);
    v13 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v14, 2002);
  return v13;
}
