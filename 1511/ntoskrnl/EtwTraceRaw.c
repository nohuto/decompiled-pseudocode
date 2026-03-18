/*
 * XREFs of EtwTraceRaw @ 0x14020D7A8
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400F4628 (EtwpGetReserveTraceBufferStatus.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x140667720 (EtwpCheckCurrentUserGuidAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r12
  unsigned int v6; // r13d
  int ReserveTraceBufferStatus; // edi
  __int64 SiloDriverState; // rax
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v13; // rax
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF
  signed __int64 v16[9]; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]

  Src = a2;
  v5 = a3;
  v6 = a1;
  ReserveTraceBufferStatus = 0;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v10 = SiloDriverState;
  if ( v6 < 0x40 )
  {
    LOBYTE(v9) = a4;
    v11 = EtwpOpenLogger(v6, SiloDriverState, v9, &v17);
    v12 = v11;
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_26:
        EtwpCloseLogger(v6, v10, v17);
        goto LABEL_27;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckCurrentUserGuidAccess(v11 + 292);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_26;
        if ( (_DWORD)v5 )
        {
          if ( ((unsigned __int8)Src & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Src + v5 > MmUserProbeAddress || (char *)Src + v5 < Src )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else if ( (*(_DWORD *)(v11 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_26;
      }
      v13 = (void *)EtwpReserveTraceBuffer(v12, (unsigned int)v5, (__int64)v16, &v15, 0);
      if ( v13 )
      {
        memmove(v13, Src, v5);
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v12 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v12, v16);
        }
        EtwpReleaseTraceBuffer(v16);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v12, v5);
      }
      goto LABEL_26;
    }
  }
  ReserveTraceBufferStatus = -1073741816;
LABEL_27:
  PspDereferenceMonitorContextServerSilo(v10 - 128);
  return (unsigned int)ReserveTraceBufferStatus;
}
