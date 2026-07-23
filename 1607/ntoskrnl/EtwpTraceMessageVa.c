/*
 * XREFs of EtwpTraceMessageVa @ 0x1400D3C30
 * Callers:
 *     WmiTraceMessage @ 0x1400B193C (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x140225714 (WmiTraceMessageVa.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400A88E8 (EtwpGetReserveTraceBufferStatus.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 */

__int64 __fastcall EtwpTraceMessageVa(__int64 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5, char a6)
{
  unsigned __int16 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v10; // rsi
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // si
  char v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // edx
  int v25; // r10d
  int v26; // r9d
  int v27; // ecx
  int v28; // r8d
  unsigned int v29; // r13d
  __int64 v30; // rbx
  __int64 v31; // r8
  volatile signed __int32 *v32; // rax
  unsigned __int64 v33; // rcx
  signed __int32 v34; // edx
  __int16 v35; // r8
  signed __int32 *v36; // rbx
  struct _KTHREAD *v37; // rcx
  unsigned __int64 v38; // rdi
  char *v39; // rdx
  size_t v40; // r15
  int v41; // ecx
  signed __int64 *v42; // roff
  signed __int64 v43; // rax
  unsigned __int64 v44; // rdx
  signed __int64 v45; // rtt
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  unsigned int ReserveTraceBufferStatus; // [rsp+30h] [rbp-D8h]
  char v50; // [rsp+34h] [rbp-D4h]
  char v51; // [rsp+35h] [rbp-D3h]
  int v52; // [rsp+38h] [rbp-D0h]
  signed __int32 *v53; // [rsp+40h] [rbp-C8h]
  __int64 v54; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+70h] [rbp-98h]
  unsigned __int64 v58; // [rsp+88h] [rbp-80h]
  _DWORD v59[2]; // [rsp+98h] [rbp-70h] BYREF
  signed __int32 KernelStack; // [rsp+A0h] [rbp-68h]
  unsigned int CurrentRunTime; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-60h]
  __int64 v63; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v64; // [rsp+B8h] [rbp-50h] BYREF
  signed __int64 *v65; // [rsp+C0h] [rbp-48h]
  unsigned int v66; // [rsp+114h] [rbp+Ch]
  char v69; // [rsp+138h] [rbp+30h]

  v66 = HIDWORD(a1);
  v7 = a1;
  v8 = 0LL;
  ReserveTraceBufferStatus = 0;
  v56 = 0LL;
  if ( a6 )
    v10 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  else
    v10 = EtwpHostSiloState;
  v54 = v10;
  v11 = v7;
  v52 = v7;
  if ( v7 >= 0x40u )
    return (unsigned int)-1073741816;
  v69 = v8;
  if ( a6 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 8LL * v7 + 400), 1u) )
    {
      KeLeaveCriticalRegion();
      return (unsigned int)-1073741816;
    }
    v69 = 1;
    v8 = 0LL;
  }
  _mm_lfence();
  v13 = *(_QWORD *)(v10 + 8 * v11 + 912);
  v57 = v13;
  if ( (v13 & 1) != 0 )
  {
    EtwpCloseLogger(v11, v10, v69);
    return (unsigned int)-1073741816;
  }
  v63 = *(_QWORD *)(v10 + 8 * v11 + 912);
  if ( !v13 )
    return (unsigned int)-1073741816;
  v14 = *(_DWORD *)(v13 + 12);
  if ( (v14 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_91;
  }
  if ( !a6 && (v14 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_91;
  }
  v15 = a2 & 0x40;
  v50 = a2 & 0x40;
  v16 = a2 & 0x80;
  v51 = a2 & 0x80;
  v17 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v18 = a5 + v66;
    v56 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v55 = v18;
  v19 = v8;
  v58 = v8;
  v20 = a5;
  while ( 1 )
  {
    if ( !v15 )
    {
      v21 = v20 + 8;
LABEL_17:
      v22 = *(_QWORD *)(v21 - 8);
      goto LABEL_18;
    }
    if ( !v16 )
    {
      v21 = v20 + 8;
      if ( v21 > v18 )
      {
        ReserveTraceBufferStatus = -1073741306;
        LODWORD(v11) = v52;
        v10 = v54;
        goto LABEL_91;
      }
      goto LABEL_17;
    }
    v21 = v20 + 4;
    if ( v21 > v18 )
    {
      ReserveTraceBufferStatus = -1073741306;
      LODWORD(v11) = v52;
      v10 = v54;
      goto LABEL_91;
    }
    v22 = *(unsigned int *)(v21 - 4);
LABEL_18:
    if ( !v22 )
      break;
    if ( v15 && v16 )
    {
      v20 = v21 + 4;
      v23 = *(unsigned int *)(v20 - 4);
    }
    else
    {
      v20 = v21 + 8;
      v23 = *(_QWORD *)(v20 - 8);
    }
    if ( v23 )
    {
      v19 += v23;
      v58 = v19;
      if ( v19 < v23 )
      {
        ReserveTraceBufferStatus = -1073741675;
        LODWORD(v11) = v52;
        v10 = v54;
        goto LABEL_91;
      }
    }
    v18 = v55;
  }
  if ( !*(_QWORD *)(v13 + 264) )
    a2 &= ~1u;
  v24 = 4;
  if ( (a2 & 1) != 0 )
    v25 = 4;
  else
    v25 = v8;
  if ( (a2 & 2) != 0 )
    v26 = 16;
  else
    v26 = v8;
  if ( (a2 & 4) == 0 )
    v24 = v8;
  v27 = 8;
  if ( (a2 & 0x18) != 0 )
    v28 = 8;
  else
    v28 = v8;
  if ( (a2 & 0x20) == 0 )
    v27 = v8;
  v29 = v19 + v27 + v28 + v24 + v25 + v26 + 8;
  if ( v19 > v29 )
  {
    ReserveTraceBufferStatus = -1073741306;
    goto LABEL_99;
  }
  v30 = EtwpReserveTraceBuffer(v57, v29, (unsigned int)&v64, (unsigned int)v59, v8);
  v31 = v57;
  v32 = *(volatile signed __int32 **)(v57 + 264);
  if ( v32 )
  {
    v34 = _InterlockedIncrement(v32);
    v33 = v56;
    v55 = v56;
    v15 = v50;
    v16 = v51;
    v19 = v58;
    v31 = v57;
  }
  else
  {
    v33 = v55;
    v34 = 0;
  }
  if ( !v30 )
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v31, v29);
LABEL_99:
    v10 = v54;
    goto LABEL_90;
  }
  *(_DWORD *)v30 = -1879048192;
  *(_WORD *)v30 = v29;
  *(_WORD *)(v30 + 4) = a4;
  if ( v16 )
    v35 = 64;
  else
    v35 = 128;
  *(_WORD *)(v30 + 6) = v35 | a2 & 0x3F;
  v36 = (signed __int32 *)(v30 + 8);
  v53 = v36;
  if ( (a2 & 1) != 0 )
  {
    *v36++ = v34;
    v53 = v36;
  }
  if ( (a2 & 4) != 0 )
  {
    *v36++ = *a3;
LABEL_58:
    v53 = v36;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)v36 = *(_OWORD *)a3;
    v36 += 4;
    goto LABEL_58;
  }
  if ( (a2 & 8) != 0 )
  {
    v36[1] = v59[1];
    *v36 = v59[0];
    v36 += 2;
    v53 = v36;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v37 = KeGetCurrentThread();
    KernelStack = (signed __int32)v37[1].KernelStack;
    *v53 = KernelStack;
    CurrentRunTime = v37[1].CurrentRunTime;
    v53[1] = CurrentRunTime;
    v36 = v53 + 2;
    v33 = v56;
    v55 = v56;
    v15 = v50;
    v16 = v51;
    v19 = v58;
  }
  v62 = v19;
  while ( 1 )
  {
    do
    {
      if ( v15 && v16 )
      {
        v38 = v17 + 4;
        v39 = (char *)*(unsigned int *)(v38 - 4);
      }
      else
      {
        v38 = v17 + 8;
        v39 = *(char **)(v38 - 8);
      }
      if ( !v39 )
      {
        v41 = 0;
        goto LABEL_86;
      }
      if ( !v15 )
        goto LABEL_71;
      if ( v38 >= v33 )
      {
        v41 = -1073741306;
        ReserveTraceBufferStatus = -1073741306;
        goto LABEL_86;
      }
      if ( v16 )
      {
        v17 = v38 + 4;
        v40 = *(unsigned int *)(v17 - 4);
      }
      else
      {
LABEL_71:
        v17 = v38 + 8;
        v40 = *(_QWORD *)(v17 - 8);
      }
    }
    while ( !v40 );
    if ( v40 > v19 )
      break;
    if ( v15 && ((unsigned __int64)&v39[v40] > 0x7FFFFFFF0000LL || &v39[v40] < v39) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v36, v39, v40);
    v19 -= v40;
    v62 = v19;
    v36 = (signed __int32 *)((char *)v36 + v40);
    v33 = v55;
  }
  v41 = -1073741306;
  ReserveTraceBufferStatus = -1073741306;
