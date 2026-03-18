/*
 * XREFs of DpiMiracastPerfHandleChunkSent @ 0x1C00299A4
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C00260D0 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     Template_qqzz @ 0x1C0027A30 (Template_qqzz.c)
 *     sub_1C0029020 @ 0x1C0029020 (sub_1C0029020.c)
 *     sub_1C00291C8 @ 0x1C00291C8 (sub_1C00291C8.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastStartSessionTotalTimeMs @ 0x1C002AB3C (TraceLoggingWriteMiracastStartSessionTotalTimeMs.c)
 */

void __fastcall DpiMiracastPerfHandleChunkSent(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 471) )
  {
    *(_DWORD *)(a1 + 540) = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 520)) / 10000LL;
    DpiMiracastPerfReportGlobalConfiguration(a1);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqzz(
        v4,
        &EventMiracastPerfTrackStartMiracastSessionDone,
        v5,
        *(_DWORD *)(a1 + 320),
        *(_DWORD *)(a1 + 204),
        *(const wchar_t **)(a1 + 256),
        *(const wchar_t **)(a1 + 232));
    TraceLoggingWriteMiracastStartSessionTotalTimeMs(a1);
    *(_BYTE *)(a1 + 471) = 1;
  }
  if ( *(_BYTE *)(a1 + 720) && (!*(_BYTE *)(a1 + 723) || !*(_BYTE *)(a1 + 722)) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    if ( !*(_BYTE *)(a1 + 723) )
    {
      *(_BYTE *)(a1 + 722) = byte_1C0046CD7 == 0;
      *(_BYTE *)(a1 + 723) = 1;
      *(_QWORD *)(a1 + 960) = (*a2 & 0xFFFFFFFFFFLL) + 32;
    }
    if ( *(_BYTE *)(a1 + 722) || (*a2 & 0xFFFFFFFFFFuLL) <= *(_QWORD *)(a1 + 960) )
      goto LABEL_23;
    v6 = sub_1C00291C8(a1, a2, 0, &v12);
    if ( v6 < 0 || (v7 = 32LL * v12, *(_BYTE *)(v7 + a1 + 994)) || *(_BYTE *)(v7 + a1 + 993) )
    {
      if ( v6 != -1073741275 )
      {
LABEL_23:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      v9 = 5;
    }
    else
    {
      v8 = *(_DWORD *)(v7 + a1 + 984);
      if ( v8 )
      {
        v10 = v8 - 1;
        *(_DWORD *)(v7 + a1 + 984) = v10;
        if ( (*a2 & 0xFFFFFF0000000000uLL) != 0 )
          goto LABEL_23;
        *(_BYTE *)(v7 + a1 + 993) = 1;
        if ( !v10 )
          goto LABEL_23;
        v9 = 6;
      }
      else
      {
        v9 = 7;
      }
    }
    sub_1C0029020(a1, a2, v9);
    goto LABEL_23;
  }
}
