/*
 * XREFs of EtwpTraceMessageVa @ 0x14009F660
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x1400F27F8 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x14020D9C4 (WmiTraceMessageVa.c)
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
 */

__int64 __fastcall EtwpTraceMessageVa(
        __int64 a1,
        char a2,
        signed __int32 *a3,
        __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v7; // di
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int8 v10; // bl
  __int64 v11; // rcx
  __int64 SiloDriverState; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  char v16; // si
  char v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned int ReserveTraceBufferStatus; // esi
  int v24; // r10d
  int v25; // r9d
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rdi
  signed __int32 v30; // ecx
  volatile signed __int32 *v31; // rax
  __int16 v32; // dx
  signed __int32 *v33; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v35; // rbx
  char *v36; // rdx
  size_t v37; // r15
  __int64 v38; // r8
  __int64 v39; // rbx
  char v41; // [rsp+30h] [rbp-D8h]
  char v42; // [rsp+31h] [rbp-D7h]
  signed __int32 *v43; // [rsp+38h] [rbp-D0h]
  int v44; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+60h] [rbp-A8h]
  unsigned int v46; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  _DWORD v50[2]; // [rsp+98h] [rbp-70h] BYREF
  signed __int32 KernelStack; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-60h]
  unsigned int CurrentRunTime; // [rsp+B0h] [rbp-58h]
  _BYTE v54[80]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v55; // [rsp+110h] [rbp+8h]
  unsigned int v56; // [rsp+114h] [rbp+Ch]

  v56 = HIDWORD(a1);
  v7 = a1;
  v8 = 0LL;
  v44 = 0;
  v9 = 0LL;
  v45 = 0LL;
  v10 = a6;
  if ( a6 )
    v11 = -1LL;
  else
    v11 = 0LL;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)v11);
  v48 = SiloDriverState;
  v46 = v7;
  if ( v7 >= 0x40u || (v13 = EtwpOpenLogger(v7, SiloDriverState, v10, &a6), v14 = v13, (v49 = v13) == 0) )
  {
    ReserveTraceBufferStatus = -1073741816;
    v39 = v48;
    goto LABEL_83;
  }
  v15 = *(_DWORD *)(v13 + 12);
  if ( (v15 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_82;
  }
  if ( !v10 && (v15 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_82;
  }
  v16 = a2 & 0x40;
  v42 = a2 & 0x40;
  v17 = a2 & 0x80;
  v41 = a2 & 0x80;
  v18 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v9 = a5 + v56;
    v45 = v9;
  }
  v47 = 0LL;
  v19 = a5;
  while ( 1 )
  {
    if ( !v16 )
    {
      v20 = v19 + 8;
LABEL_13:
      v21 = *(_QWORD *)(v20 - 8);
      goto LABEL_14;
    }
    if ( !v17 )
    {
      v20 = v19 + 8;
      if ( v20 > v9 )
      {
        ReserveTraceBufferStatus = -1073741306;
        goto LABEL_82;
      }
      goto LABEL_13;
    }
    v20 = v19 + 4;
    if ( v20 > v9 )
    {
      ReserveTraceBufferStatus = -1073741306;
      goto LABEL_82;
    }
    v21 = *(unsigned int *)(v20 - 4);
LABEL_14:
    if ( !v21 )
      break;
    if ( v16 && v17 )
    {
      v19 = v20 + 4;
      v22 = *(unsigned int *)(v19 - 4);
    }
    else
    {
      v19 = v20 + 8;
      v22 = *(_QWORD *)(v19 - 8);
    }
    if ( v22 )
    {
      v8 += v22;
      v47 = v8;
      if ( v8 < v22 )
      {
        ReserveTraceBufferStatus = -1073741675;
        goto LABEL_82;
      }
    }
  }
  if ( !*(_QWORD *)(v14 + 280) )
    a2 &= ~1u;
  if ( (a2 & 2) != 0 )
    v24 = 16;
  else
    v24 = 0;
  if ( (a2 & 4) != 0 )
    v25 = 4;
  else
    v25 = 0;
  v26 = 8;
  if ( (a2 & 0x18) != 0 )
    v27 = 8;
  else
    v27 = 0;
  if ( (a2 & 0x20) == 0 )
    v26 = 0;
  v28 = v8 + v26 + v27 + v25 + v24 + ((a2 & 1) != 0 ? 12 : 8);
  v55 = v28;
  if ( v8 > v28 )
  {
    ReserveTraceBufferStatus = -1073741306;
  }
  else
  {
    v29 = EtwpReserveTraceBuffer(v14, v28, (unsigned int)v54, (unsigned int)v50, 0);
    v30 = 0;
    v31 = *(volatile signed __int32 **)(v49 + 280);
    if ( v31 )
    {
      v30 = _InterlockedIncrement(v31);
      v44 = 0;
      v9 = v45;
      v16 = v42;
      v17 = v41;
      v8 = v47;
    }
    if ( v29 )
    {
      *(_DWORD *)v29 = -1879048192;
      *(_WORD *)v29 = v55;
      *(_WORD *)(v29 + 4) = a4;
      if ( v17 )
        v32 = 64;
      else
        v32 = 128;
      *(_WORD *)(v29 + 6) = v32 | a2 & 0x3F;
      v33 = (signed __int32 *)(v29 + 8);
      v43 = v33;
      if ( (a2 & 1) != 0 )
      {
        *v33++ = v30;
        v43 = v33;
      }
      if ( (a2 & 4) != 0 )
      {
        *v33++ = *a3;
LABEL_51:
        v43 = v33;
      }
      else if ( (a2 & 2) != 0 )
      {
        *(_OWORD *)v33 = *(_OWORD *)a3;
        v33 += 4;
        goto LABEL_51;
      }
      if ( (a2 & 8) != 0 )
      {
        v33[1] = v50[1];
        *v33 = v50[0];
        v33 += 2;
        v43 = v33;
      }
      if ( (a2 & 0x20) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        KernelStack = (signed __int32)CurrentThread[1].KernelStack;
        *v43 = KernelStack;
        CurrentRunTime = CurrentThread[1].CurrentRunTime;
        v43[1] = CurrentRunTime;
        v33 = v43 + 2;
        v44 = 0;
        v9 = v45;
        v16 = v42;
        v17 = v41;
        v8 = v47;
      }
      v52 = v8;
      while ( 1 )
      {
        do
        {
          if ( v16 && v17 )
          {
            v35 = v18 + 4;
            v36 = (char *)*(unsigned int *)(v35 - 4);
          }
          else
          {
            v35 = v18 + 8;
            v36 = *(char **)(v35 - 8);
          }
          if ( !v36 )
          {
            v38 = 0LL;
            goto LABEL_79;
          }
          if ( !v16 )
            goto LABEL_64;
          if ( v35 >= v9 )
          {
            v38 = 3221225990LL;
            v44 = -1073741306;
            goto LABEL_79;
          }
          if ( v17 )
          {
            v18 = v35 + 4;
            v37 = *(unsigned int *)(v18 - 4);
          }
          else
          {
LABEL_64:
            v18 = v35 + 8;
            v37 = *(_QWORD *)(v18 - 8);
          }
        }
        while ( !v37 );
        if ( v37 > v8 )
          break;
        if ( v16 && ((unsigned __int64)&v36[v37] > MmUserProbeAddress || &v36[v37] < v36) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v33, v36, v37);
        v8 -= v37;
        v52 = v8;
        v33 = (signed __int32 *)((char *)v33 + v37);
      }
      v38 = 3221225990LL;
      v44 = -1073741306;
LABEL_79:
      if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
        && (*(_DWORD *)(v49 + 12) & 0x80000) != 0
        && (int)v38 >= 0 )
      {
        EtwpSendTraceEvent(v49, v54);
      }
      EtwpReleaseTraceBuffer(v54, v36, v38);
      ReserveTraceBufferStatus = v44;
    }
    else
    {
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v49, v55);
    }
  }
LABEL_82:
  v39 = v48;
  EtwpCloseLogger(v46, v48, a6);
LABEL_83:
  PspDereferenceMonitorContextServerSilo(v39 - 128);
  return ReserveTraceBufferStatus;
}
