/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C003A610
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchWaitForEvents @ 0x1C0010748 (VidSchWaitForEvents.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000B6B0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000B870 (VidSchiCheckTimeoutForced.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000EB40 (VidSchiNeedToForcePreemptNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 *     VidSchiCheckNodeTimeout @ 0x1C003A870 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C008A2D0 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C008A30C (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C008A8AC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  LARGE_INTEGER v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  ULONGLONG v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // esi
  __int64 v10; // rdi
  ULONGLONG v11; // rax
  unsigned int v12; // edi
  int v13; // esi
  __int64 v14; // rdi
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+18h] BYREF
  ULONGLONG pullResult; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( RtlULongLongMult(v4.QuadPart, 0x989680uLL, &pullResult) >= 0 )
    v7 = pullResult / v5;
  else
    v7 = 10000000 * (v6 / v5) + 10000000 * (v6 % v5) / v5;
  if ( *(_BYTE *)(a1 + 2552) && v7 >= *(_QWORD *)(a1 + 2536) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 2496))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
  v8 = 0;
  v9 = 0;
  for ( *a2 = 0; v9 < *(_DWORD *)(a1 + 56); ++v9 )
  {
    v10 = *(_QWORD *)(a1 + 8LL * v9 + 376);
    v11 = *(_QWORD *)(v10 + 120);
    if ( v11 && v11 <= v7 )
    {
      if ( VidSchiNeedToForcePreemptNode(*(_QWORD *)(a1 + 8LL * v9 + 376)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 2728));
        VidSchiSubmitPreemptionCommand(v10);
      }
      else
      {
        *a2 = 1;
      }
      *(_QWORD *)(v10 + 120) = 0LL;
    }
  }
  if ( VidSchiCheckTimeoutForced(a1) )
  {
    VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
  }
  else if ( !VidSchIsTDRPending(a1) )
  {
    v12 = 0;
    if ( *(_DWORD *)(a1 + 56) )
    {
      while ( !(unsigned int)VidSchiCheckNodeTimeout(*(_QWORD *)(a1 + 8LL * v12 + 376), &v18) )
      {
        if ( ++v12 >= *(_DWORD *)(a1 + 56) )
          goto LABEL_31;
      }
      v13 = 0;
      v14 = *(_QWORD *)(a1 + 8LL * v12 + 376);
      if ( *(_DWORD *)(v14 + 1904) )
      {
        v13 = 10;
      }
      else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v14, &v16)
             || !(unsigned __int8)VidSchiResetEngines(v14, v16) )
      {
        v13 = 9;
      }
      *(_DWORD *)(v14 + 1900) = 0;
      *(_DWORD *)(v14 + 1904) = 0;
      if ( v13 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v18, v13, v14) )
        VidSchResetGPUTimeout(a1);
    }
LABEL_31:
    if ( (unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v18, &v17)
      && !(unsigned int)VidSchiReportHwHang(a1, v18, 3, (__int64)&v17) )
    {
      VidSchResetFlipQueueTimeout(a1);
    }
  }
  LOBYTE(v8) = !VidSchIsTDRPending(a1);
  return v8;
}
