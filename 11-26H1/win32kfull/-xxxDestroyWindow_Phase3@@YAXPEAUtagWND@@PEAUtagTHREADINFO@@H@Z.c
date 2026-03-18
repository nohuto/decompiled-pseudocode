/*
 * XREFs of ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750
 * Callers:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1402A6D6C (DisassociateShellFrameAppThreads2.c)
 */

void __fastcall xxxDestroyWindow_Phase3(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = *((_QWORD *)a1 + 13);
  if ( v3 && !a3 )
  {
    v6 = *(_QWORD *)(v3 + 16);
    if ( *(struct tagWND **)(v6 + 1592) == a1 )
    {
      HMAssignmentUnlock(v6 + 1592);
      DisassociateShellFrameAppThreads2(v6, a2);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && !IsTopLevelWindow((__int64)a1) )
    {
      v7 = *((_QWORD *)a1 + 2);
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL);
      if ( v7 != v8 )
        zzzAttachThreadInput(v7, v8, 0LL);
    }
    if ( *((_QWORD *)a1 + 13) )
      UnlinkWindow(a1);
  }
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 58) + 128LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4236LL);
  SetOrClrWF(1, a1, 0x380u, 1);
}
