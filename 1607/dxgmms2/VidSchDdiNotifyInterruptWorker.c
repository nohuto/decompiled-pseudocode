/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000B8C0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000B7E0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C00272A0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000BC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000C0E0 (VidSchiProcessIsrVSync.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000CC54 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CD48 (VidSchiProcessIsrPreemptedPacket.c)
 *     LogPageFaultInformation @ 0x1C00224EC (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0024708 (VidSchiProcessIsrFaultedPacket.c)
 */

void __fastcall VidSchDdiNotifyInterruptWorker(
        __int64 a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 InterruptType; // rdx
  unsigned int v7; // r14d
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 SubmissionFenceId; // rsi
  __int64 v18; // rbp
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  int v24; // ebx
  __int64 NodeOrdinal; // r8
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 ProcessingTime; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // rax
  unsigned int v41; // eax
  _QWORD *v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 384);
  InterruptType = (unsigned int)a2->InterruptType;
  v7 = a3;
  if ( (unsigned int)InterruptType <= 0xA )
  {
    v9 = 1160;
    if ( _bittest(&v9, InterruptType) )
    {
      if ( (*(_DWORD *)(v4 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v4 + 60) > 1u && (a2->Flags.Value & 1) != 0 )
        {
          if ( (_DWORD)InterruptType == 7 )
            NodeOrdinal = a2->DmaCompleted.NodeOrdinal;
          else
            NodeOrdinal = (_DWORD)InterruptType == 10 ? a2->DmaCompleted.NodeOrdinal : a2->CrtcVsync.PhysicalAdapterMask;
          if ( !(_DWORD)NodeOrdinal )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType, NodeOrdinal, a4);
            v26[3] = 281LL;
            v26[4] = 6LL;
            v26[5] = v4;
            v26[6] = 0LL;
            v26[7] = 0LL;
            WdLogEvent5_WdCriticalError(v26);
            JUMPOUT(0x1C001A61CLL);
          }
        }
        v10 = MEMORY[0xFFFFF78000000320];
        v11 = VidSchiProcessIsrVSync(*(struct _VIDSCH_GLOBAL **)(a1 + 384), a2);
        if ( v11 == -1 || v11 >= *(_DWORD *)(v4 + 40) )
        {
          v27 = *(unsigned int *)(v4 + 5080);
          *(_QWORD *)(v4 + 8 * v27 + 5088) = v10;
          v28 = 10 * (v27 + 64);
          *(_OWORD *)(v4 + 8 * v28) = *(_OWORD *)&a2->InterruptType;
          *(_OWORD *)(v4 + 8 * v28 + 16) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
          *(_OWORD *)(v4 + 8 * v28 + 32) = *(_OWORD *)&a2->Reserved.Reserved[6];
          *(_OWORD *)(v4 + 8 * v28 + 48) = *(_OWORD *)&a2->Reserved.Reserved[10];
          *(_OWORD *)(v4 + 8 * v28 + 64) = *(_OWORD *)&a2->Reserved.Reserved[14];
          *(_DWORD *)(v4 + 5080) = ((unsigned __int8)*(_DWORD *)(v4 + 5080) + 1) & 3;
        }
        else
        {
          _mm_lfence();
          v12 = *(_QWORD *)(v4 + 8LL * v11 + 2968);
          v13 = *(unsigned int *)(v12 + 18876);
          *(_QWORD *)(v12 + 8 * v13 + 18880) = v10;
          v13 *= 10LL;
          *(_OWORD *)(v12 + 8 * v13 + 18912) = *(_OWORD *)&a2->InterruptType;
          *(_OWORD *)(v12 + 8 * v13 + 18928) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
          *(_OWORD *)(v12 + 8 * v13 + 18944) = *(_OWORD *)&a2->Reserved.Reserved[6];
          *(_OWORD *)(v12 + 8 * v13 + 18960) = *(_OWORD *)&a2->Reserved.Reserved[10];
          *(_OWORD *)(v12 + 8 * v13 + 18976) = *(_OWORD *)&a2->Reserved.Reserved[14];
          *(_DWORD *)(v12 + 18876) = ((unsigned __int8)*(_DWORD *)(v12 + 18876) + 1) & 3;
        }
        return;
      }
    }
  }
  switch ( (_DWORD)InterruptType )
  {
    case 1:
      if ( (*(_DWORD *)(v4 + 36) & 1) == 0 )
        return;
      v14 = a2->DmaCompleted.NodeOrdinal + *(unsigned __int8 *)(a2->DmaCompleted.EngineOrdinal + v4 + 64);
      v15 = *(_QWORD *)(v4 + 400);
      if ( _bittest64(&v15, v14) )
        return;
      v16 = *(_QWORD *)(v4 + 8 * v14 + 408);
      if ( *(_DWORD *)(v16 + 16) == 1 )
        return;
      if ( (_DWORD)a3 && *(_DWORD *)(v16 + 16) == 2 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v14, a3, a4);
        v29[3] = 281LL;
        v29[4] = 16LL;
        v29[5] = v4;
        v29[6] = *(unsigned __int16 *)(v16 + 4);
        v29[7] = 0LL;
        WdLogEvent5_WdCriticalError(v29);
        JUMPOUT(0x1C001A6A9LL);
      }
      SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
      v18 = *(unsigned int *)(v16 + 64);
      v19 = *(_QWORD *)(v16 + 24);
      if ( (_DWORD)SubmissionFenceId != (_DWORD)v18 && (_DWORD)SubmissionFenceId != *(_DWORD *)(v16 + 72) )
      {
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 152), 0, 0);
        if ( v20 < (unsigned int)v18 )
        {
          if ( (unsigned int)SubmissionFenceId <= v20 || (unsigned int)SubmissionFenceId >= (unsigned int)v18 )
            goto LABEL_20;
        }
        else if ( (unsigned int)SubmissionFenceId <= v20 && (unsigned int)SubmissionFenceId >= (unsigned int)v18 )
        {
          goto LABEL_20;
        }
        v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v14, a3, a4);
        v30[3] = 281LL;
        v30[4] = 1LL;
        v30[5] = SubmissionFenceId;
        v30[6] = v18;
        v30[7] = *(_QWORD *)(v19 + 16);
        WdLogEvent5_WdCriticalError(v30);
        JUMPOUT(0x1C001A6E9LL);
      }
