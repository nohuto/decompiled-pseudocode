/*
 * XREFs of NtTraceControl @ 0x1404CE420
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140558690 (PerfDiagpProxyWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405C6504 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x14011B954 (EtwpCreateActivityId.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     WdiUpdateSem @ 0x14025BE1C (WdiUpdateSem.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpUseDescriptorTypeUm @ 0x14040998C (EtwpUseDescriptorTypeUm.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x14040EE8C (EtwpValidateLoggerInfo.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x1404D2CA0 (EtwpSetProviderTraitsUm.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1404D5934 (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     EtwpAddNotificationEvent @ 0x140546790 (EtwpAddNotificationEvent.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x14054D1D8 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     EtwpGetTraceGuidList @ 0x14054E108 (EtwpGetTraceGuidList.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 *     WdiDispatchControl @ 0x140551E3C (WdiDispatchControl.c)
 *     EtwpSendReplyDataBlock @ 0x140555A80 (EtwpSendReplyDataBlock.c)
 *     EtwpTrackProviderBinary @ 0x140558080 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x140558144 (EtwpReceiveReplyDataBlock.c)
 *     EtwpStartTrace @ 0x140559FF0 (EtwpStartTrace.c)
 *     EtwpGetTraceGroupList @ 0x14055CEF4 (EtwpGetTraceGroupList.c)
 *     EtwpGetDisallowList @ 0x14055CFB0 (EtwpGetDisallowList.c)
 *     EtwpEnumerateTraceGuids @ 0x14055E30C (EtwpEnumerateTraceGuids.c)
 *     EtwpRegisterSecurityProvider @ 0x1405C2950 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwpQueryReferenceTime @ 0x1406E2A94 (EtwpQueryReferenceTime.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // r14
  unsigned int *v9; // rbx
  PULONG v10; // rsi
  _DWORD *v11; // rcx
  NTSTATUS TraceGuidList; // edi
  int v13; // eax
  unsigned int v14; // r15d
  ULONG v15; // r13d
  ULONG v16; // eax
  unsigned int *PoolWithQuotaTag; // rax
  NTSTATUS updated; // eax
  __int64 v19; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  NTSTATUS Trace; // eax
  __int64 v25; // rdx
  _DWORD *v26; // rax
  size_t v27; // [rsp+20h] [rbp-68h] BYREF
  int v28; // [rsp+28h] [rbp-60h]
  unsigned int *v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  ULONG Size; // [rsp+A0h] [rbp+18h]

  Size = InputBufferLength;
  v8 = (unsigned int)FunctionCode;
  v9 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > MmUserProbeAddress
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else
    {
      Size = 0;
    }
    if ( OutputBuffer )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    v10 = ReturnLength;
    if ( !ReturnLength )
    {
      TraceGuidList = -1073741811;
      HIDWORD(v27) = -1073741811;
      goto LABEL_41;
    }
    v11 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
  }
  else
  {
    v10 = ReturnLength;
  }
  if ( (unsigned int)v8 <= 0x1B && (v13 = 134238208, _bittest(&v13, v8)) )
  {
    v15 = OutputBufferLength;
    v14 = Size;
  }
  else
  {
    v14 = Size;
    v15 = OutputBufferLength;
    if ( Size || OutputBufferLength )
    {
      if ( Size > OutputBufferLength )
        v16 = Size;
      else
        v16 = OutputBufferLength;
      PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v16, 0x50777445u);
      v9 = PoolWithQuotaTag;
      v29 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        TraceGuidList = -1073741801;
        goto LABEL_41;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, Size);
    }
  }
  if ( (_DWORD)v8 != 15 )
  {
    if ( (_DWORD)v8 == 12 )
    {
      if ( v15 == 16 )
      {
        TraceGuidList = 0;
        EtwpCreateActivityId(OutputBuffer);
        goto LABEL_29;
      }
      goto LABEL_124;
    }
    if ( (_DWORD)v8 == 30 )
    {
      if ( v14 == 24 && v15 - 120 <= 0xFF88 )
      {
        updated = EtwpSetProviderTraitsUm(v9, v15, &v27);
        goto LABEL_28;
      }
LABEL_124:
      TraceGuidList = -1073741811;
      goto LABEL_29;
    }
    v21 = 0x140000000uLL;
    switch ( (int)v8 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        if ( v14 < 0xB0 || v15 < 0xB0 )
          goto LABEL_126;
        TraceGuidList = EtwpValidateLoggerInfo(v9);
        if ( TraceGuidList < 0 )
          goto LABEL_75;
        if ( *v9 > v14 )
        {
LABEL_126:
          TraceGuidList = -1073741306;
          goto LABEL_29;
        }
        TraceGuidList = 0;
LABEL_75:
        if ( TraceGuidList < 0 )
          goto LABEL_29;
        switch ( (_DWORD)v8 )
        {
          case 3:
            Trace = EtwpQueryTrace(v23);
            break;
          case 1:
            Trace = EtwpStartTrace();
            break;
          case 2:
            Trace = EtwpStopTrace(v23, 0);
            break;
          case 4:
            Trace = EtwpUpdateTrace();
            break;
          case 5:
            Trace = EtwpFlushTrace();
            break;
          default:
            goto LABEL_79;
        }
        TraceGuidList = Trace;
LABEL_79:
        LODWORD(v27) = 176;
        goto LABEL_29;
      case 11:
        if ( v14 != 96 || v15 != 96 )
          goto LABEL_124;
        updated = EtwpRealtimeConnect(v9);
        LODWORD(v27) = 96;
        goto LABEL_28;
      case 13:
        if ( v14 != 48 || v15 )
          goto LABEL_124;
        updated = WdiDispatchControl(v9);
        goto LABEL_28;
      case 14:
        if ( v14 != 8 || v15 )
          goto LABEL_124;
        v30 = *(unsigned int *)InputBuffer;
        TraceGuidList = EtwpRealtimeDisconnectConsumerByHandle();
        goto LABEL_29;
      case 16:
        if ( v14 || v15 - 72 > 0xFFB8 )
          goto LABEL_124;
        updated = EtwpReceiveNotification(v9);
        goto LABEL_28;
      case 17:
        if ( v14 < 0x48 || v15 != 72 || v9[1] != v14 )
          goto LABEL_124;
        if ( *v9 == 3 )
        {
          if ( v14 < 0x78 )
            goto LABEL_124;
          LOBYTE(v21) = 1;
          updated = EtwpEnableGuid(v9, v21);
          LODWORD(v27) = 72;
        }
        else
        {
          updated = EtwpNotifyGuid(v9);
          LODWORD(v27) = 72;
        }
        goto LABEL_28;
      case 18:
        if ( v14 < 0x48 || v9[1] != v14 )
          goto LABEL_124;
        v9[9] = PsGetCurrentThreadProcessId();
        updated = EtwpSendReplyDataBlock(v9);
        goto LABEL_28;
      case 19:
        if ( v14 != 8 )
          goto LABEL_124;
        TraceGuidList = EtwpReceiveReplyDataBlock(v9);
        LODWORD(v27) = v28;
        goto LABEL_29;
      case 20:
        if ( v14 || v15 )
          goto LABEL_124;
        updated = WdiUpdateSem();
        goto LABEL_28;
      case 21:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpGetTraceGuidList(v9, &v27);
        goto LABEL_29;
      case 22:
        if ( v14 != 16 )
          goto LABEL_124;
        LODWORD(v27) = v15;
        updated = EtwpGetTraceGuidInfo(v9, v9, &v27);
        goto LABEL_28;
      case 23:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpEnumerateTraceGuids(v9, &v27);
        goto LABEL_29;
      case 24:
        if ( v14 || v15 )
          goto LABEL_124;
        updated = EtwpRegisterSecurityProvider();
        goto LABEL_28;
      case 25:
        if ( v14 != 4 || v15 != 16 )
          goto LABEL_124;
        updated = EtwpQueryReferenceTime(*v9, v9);
        LODWORD(v27) = 16;
        goto LABEL_28;
      case 26:
        if ( v14 != 8 )
          goto LABEL_124;
        TraceGuidList = EtwpTrackProviderBinary(v9);
        LODWORD(v27) = 0;
        goto LABEL_29;
      case 27:
        if ( v14 != 4 )
          goto LABEL_124;
        v22 = *(unsigned int *)InputBuffer;
        v31 = v22;
        if ( !v22 )
          goto LABEL_124;
        TraceGuidList = EtwpAddNotificationEvent();
        goto LABEL_29;
      case 28:
        if ( v14 < 8 )
          goto LABEL_124;
        v25 = v9[1];
        if ( 16 * v25 + 8 != v14 )
          goto LABEL_124;
        if ( (_DWORD)v25 )
          v26 = v9 + 2;
        else
          v26 = 0LL;
        EtwpUpdateDisallowList(*v9, v25, v26);
        TraceGuidList = HIDWORD(v27);
        goto LABEL_29;
      case 31:
        if ( v14 != 16 || v15 )
          goto LABEL_124;
        updated = EtwpUseDescriptorTypeUm((__int64)v9);
        goto LABEL_28;
      case 32:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpGetTraceGroupList(v9, &v27);
        goto LABEL_29;
      case 33:
        if ( v14 != 16 )
          goto LABEL_124;
        LODWORD(v27) = v15;
        updated = EtwpGetTraceGroupInfo(v9, v9, &v27);
        goto LABEL_28;
      case 34:
        if ( v14 != 8 )
          goto LABEL_124;
        LODWORD(v27) = v15;
        updated = EtwpGetDisallowList(v9, v9, &v27);
        goto LABEL_28;
      default:
        TraceGuidList = -1073741808;
        goto LABEL_29;
    }
  }
  if ( v14 != 160 || v15 - 160 > 0xFF60 )
    goto LABEL_124;
  updated = EtwpRegisterUMGuid((__int64)v9, v15, (unsigned int *)&v27);
LABEL_28:
  TraceGuidList = updated;
LABEL_29:
  if ( TraceGuidList >= 0 )
  {
    if ( (_DWORD)v27 )
      memmove(OutputBuffer, v9, (unsigned int)v27);
    *v10 = v27;
  }
  if ( TraceGuidList == -1073741789 && ((unsigned int)(v8 - 15) <= 1 || (unsigned int)(v8 - 21) <= 1)
    || (unsigned int)v8 <= 0x22 && (v19 = 0x700880000LL, _bittest64(&v19, v8)) )
  {
    *v10 = v27;
  }
LABEL_41:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return TraceGuidList;
}