LABEL_86:
  v10 = v54;
  if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
    && (*(_DWORD *)(v57 + 12) & 0x80000) != 0
    && v41 >= 0 )
  {
    EtwpSendTraceEvent(v57, &v64);
  }
  v42 = v65;
  _m_prefetchw(v65);
  v43 = *v42;
  v44 = v64;
  if ( (*v42 ^ v64) >= 0xF )
  {
LABEL_112:
    _InterlockedDecrement((volatile signed __int32 *)(v44 + 12));
  }
  else
  {
    while ( 1 )
    {
      v45 = v43;
      v43 = _InterlockedCompareExchange64(v65, v43 + 1, v43);
      if ( v45 == v43 )
        break;
      v44 = v64;
      if ( (v43 ^ v64) >= 0xF )
        goto LABEL_112;
    }
  }
LABEL_90:
  LODWORD(v11) = v52;
LABEL_91:
  if ( v69 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 8LL * (unsigned int)v11 + 400), 1u);
    v46 = KeGetCurrentThread();
    v47 = v46->KernelApcDisable + 1;
    v46->KernelApcDisable = v47;
    if ( !v47
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v46->ApcState.ApcListHead[0].Flink != &v46->152
      && !v46->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v46);
    }
  }
  return ReserveTraceBufferStatus;
}
