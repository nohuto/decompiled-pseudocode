/*
 * XREFs of NtTraceControl @ 0x14040CC00
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404C3114 (PerfDiagpProxyWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1405345D4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14057E008 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCreateActivityId @ 0x14009F6A4 (EtwpCreateActivityId.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WdiUpdateSem @ 0x1402244F4 (WdiUpdateSem.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AD08 (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpSetProviderTraitsUm @ 0x14040851C (EtwpSetProviderTraitsUm.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x14048E998 (EtwpValidateLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x14048EBE8 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x140491860 (EtwpAddNotificationEvent.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140493660 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpSendReplyDataBlock @ 0x1404959D0 (EtwpSendReplyDataBlock.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404B7390 (EtwpReceiveReplyDataBlock.c)
 *     WdiDispatchControl @ 0x1404C6994 (WdiDispatchControl.c)
 *     EtwpGetTraceGuidInfo @ 0x1404CC1F8 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1404CE898 (EtwpTrackProviderBinary.c)
 *     EtwpStartTrace @ 0x1404D0FB8 (EtwpStartTrace.c)
 *     EtwpEnumerateTraceGuids @ 0x140528E08 (EtwpEnumerateTraceGuids.c)
 *     EtwpUpdateDisallowList @ 0x14052D9DC (EtwpUpdateDisallowList.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwpGetDisallowList @ 0x1406A01C0 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A02C8 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1406A060C (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1406A06A4 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1406A0738 (EtwpUseDescriptorTypeUm.c)
 *     EtwpQueryReferenceTime @ 0x1406A079C (EtwpQueryReferenceTime.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // rbx
  ULONG *v9; // r14
  ULONG v10; // edx
  __int64 v11; // r8
  volatile void *v12; // r9
  PULONG v13; // rsi
  __int64 v14; // rcx
  NTSTATUS TraceGuidList; // edi
  int v16; // eax
  ULONG v17; // r15d
  ULONG v18; // edi
  ULONG v19; // eax
  ULONG *PoolWithQuotaTag; // rax
  NTSTATUS updated; // eax
  __int64 v22; // rcx
  __int64 v24; // rcx
  NTSTATUS Trace; // eax
  ULONG v26; // edx
  _DWORD *v27; // rax
  unsigned __int8 v28; // [rsp+30h] [rbp-68h]
  unsigned int v29; // [rsp+34h] [rbp-64h] BYREF
  int v30; // [rsp+38h] [rbp-60h]
  unsigned int v31; // [rsp+3Ch] [rbp-5Ch]
  __int64 v32; // [rsp+40h] [rbp-58h]
  ULONG *v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]
  __int64 v35; // [rsp+58h] [rbp-40h]

  v8 = (unsigned int)FunctionCode;
  v9 = 0LL;
  v33 = 0LL;
  v29 = 0;
  v32 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  v30 = v10;
  v28 = v10;
  if ( (_BYTE)v11 )
  {
    if ( (v8 & 0x80000000) != 0LL )
    {
      LODWORD(v8) = v8 & 0x7FFFFFFF;
      v28 = 1;
    }
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > 0x7FFFFFFF0000LL
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = v10;
    }
    if ( v12 )
      ProbeForWrite(v12, OutputBufferLength, 1u);
    else
      OutputBufferLength = v10;
    v13 = ReturnLength;
    if ( !ReturnLength )
    {
      TraceGuidList = -1073741811;
      v30 = -1073741811;
      goto LABEL_43;
    }
    v14 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    v13 = ReturnLength;
  }
  if ( (unsigned int)v8 <= 0x1B && (v16 = 134238208, _bittest(&v16, v8)) )
  {
    v18 = OutputBufferLength;
    v17 = InputBufferLength;
  }
  else
  {
    v17 = InputBufferLength;
    v18 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      if ( InputBufferLength > OutputBufferLength )
        v19 = InputBufferLength;
      else
        v19 = OutputBufferLength;
      PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x50777445u);
      v9 = PoolWithQuotaTag;
      v33 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        TraceGuidList = -1073741801;
        goto LABEL_43;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, InputBufferLength);
    }
  }
  if ( (_DWORD)v8 != 15 )
  {
    if ( (_DWORD)v8 == 12 )
    {
      if ( v18 == 16 )
      {
        TraceGuidList = 0;
        EtwpCreateActivityId(OutputBuffer);
        goto LABEL_31;
      }
      goto LABEL_119;
    }
    if ( (_DWORD)v8 == 30 )
    {
      if ( v17 == 24 && v18 - 120 <= 0xFF88 )
      {
        updated = EtwpSetProviderTraitsUm((__int64)v9, v18, (__int64)&v29);
        goto LABEL_30;
      }
LABEL_119:
      TraceGuidList = -1073741811;
      goto LABEL_31;
    }
    switch ( (int)v8 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        if ( v17 < 0xB0 || v18 < 0xB0 )
          goto LABEL_121;
        TraceGuidList = EtwpValidateLoggerInfo(v9);
        if ( TraceGuidList < 0 )
          goto LABEL_75;
        if ( *v9 > v17 )
        {
LABEL_121:
          TraceGuidList = -1073741306;
          goto LABEL_31;
        }
        TraceGuidList = 0;
LABEL_75:
        if ( TraceGuidList < 0 )
          goto LABEL_31;
        switch ( (_DWORD)v8 )
        {
          case 3:
            Trace = EtwpQueryTrace(v32, v9);
            break;
          case 1:
            Trace = EtwpStartTrace(v32, v9);
            break;
          case 2:
            Trace = EtwpStopTrace(v32, v9, 0LL);
            break;
          case 4:
            Trace = EtwpUpdateTrace(v32, v9);
            break;
          case 5:
            Trace = EtwpFlushTrace(v32, v9);
            break;
          default:
            goto LABEL_79;
        }
        TraceGuidList = Trace;
LABEL_79:
        v29 = 176;
        goto LABEL_31;
      case 11:
        if ( v17 != 96 || v18 != 96 )
          goto LABEL_119;
        updated = EtwpRealtimeConnect(v9);
        v29 = 96;
        goto LABEL_30;
      case 13:
        if ( v17 != 48 || v18 )
          goto LABEL_119;
        updated = WdiDispatchControl(v9);
        goto LABEL_30;
      case 14:
        if ( v17 != 8 || v18 )
          goto LABEL_119;
        v34 = *(unsigned int *)InputBuffer;
        TraceGuidList = EtwpRealtimeDisconnectConsumerByHandle();
        goto LABEL_31;
      case 16:
        if ( v17 || v18 - 72 > 0xFFB8 )
          goto LABEL_119;
        updated = EtwpReceiveNotification(v9);
        goto LABEL_30;
      case 17:
        if ( v17 < 0x48 || v18 != 72 || v9[1] != v17 )
          goto LABEL_119;
        if ( *v9 == 3 )
        {
          if ( v17 < 0x78 )
            goto LABEL_119;
          LOBYTE(v11) = 1;
          updated = EtwpEnableGuid(v32, v9, v11);
          v29 = 72;
        }
        else
        {
          LOBYTE(v11) = 1;
          updated = EtwpNotifyGuid(v32, v9, v11);
          v29 = 72;
        }
        goto LABEL_30;
      case 18:
        if ( v17 < 0x48 || v9[1] != v17 )
          goto LABEL_119;
        v9[9] = PsGetCurrentThreadProcessId();
        updated = EtwpSendReplyDataBlock(v9);
        goto LABEL_30;
      case 19:
        if ( v17 != 8 )
          goto LABEL_119;
        TraceGuidList = EtwpReceiveReplyDataBlock(v9);
        v29 = v31;
        goto LABEL_31;
      case 20:
        if ( v17 || v18 )
          goto LABEL_119;
        updated = WdiUpdateSem();
        goto LABEL_30;
      case 21:
        v29 = v18;
        TraceGuidList = EtwpGetTraceGuidList(v32, v9, &v29);
        goto LABEL_31;
      case 22:
        if ( v17 != 16 )
          goto LABEL_119;
        v29 = v18;
        updated = EtwpGetTraceGuidInfo(v32, v9, v9, &v29);
        goto LABEL_30;
      case 23:
        v29 = v18;
        TraceGuidList = EtwpEnumerateTraceGuids(v32, v9, &v29);
        goto LABEL_31;
      case 24:
        if ( v17 || v18 )
          goto LABEL_119;
        if ( !*(_DWORD *)(v32 + 5028) )
        {
          *(_DWORD *)(v32 + 5028) = PsGetCurrentThreadProcessId();
          updated = 0;
          goto LABEL_30;
        }
        TraceGuidList = -1073741790;
        goto LABEL_31;
      case 25:
        if ( v17 != 4 || v18 != 16 )
          goto LABEL_119;
        updated = EtwpQueryReferenceTime(v32, *v9, v9);
        v29 = 16;
        goto LABEL_30;
      case 26:
        if ( v17 != 8 )
          goto LABEL_119;
        TraceGuidList = EtwpTrackProviderBinary(v32, v9);
        v29 = 0;
        goto LABEL_31;
      case 27:
        if ( v17 != 4 )
          goto LABEL_119;
        v24 = *(unsigned int *)InputBuffer;
        v35 = v24;
        if ( !v24 )
          goto LABEL_119;
        TraceGuidList = EtwpAddNotificationEvent(v24, v28);
        goto LABEL_31;
      case 28:
        if ( v17 < 8 )
          goto LABEL_119;
        v26 = v9[1];
        if ( 16LL * v26 + 8 != v17 )
          goto LABEL_119;
        if ( v26 )
          v27 = v9 + 2;
        else
          v27 = 0LL;
        updated = EtwpUpdateDisallowList(v32, *v9, v26, v27);
        goto LABEL_30;
      case 31:
        if ( v17 != 16 || v18 )
          goto LABEL_119;
        updated = EtwpUseDescriptorTypeUm(v9);
        goto LABEL_30;
      case 32:
        v29 = v18;
        TraceGuidList = EtwpGetTraceGroupList(v32, v9, &v29);
        goto LABEL_31;
      case 33:
        if ( v17 != 16 )
          goto LABEL_119;
        v29 = v18;
        updated = EtwpGetTraceGroupInfo(v32, v9, v9, &v29);
        goto LABEL_30;
      case 34:
        if ( v17 != 8 )
          goto LABEL_119;
        v29 = v18;
        updated = EtwpGetDisallowList(v32, v9, v9, &v29);
        goto LABEL_30;
      case 35:
        if ( v17 != 16 || v18 )
          goto LABEL_119;
        updated = EtwpSetCompressionSettings(v9);
        goto LABEL_30;
      case 36:
        if ( v17 != 8 || v18 != 16 )
          goto LABEL_119;
        v29 = 16;
        TraceGuidList = EtwpGetCompressionSettings((unsigned __int16 *)v9, v9);
        if ( !TraceGuidList )
          v29 = 16;
        goto LABEL_31;
      default:
        TraceGuidList = -1073741808;
        goto LABEL_31;
    }
  }
  if ( v17 != 160 || v18 - 160 > 0xFF60 )
    goto LABEL_119;
  updated = EtwpRegisterUMGuid(v32, (_DWORD)v9, v18, v28, (__int64)&v29);
LABEL_30:
  TraceGuidList = updated;
LABEL_31:
  if ( TraceGuidList >= 0 )
  {
    if ( v29 )
      memmove(OutputBuffer, v9, v29);
    *v13 = v29;
  }
  if ( TraceGuidList == -1073741789 && ((unsigned int)(v8 - 15) <= 1 || (unsigned int)(v8 - 21) <= 1)
    || (unsigned int)v8 <= 0x24 && (v22 = 0x1700880000LL, _bittest64(&v22, v8)) )
  {
    *v13 = v29;
  }
LABEL_43:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return TraceGuidList;
}