LABEL_20:
      VidSchiProcessIsrCompletedPacket(v16, (unsigned int)SubmissionFenceId, a3, a2);
      return;
    case 2:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
      {
        v21 = a2->DmaCompleted.EngineOrdinal + *(unsigned __int8 *)(a2->DmaPreempted.EngineOrdinal + v4 + 64);
        v22 = *(_QWORD *)(v4 + 400);
        if ( !_bittest64(&v22, v21) )
        {
          v23 = *(_QWORD *)(v4 + 8 * v21 + 408);
          if ( *(_DWORD *)(v23 + 16) != 1 )
          {
            if ( (_DWORD)a3 && *(_DWORD *)(v23 + 16) == 2 )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v21, a3, a4);
              v31[3] = 281LL;
              v31[4] = 16LL;
              v31[5] = v4;
              v31[6] = *(unsigned __int16 *)(v23 + 4);
              v31[7] = 0LL;
              WdLogEvent5_WdCriticalError(v31);
              JUMPOUT(0x1C001A71CLL);
            }
            if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                                 (struct _VIDSCH_NODE *)v23,
                                 a2->DmaCompleted.SubmissionFenceId,
                                 1,
                                 0LL)
              && (unsigned int)VidSchiVerifyDriverReportedFenceId(
                                 (struct _VIDSCH_NODE *)v23,
                                 a2->DmaCompleted.NodeOrdinal,
                                 0,
                                 &v44) )
            {
              do
              {
                v24 = VidSchiProcessIsrCompletedPacket(v23, v44, v7, a2);
                VidSchiProcessIsrPreemptedPacket(v23, a2->DmaCompleted.SubmissionFenceId, v7, a2);
              }
              while ( v24 );
            }
          }
        }
      }
      break;
    case 4:
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType, a3, a4);
      v32[3] = 281LL;
      v32[4] = 13LL;
      v32[5] = a2->DmaCompleted.EngineOrdinal;
      v32[6] = a2->DmaPreempted.EngineOrdinal;
      v32[7] = a2->DmaCompleted.SubmissionFenceId;
      WdLogEvent5_WdCriticalError(v32);
      JUMPOUT(0x1C001A751LL);
    default:
      if ( (_DWORD)InterruptType == 9 && (*(_DWORD *)(v4 + 36) & 4) != 0 )
      {
        ProcessingTime = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
        if ( (ProcessingTime & 0x10) != 0 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType, a3, a4);
          v34[3] = 281LL;
          v34[4] = 12LL;
          v34[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
          v34[6] = a2->DmaCompleted.SubmissionFenceId;
          v34[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
          WdLogEvent5_WdCriticalError(v34);
          JUMPOUT(0x1C001A79BLL);
        }
        if ( (ProcessingTime & 0xC) == 0xC )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType, a3, a4);
          v35[3] = 281LL;
          v35[4] = 13LL;
          v35[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
          v35[6] = a2->DmaPageFaulted.FaultedProcessHandle;
          v35[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
          WdLogEvent5_WdCriticalError(v35);
          JUMPOUT(0x1C001A7DCLL);
        }
        if ( (unsigned int)ProcessingTime >= 0x40 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType, a3, a4);
          v36[3] = 281LL;
          v36[4] = 13LL;
          v36[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
          v36[6] = a2->DmaPageFaulted.FaultedProcessHandle;
          v36[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
          WdLogEvent5_WdCriticalError(v36);
          JUMPOUT(0x1C001A819LL);
        }
        v37 = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize
            + *(unsigned __int8 *)(a2->DmaPageFaulted.EngineOrdinal + v4 + 64);
        v38 = *(_QWORD *)(v4 + 400);
        if ( _bittest64(&v38, v37) )
        {
          LogPageFaultInformation(1LL, a1, a2);
        }
        else
        {
          v39 = *(_QWORD *)(v4 + 8 * v37 + 408);
          if ( *(_DWORD *)(v39 + 16) == 1 )
          {
            LogPageFaultInformation(2LL, a1, a2);
          }
          else
          {
            if ( (_DWORD)a3 && *(_DWORD *)(v39 + 16) == 2 )
            {
              v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v37, a3, a4);
              v40[3] = 281LL;
              v40[4] = 16LL;
              v40[5] = v4;
              v40[6] = *(unsigned __int16 *)(v39 + 4);
              v40[7] = 0LL;
              WdLogEvent5_WdCriticalError(v40);
              JUMPOUT(0x1C001A8B0LL);
            }
            v41 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
            if ( (v41 & 2) != 0 )
            {
              if ( (v41 & 0xC) == 0 )
              {
                v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v37, a3, a4);
                v42[3] = 281LL;
                v42[4] = 13LL;
                v42[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
                v42[6] = a2->DmaPageFaulted.FaultedProcessHandle;
                v42[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
                WdLogEvent5_WdCriticalError(v42);
                JUMPOUT(0x1C001A8F3LL);
              }
              if ( (v41 & 4) != 0 )
              {
                LogPageFaultInformation(3LL, a1, a2);
                *(_DWORD *)(v39 + 1944) = 1;
              }
              else
              {
                LogPageFaultInformation(4LL, a1, a2);
                *(_DWORD *)(v39 + 1940) = 1;
              }
            }
            else if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                                      (struct _VIDSCH_NODE *)v39,
                                      a2->DmaCompleted.SubmissionFenceId,
                                      0,
                                      &v44) )
            {
              VidSchiProcessIsrCompletedPacket(v39, v44, v7, a2);
              VidSchiProcessIsrFaultedPacket(v39, v44, v7, a2);
              v43 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
              if ( (v43 & 4) != 0 )
              {
                LogPageFaultInformation(3LL, a1, a2);
              }
              else if ( (v43 & 8) != 0 )
              {
                LogPageFaultInformation(4LL, a1, a2);
              }
              else
              {
                LogPageFaultInformation(5LL, a1, a2);
              }
            }
          }
        }
      }
      break;
  }
}
