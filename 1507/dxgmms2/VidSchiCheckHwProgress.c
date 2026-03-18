/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C0032B80
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchWaitForEvents @ 0x1C001D6E0 (VidSchWaitForEvents.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0032900 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C00051EC (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C0005278 (VidSchiCheckTimeoutForced.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0032C30 (VidSchiCheckNodeTimeout.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00763F8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C0076434 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C0076B80 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 */

_BOOL8 __fastcall VidSchiCheckHwProgress(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned int *v4; // rbx
  int v5; // esi
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  _ULARGE_INTEGER v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_BYTE *)a1 + 2600) && MEMORY[0xFFFFF78000000320] >= *((_QWORD *)a1 + 322) )
    (*((void (__fastcall **)(_QWORD))a1 + 317))(*((_QWORD *)a1 + 2));
  if ( VidSchiCheckTimeoutForced((__int64)a1) )
  {
    VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
  }
  else if ( !VidSchIsTDRPending((__int64)a1) )
  {
    v2 = 0LL;
    if ( *((_DWORD *)a1 + 14) )
    {
      while ( !(unsigned int)VidSchiCheckNodeTimeout(*((_QWORD *)a1 + v2 + 46), &v7) )
      {
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= *((_DWORD *)a1 + 14) )
          goto LABEL_7;
      }
      v4 = (unsigned int *)*((_QWORD *)a1 + v2 + 46);
      v5 = 0;
      if ( v4[508] )
      {
        v5 = 10;
      }
      else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v4, &v8) || !(unsigned __int8)VidSchiResetEngines(v4, v8) )
      {
        v5 = 9;
      }
      v4[507] = 0;
      v4[508] = 0;
      if ( v5 && !VidSchIsTDRPending((__int64)a1) && !(unsigned int)VidSchiReportHwHang(a1, v7.QuadPart, v5, v4) )
        VidSchResetGPUTimeout(a1);
    }
LABEL_7:
    if ( (unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, &v7, &v6)
      && !(unsigned int)VidSchiReportHwHang(a1, v7.QuadPart, 3, &v6) )
    {
      VidSchResetFlipQueueTimeout(a1);
    }
  }
  return !VidSchIsTDRPending((__int64)a1);
}
