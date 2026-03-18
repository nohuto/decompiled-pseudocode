/*
 * XREFs of DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C000C020 (DpiProcessMiracastNotifyDpc.c)
 *     ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x1C002AD60 (-DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C002B1A0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastPerfChunkReportViolation @ 0x1C00303F0 (DpiMiracastPerfChunkReportViolation.c)
 *     DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0030598 (DpiMiracastPerfGetCurrentFrameRecord.c)
 */

void __fastcall DpiMiracastPerfHandleChunkInfo(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v6; // rdi
  int CurrentFrameRecord; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 808) && !*(_BYTE *)(a1 + 810) && (unsigned int)(*(_DWORD *)a3 - 2) <= 2 )
  {
    if ( !a2 )
      KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    if ( *(_BYTE *)(a1 + 810) )
      goto LABEL_32;
    v6 = (_QWORD *)(a3 + 8);
    if ( (*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFuLL) <= *(_QWORD *)(a1 + 1048) )
      goto LABEL_32;
    CurrentFrameRecord = DpiMiracastPerfGetCurrentFrameRecord(a1, (_QWORD *)(a3 + 8), 1, &v17);
    if ( CurrentFrameRecord < 0 )
    {
      if ( CurrentFrameRecord == -1073741275 )
      {
        v15 = *v6 & 0xFFFFFFFFFFLL;
        if ( *(_QWORD *)(a1 + 1040) < v15 )
          *(_QWORD *)(a1 + 1040) = v15;
      }
      else if ( CurrentFrameRecord != -1073741266 || *(_DWORD *)a3 != 3 )
      {
        goto LABEL_32;
      }
      v11 = 1;
    }
    else if ( *(_DWORD *)a3 == 3 )
    {
      if ( (*v6 & 0xFFFFFF0000000000uLL) == 0 )
      {
        v8 = v17;
        v9 = 32 * (v17 + 33LL);
        if ( !*(_QWORD *)(v9 + a1) )
        {
          v10 = *v6 & 0xFFFFFFFFFFLL;
          *(_QWORD *)(v9 + a1) = v10;
          *(_QWORD *)(a1 + 1040) = v10;
          *(_DWORD *)(32 * v8 + a1 + 1064) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
          goto LABEL_32;
        }
      }
      v11 = 2;
    }
    else
    {
      v12 = 32LL * v17;
      if ( *(_BYTE *)(v12 + a1 + 1082) || *(_BYTE *)(v12 + a1 + 1081) )
        goto LABEL_32;
      if ( *(_DWORD *)a3 != 2 )
      {
        v13 = 32 * (v17 + 33LL);
        if ( !*(_QWORD *)(v13 + a1) )
        {
          v14 = *v6 & 0xFFFFFFFFFFLL;
          *(_QWORD *)(v13 + a1) = v14;
          *(_QWORD *)(a1 + 1040) = v14;
          *(_DWORD *)(v12 + a1 + 1064) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        }
        *(_BYTE *)(v12 + a1 + 1082) = 1;
        *(_DWORD *)(v12 + a1 + 1068) = 0;
        *(_DWORD *)(v12 + a1 + 1072) = 0;
        goto LABEL_32;
      }
      if ( *(_BYTE *)(v12 + a1 + 1080) )
      {
LABEL_32:
        if ( !a2 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      if ( *(_QWORD *)(32 * (v17 + 33LL) + a1) )
      {
        ++*(_DWORD *)(v12 + a1 + 1072);
        if ( (*v6 & 0xFFFFFF0000000000uLL) == 0 )
        {
          *(_BYTE *)(v12 + a1 + 1080) = 1;
          *(_DWORD *)(v12 + a1 + 1068) = MEMORY[0xFFFFF78000000008] / 0x2710uLL - *(_DWORD *)(v12 + a1 + 1064);
        }
        goto LABEL_32;
      }
      v11 = 4;
    }
    DpiMiracastPerfChunkReportViolation(a1, (_DWORD *)(a3 + 8), v11);
    goto LABEL_32;
  }
}
