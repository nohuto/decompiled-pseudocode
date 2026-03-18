/*
 * XREFs of DpiGdiHandleAsyncMonitorEventCallout @ 0x1C0193180
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall DpiGdiHandleAsyncMonitorEventCallout(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v14, 0, 0x20uLL);
  LODWORD(v14[0]) = 9;
  v14[2] = Context + 8;
  LOBYTE(v5) = 1;
  v6 = SMgrGdiCallout(v14, 0LL, v5, 0LL, 0LL, Context + 32);
  v11 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( !*((_DWORD *)Context + 5) )
  {
    v13 = *((_QWORD *)Context + 3);
    if ( ((v13 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && v13 != 2 && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
      Template_q(v13, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Stop, v9, *((_DWORD *)Context + 4));
  }
  if ( *Context )
    _InterlockedDecrement(&dword_1C0057014);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItem);
}
