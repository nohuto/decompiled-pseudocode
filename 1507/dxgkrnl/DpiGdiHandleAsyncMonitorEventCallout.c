/*
 * XREFs of DpiGdiHandleAsyncMonitorEventCallout @ 0x1C0166E80
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

void __fastcall DpiGdiHandleAsyncMonitorEventCallout(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v13, 0, 0x20uLL);
  v13[2] = Context;
  LOBYTE(v5) = 1;
  LODWORD(v13[0]) = 9;
  v6 = SMgrGdiCallout(v13, 0LL, v5, 0LL, 0LL);
  v11 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = DpiGdiHandleAsyncMonitorEventCallout;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( !Context[3]
    && ((*((_QWORD *)Context + 2) - 1LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
  {
    Template_q(v8, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Stop, v9, Context[2]);
  }
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItem);
}
