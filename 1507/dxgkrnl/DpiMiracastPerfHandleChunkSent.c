/*
 * XREFs of DpiMiracastPerfHandleChunkSent @ 0x1C0029D3C
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C0026580 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     Template_qqzz @ 0x1C0027E3C (Template_qqzz.c)
 *     DpiMiracastPerfChunkReportViolation @ 0x1C00293C0 (DpiMiracastPerfChunkReportViolation.c)
 *     DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0029568 (DpiMiracastPerfGetCurrentFrameRecord.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C002AED4 (TraceLoggingWriteMiracastStartSessionTotalTimeMs.c)
 */

void __fastcall DpiMiracastPerfHandleChunkSent(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int CurrentFrameRecord; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 462) )
  {
    *(_DWORD *)(a1 + 532) = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 512)) / 10000LL;
    DpiMiracastPerfReportGlobalConfiguration(a1);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqzz(
        v4,
        &EventMiracastPerfTrackStartMiracastSessionDone,
        v5,
        *(_DWORD *)(a1 + 312),
        *(_DWORD *)(a1 + 204),
        *(const wchar_t **)(a1 + 256),
        *(const wchar_t **)(a1 + 232));
    TraceLoggingWriteMiracastStartSessionTotalTimeMs(a1);
    *(_BYTE *)(a1 + 462) = 1;
  }
  if ( *(_BYTE *)(a1 + 712) && (!*(_BYTE *)(a1 + 715) || !*(_BYTE *)(a1 + 714)) )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( !*(_BYTE *)(a1 + 715) )
    {
      *(_BYTE *)(a1 + 714) = byte_1C0046C57 == 0;
      *(_BYTE *)(a1 + 715) = 1;
      *(_QWORD *)(a1 + 952) = (*a2 & 0xFFFFFFFFFFLL) + 32;
    }
    if ( *(_BYTE *)(a1 + 714) || (*a2 & 0xFFFFFFFFFFuLL) <= *(_QWORD *)(a1 + 952) )
      goto LABEL_23;
    CurrentFrameRecord = DpiMiracastPerfGetCurrentFrameRecord(a1, a2, 0, &v12);
    if ( CurrentFrameRecord < 0 || (v7 = 32LL * v12, *(_BYTE *)(v7 + a1 + 986)) || *(_BYTE *)(v7 + a1 + 985) )
    {
      if ( CurrentFrameRecord != -1073741275 )
      {
LABEL_23:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      v9 = 5;
    }
    else
    {
      v8 = *(_DWORD *)(v7 + a1 + 976);
      if ( v8 )
      {
        v10 = v8 - 1;
        *(_DWORD *)(v7 + a1 + 976) = v10;
        if ( (*a2 & 0xFFFFFF0000000000uLL) != 0 )
          goto LABEL_23;
        *(_BYTE *)(v7 + a1 + 985) = 1;
        if ( !v10 )
          goto LABEL_23;
        v9 = 6;
      }
      else
      {
        v9 = 7;
      }
    }
    DpiMiracastPerfChunkReportViolation(a1, a2, v9);
    goto LABEL_23;
  }
}
