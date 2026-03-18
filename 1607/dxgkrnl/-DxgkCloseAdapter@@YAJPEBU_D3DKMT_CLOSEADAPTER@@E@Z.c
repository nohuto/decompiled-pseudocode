/*
 * XREFs of ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00CD880
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkCloseAdapter(const struct _D3DKMT_CLOSEADAPTER *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_CLOSEADAPTER *v4; // rbx
  unsigned int hAdapter; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v12; // rax

  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
  if ( PsGetProcessDxgProcess(CurrentProcess, v7) )
  {
    v9 = DXGADAPTER::DestroyHandle(hAdapter);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    v9 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v10, 2002);
  return v9;
}
