/*
 * XREFs of NtTraceControl @ 0x140436E10
 * Callers:
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpProxyWorker @ 0x140508358 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140548F90 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpCreateActivityId @ 0x1400E4A38 (EtwpCreateActivityId.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WdiUpdateSem @ 0x14020CB58 (WdiUpdateSem.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpUseDescriptorTypeUm @ 0x1403B51A4 (EtwpUseDescriptorTypeUm.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x14046C820 (EtwpSetProviderTraitsUm.c)
 *     EtwpAddNotificationEvent @ 0x1404B35AC (EtwpAddNotificationEvent.c)
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1404B60F8 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     EtwpGetTraceGuidInfo @ 0x1404BF9D8 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x1404C6270 (EtwpUpdateDisallowList.c)
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x1404CC16C (EtwpValidateLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1404CE40C (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x1404CFF08 (EtwpSendReplyDataBlock.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404CFFE4 (EtwpReceiveReplyDataBlock.c)
 *     EtwpEnumerateTraceGuids @ 0x1404E307C (EtwpEnumerateTraceGuids.c)
 *     WdiDispatchControl @ 0x140505580 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x14054B668 (EtwpRegisterSecurityProvider.c)
 *     EtwpGetDisallowList @ 0x1406601A0 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1406602C4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1406605E4 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140660664 (EtwpGetTraceGuidList.c)
 *     EtwpQueryReferenceTime @ 0x1406606E0 (EtwpQueryReferenceTime.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // r13
  unsigned int *v9; // rbx
  PULONG v10; // r15
  _DWORD *v11; // rcx
  NTSTATUS TraceGuidList; // edi
  int v13; // eax
  unsigned int v14; // esi
  ULONG v15; // edi
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
    if ( (_DWORD)v8 == 30 )
    {
      if ( v14 == 24 && v15 - 120 <= 0xFF88 )
      {
        updated = EtwpSetProviderTraitsUm(v9, v15, &v27);
        goto LABEL_28;
      }
LABEL_118:
      TraceGuidList = -1073741811;
      goto LABEL_29;
    }
    if ( (_DWORD)v8 == 12 )
    {
      if ( v15 == 16 )
      {
        TraceGuidList = 0;
        EtwpCreateActivityId(OutputBuffer);
        goto LABEL_29;
      }
      goto LABEL_118;
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
          goto LABEL_120;
        TraceGuidList = EtwpValidateLoggerInfo(v9);
        if ( TraceGuidList < 0 )
          goto LABEL_73;
        if ( *v9 > v14 )
        {
LABEL_120:
          TraceGuidList = -1073741306;
          goto LABEL_29;
        }
        TraceGuidList = 0;
LABEL_73:
        if ( TraceGuidList < 0 )
          goto LABEL_29;
        switch ( (_DWORD)v8 )
        {
          case 3:
            Trace = EtwpQueryTrace();
            break;
          case 1:
            Trace = EtwpStartTrace();
            break;
          case 2:
            Trace = EtwpStopTrace(v23, 0LL);
            break;
          case 4:
            Trace = EtwpUpdateTrace();
            break;
          case 5:
            Trace = EtwpFlushTrace();
            break;
          default:
            goto LABEL_77;
        }
        TraceGuidList = Trace;
LABEL_77:
        LODWORD(v27) = 176;
        goto LABEL_29;
      case 11:
        if ( v14 != 96 || v15 != 96 )
          goto LABEL_118;
        updated = EtwpRealtimeConnect(v9);
        LODWORD(v27) = 96;
        goto LABEL_28;
      case 13:
        if ( v14 != 48 || v15 )
          goto LABEL_118;
        updated = WdiDispatchControl(v9);
        goto LABEL_28;
      case 14:
        if ( v14 != 8 || v15 )
          goto LABEL_118;
        v30 = *(unsigned int *)InputBuffer;
        TraceGuidList = EtwpRealtimeDisconnectConsumerByHandle();
        goto LABEL_29;
      case 16:
        if ( v14 || v15 - 72 > 0xFFB8 )
          goto LABEL_118;
        updated = EtwpReceiveNotification(v9);
        goto LABEL_28;
      case 17:
        if ( v14 < 0x48 || v15 != 72 || v9[1] != v14 )
          goto LABEL_118;
        if ( *v9 == 3 )
        {
          if ( v14 < 0x78 )
            goto LABEL_118;
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
          goto LABEL_118;
        v9[9] = PsGetCurrentThreadProcessId();
        updated = EtwpSendReplyDataBlock(v9);
        goto LABEL_28;
      case 19:
        if ( v14 != 8 )
          goto LABEL_118;
        TraceGuidList = EtwpReceiveReplyDataBlock(v9);
        LODWORD(v27) = v28;
        goto LABEL_29;
      case 20:
        if ( v14 || v15 )
          goto LABEL_118;
        updated = WdiUpdateSem();
        goto LABEL_28;
      case 21:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpGetTraceGuidList(v9, &v27);
        goto LABEL_29;
      case 22:
        if ( v14 != 16 )
          goto LABEL_118;
        LODWORD(v27) = v15;
        updated = EtwpGetTraceGuidInfo(v9, v9, &v27);
        goto LABEL_28;
      case 23:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpEnumerateTraceGuids(v9, &v27);
        goto LABEL_29;
      case 24:
        if ( v14 || v15 )
          goto LABEL_118;
        updated = EtwpRegisterSecurityProvider();
        goto LABEL_28;
      case 25:
        if ( v14 != 4 || v15 != 16 )
          goto LABEL_118;
        updated = EtwpQueryReferenceTime(*v9, v9);
        LODWORD(v27) = 16;
        goto LABEL_28;
      case 26:
        if ( v14 != 8 )
          goto LABEL_118;
        TraceGuidList = EtwpTrackProviderBinary(v9);
        LODWORD(v27) = 0;
        goto LABEL_29;
      case 27:
        if ( v14 != 4 )
          goto LABEL_118;
        v22 = *(unsigned int *)InputBuffer;
        v31 = v22;
        if ( !v22 )
          goto LABEL_118;
        TraceGuidList = EtwpAddNotificationEvent();
        goto LABEL_29;
      case 28:
        if ( v14 < 8 )
          goto LABEL_118;
        v25 = v9[1];
        if ( 16 * v25 + 8 != v14 )
          goto LABEL_118;
        if ( (_DWORD)v25 )
          v26 = v9 + 2;
        else
          v26 = 0LL;
        EtwpUpdateDisallowList(*v9, v25, v26);
        TraceGuidList = HIDWORD(v27);
        goto LABEL_29;
      case 31:
        if ( v14 != 16 || v15 )
          goto LABEL_118;
        updated = EtwpUseDescriptorTypeUm((__int64)v9);
        goto LABEL_28;
      case 32:
        LODWORD(v27) = v15;
        TraceGuidList = EtwpGetTraceGroupList(v9, &v27);
        goto LABEL_29;
      case 33:
        if ( v14 != 16 )
          goto LABEL_118;
        LODWORD(v27) = v15;
        updated = EtwpGetTraceGroupInfo(v9, v9, &v27);
        goto LABEL_28;
      case 34:
        if ( v14 != 8 )
          goto LABEL_118;
        LODWORD(v27) = v15;
        updated = EtwpGetDisallowList(v9, v9, &v27);
        goto LABEL_28;
      default:
        TraceGuidList = -1073741808;
        goto LABEL_29;
    }
  }
  if ( v14 != 160 || v15 - 160 > 0xFF60 )
    goto LABEL_118;
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
