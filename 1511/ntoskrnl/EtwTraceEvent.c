/*
 * XREFs of EtwTraceEvent @ 0x14012EE88
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x1400E2250 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400F4628 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // r14
  char v8; // r12
  __int64 SiloDriverState; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // esi
  char *v16; // rdx
  unsigned int v17; // ecx
  ULONG64 v18; // r8
  unsigned __int64 v19; // rbx
  int j; // edx
  unsigned int v21; // ecx
  unsigned int ReserveTraceBufferStatus; // ebx
  char *v23; // rax
  char *v24; // r14
  char *v25; // r12
  int i; // esi
  char *v27; // rdx
  size_t v28; // rcx
  size_t v29; // rbx
  ULONG64 v30; // rcx
  _OWORD *v31; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v34[3]; // [rsp+31h] [rbp-1B7h] BYREF
  int v35; // [rsp+34h] [rbp-1B4h]
  unsigned int v36; // [rsp+38h] [rbp-1B0h]
  int v37; // [rsp+3Ch] [rbp-1ACh]
  int v38; // [rsp+40h] [rbp-1A8h]
  unsigned int Size; // [rsp+44h] [rbp-1A4h]
  int Size_4; // [rsp+48h] [rbp-1A0h]
  int v41; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v42; // [rsp+50h] [rbp-198h]
  int v43; // [rsp+54h] [rbp-194h]
  __int64 v44; // [rsp+58h] [rbp-190h]
  char *v45; // [rsp+60h] [rbp-188h]
  _QWORD v46[3]; // [rsp+68h] [rbp-180h] BYREF
  signed __int64 v47[4]; // [rsp+80h] [rbp-168h] BYREF
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v5 = a3;
  Size = a3;
  v8 = a5;
  v37 = 0;
  v35 = 0;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v44 = SiloDriverState;
  v42 = a1;
  if ( a1 >= 0x40u )
  {
    ReserveTraceBufferStatus = -1073741816;
    goto LABEL_62;
  }
  LOBYTE(v10) = a5;
  v11 = EtwpOpenLogger(a1, SiloDriverState, v10, v34);
  v12 = v11;
  v46[1] = v11;
  if ( !v11 )
  {
    ReserveTraceBufferStatus = -1073741816;
    goto LABEL_61;
  }
  v13 = *(_DWORD *)(v11 + 12);
  if ( (v13 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
  }
  else
  {
    if ( !a5 && (v13 & 0x1000000) != 0 )
    {
      ReserveTraceBufferStatus = -1073741637;
      goto LABEL_60;
    }
    if ( a5 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a2 + v5 > MmUserProbeAddress || (unsigned __int16 *)((char *)a2 + v5) < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v36 = *a2;
    if ( v36 < (unsigned int)v5 )
    {
      ReserveTraceBufferStatus = -1073741811;
      v35 = -1073741811;
    }
    else
    {
      v43 = *((_DWORD *)a2 + 11);
      v14 = v43;
      v38 = v43;
      v15 = v36;
      if ( (v43 & 0x100000) == 0 )
      {
LABEL_29:
        v23 = (char *)EtwpReserveTraceBuffer(v12, v15, (__int64)v47, v46, 0);
        v24 = v23;
        v46[2] = v23;
        if ( v23 )
        {
          if ( (v14 & 0x100000) != 0 )
          {
            v25 = &v23[Size];
            v45 = v25;
            memmove(v23, a2, Size);
            for ( i = 0; ; ++i )
            {
              Size_4 = i;
              if ( i >= v37 )
                break;
              v27 = (char *)Src[2 * i];
              v28 = LODWORD(Src[2 * i + 1]);
              if ( v27 && (_DWORD)v28 )
              {
                if ( a5 && ((unsigned __int64)&v27[v28] > MmUserProbeAddress || &v27[v28] < v27) )
                  *(_BYTE *)MmUserProbeAddress = 0;
                v29 = v28;
                memmove(v25, v27, v28);
                v25 += v29;
                v45 = v25;
              }
            }
            v8 = a5;
            v14 = v38;
          }
          else
          {
            if ( v8 && v15 )
            {
              if ( ((unsigned __int8)a2 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v30 = (ULONG64)a2 + v15;
              if ( v30 > MmUserProbeAddress || v30 < (unsigned __int64)a2 )
                *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(v23, a2, v15);
          }
          if ( (v14 & 0x80000) != 0 )
          {
            v31 = (_OWORD *)*((_QWORD *)a2 + 3);
            if ( v8 && ((unsigned __int8)v31 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(_OWORD *)(v24 + 24) = *v31;
          }
          CurrentThread = KeGetCurrentThread();
          *(_DWORD *)v24 = a4 | v36;
          *((_QWORD *)v24 + 2) = v46[0];
          *((_DWORD *)v24 + 10) = CurrentThread->SchedulerApc.SpareLong0;
          *((_DWORD *)v24 + 11) = CurrentThread->UserTime;
          *((_DWORD *)v24 + 2) = CurrentThread[1].KernelStack;
          *((_DWORD *)v24 + 3) = CurrentThread[1].CurrentRunTime;
          if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
            && (*(_DWORD *)(v12 + 12) & 0x80000) != 0 )
          {
            EtwpSendTraceEvent(v12, v47);
          }
          EtwpReleaseTraceBuffer(v47);
          ReserveTraceBufferStatus = v35;
        }
        else
        {
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v12, v15);
        }
        goto LABEL_60;
      }
      v16 = (char *)a2 + v5;
      v17 = v36 - v5;
      if ( v36 - (unsigned int)v5 <= 0x100 )
      {
        if ( v17 )
        {
          if ( a5 )
          {
            if ( ((unsigned __int8)v16 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v18 = (ULONG64)&v16[v17];
            if ( v18 > MmUserProbeAddress || v18 < (unsigned __int64)v16 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          v19 = v17;
          memmove(Src, v16, v17);
          v15 = v5;
          v36 = v5;
          v37 = v19 >> 4;
          for ( j = 0; ; ++j )
          {
            v41 = j;
            if ( j >= v37 )
            {
              v8 = a5;
              v14 = v38;
              goto LABEL_29;
            }
            v21 = (unsigned int)Src[2 * j + 1];
            v15 += v21;
            v36 = v15;
            if ( v15 < v21 )
              break;
          }
          ReserveTraceBufferStatus = -2147483643;
          v35 = -2147483643;
          goto LABEL_60;
        }
        goto LABEL_29;
      }
      ReserveTraceBufferStatus = -1073741684;
      v35 = -1073741684;
    }
  }
LABEL_60:
  EtwpCloseLogger(v42, v44, v34[0]);
LABEL_61:
  SiloDriverState = v44;
LABEL_62:
  PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
  return ReserveTraceBufferStatus;
}
