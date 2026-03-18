/*
 * XREFs of DpiMiracastPerfHandleChunkSent @ 0x1C0030D34
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     Template_qqz @ 0x1C002E91C (Template_qqz.c)
 *     DpiMiracastPerfChunkReportViolation @ 0x1C00303F0 (DpiMiracastPerfChunkReportViolation.c)
 *     DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0030598 (DpiMiracastPerfGetCurrentFrameRecord.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C0031E5C (TraceLoggingWriteMiracastStartSessionTotalTimeMs.c)
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
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 599) )
  {
    *(_DWORD *)(a1 + 668) = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 648)) / 10000LL;
    DpiMiracastPerfReportGlobalConfiguration(a1);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqz(
        v4,
        &EventMiracastPerfTrackStartMiracastSessionDone,
        v5,
        *(_DWORD *)(a1 + 448),
        *(_DWORD *)(a1 + 204),
        *(const wchar_t **)(a1 + 360));
    TraceLoggingWriteMiracastStartSessionTotalTimeMs(a1);
    *(_BYTE *)(a1 + 599) = 1;
  }
  if ( *(_BYTE *)(a1 + 808) && (!*(_BYTE *)(a1 + 811) || !*(_BYTE *)(a1 + 810)) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    if ( !*(_BYTE *)(a1 + 811) )
    {
      *(_BYTE *)(a1 + 810) = byte_1C0056E98 == 0;
      *(_BYTE *)(a1 + 811) = 1;
      *(_QWORD *)(a1 + 1048) = (*a2 & 0xFFFFFFFFFFLL) + 32;
    }
    if ( *(_BYTE *)(a1 + 810) || (*a2 & 0xFFFFFFFFFFuLL) <= *(_QWORD *)(a1 + 1048) )
      goto LABEL_23;
    CurrentFrameRecord = DpiMiracastPerfGetCurrentFrameRecord(a1, a2, 0, &v12);
    if ( CurrentFrameRecord < 0 || (v7 = 32LL * v12, *(_BYTE *)(v7 + a1 + 1082)) || *(_BYTE *)(v7 + a1 + 1081) )
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
      v8 = *(_DWORD *)(v7 + a1 + 1072);
      if ( v8 )
      {
        v10 = v8 - 1;
        *(_DWORD *)(v7 + a1 + 1072) = v10;
        if ( (*a2 & 0xFFFFFF0000000000uLL) != 0 )
          goto LABEL_23;
        *(_BYTE *)(v7 + a1 + 1081) = 1;
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
