/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C016A4B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int updated; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v14; // [rsp+58h] [rbp+10h] BYREF
  BOOL v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2089);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    v14 = 0;
    v12 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(&v14);
    if ( !v14 || v12 )
    {
      updated = -1073741637;
    }
    else
    {
      v15 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v15, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    updated = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 2089);
  return updated;
}
