/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C0043C50
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0001E3C (VidSchWaitForEvents.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00433D0 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchiNeedToForcePreemptNode @ 0x1C0001114 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000A140 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000A310 (VidSchiCheckTimeoutForced.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0040C30 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0043DE0 (VidSchiCheckNodeTimeout.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C009FA90 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C009FAD4 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 */

_BOOL8 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  LARGE_INTEGER v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rbx
  int v12; // esi
  int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0;
  v4 = KeQueryPerformanceCounter(&v15);
  if ( is_mul_ok(v4.QuadPart, 0x989680uLL) )
    v5 = (unsigned __int64)v4.QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)v15.QuadPart;
  else
    v5 = 10000000 * (v4.QuadPart / (unsigned __int64)v15.QuadPart)
       + 10000000 * (v4.QuadPart % (unsigned __int64)v15.QuadPart) / v15.QuadPart;
  if ( *(_BYTE *)(a1 + 2928) && v5 >= *(_QWORD *)(a1 + 2912) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 2872))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
  v6 = 0LL;
  for ( *a2 = 0; (unsigned int)v6 < *(_DWORD *)(a1 + 60); v6 = (unsigned int)(v6 + 1) )
  {
    v7 = *(_QWORD *)(a1 + 8 * v6 + 408);
    v8 = *(_QWORD *)(v7 + 128);
    if ( v8 && v8 <= v5 )
    {
      if ( VidSchiNeedToForcePreemptNode(*(_QWORD *)(a1 + 8 * v6 + 408)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 948));
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 2768));
        VidSchiSubmitPreemptionCommand(v7);
      }
      else
      {
        *a2 = 1;
      }
      *(_QWORD *)(v7 + 128) = 0LL;
    }
  }
  if ( VidSchiCheckTimeoutForced(a1) )
  {
    VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
  }
  else if ( !VidSchIsTDRPending(a1) )
  {
    v9 = 0LL;
    if ( *(_DWORD *)(a1 + 60) )
    {
      while ( !(unsigned int)VidSchiCheckNodeTimeout(*(_QWORD *)(a1 + 8 * v9 + 408), &v14) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 60) )
          goto LABEL_12;
      }
      v11 = *(_QWORD *)(a1 + 8 * v9 + 408);
      v12 = 0;
      if ( *(_DWORD *)(v11 + 1944) )
      {
        v12 = 10;
      }
      else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v11, &v16)
             || !(unsigned __int8)VidSchiResetEngines(v11, v16) )
      {
        v12 = 9;
      }
      *(_DWORD *)(v11 + 1940) = 0;
      *(_DWORD *)(v11 + 1944) = 0;
      if ( v12 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v14, v12, v11) )
        VidSchResetGPUTimeout(a1);
    }
LABEL_12:
    if ( (unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v14, &v13)
      && !(unsigned int)VidSchiReportHwHang(a1, v14, 3, (__int64)&v13) )
    {
      VidSchResetFlipQueueTimeout(a1);
    }
  }
  return !VidSchIsTDRPending(a1);
}
