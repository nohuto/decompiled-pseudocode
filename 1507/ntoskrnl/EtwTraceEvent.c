/*
 * XREFs of EtwTraceEvent @ 0x14015C274
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x1401226E4 (IoWMIWriteEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rbx
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r13
  int v10; // eax
  unsigned int v11; // esi
  char *v12; // rdx
  unsigned int v13; // ecx
  ULONG64 v14; // r8
  unsigned __int64 v15; // rbx
  int k; // edx
  unsigned int v17; // ecx
  char *v18; // rax
  char *v19; // r14
  int i; // esi
  char *v21; // rdx
  size_t v22; // rcx
  size_t v23; // rbx
  ULONG64 v24; // rcx
  _OWORD *v25; // rdx
  struct _KTHREAD *v26; // rcx
  __int64 v27; // r8
  volatile signed __int64 *v28; // rdx
  signed __int64 *v29; // roff
  signed __int64 v30; // rax
  unsigned __int64 j; // rcx
  signed __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  int v38; // eax
  char v39; // [rsp+30h] [rbp-1A8h]
  unsigned int v40; // [rsp+34h] [rbp-1A4h]
  unsigned int v41; // [rsp+38h] [rbp-1A0h]
  int v42; // [rsp+3Ch] [rbp-19Ch]
  int v43; // [rsp+40h] [rbp-198h]
  int v44; // [rsp+44h] [rbp-194h]
  char *v46; // [rsp+60h] [rbp-178h]
  __int64 v47; // [rsp+70h] [rbp-168h] BYREF
  volatile signed __int64 *v48; // [rsp+78h] [rbp-160h]
  __int64 v49; // [rsp+88h] [rbp-150h] BYREF
  void *Src[32]; // [rsp+90h] [rbp-148h] BYREF

  v5 = a3;
  v43 = 0;
  v40 = 0;
  v7 = a1;
  v42 = a1;
  if ( a1 >= 0x40u )
    return (unsigned int)-1073741816;
  v39 = 0;
  if ( a5 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a1], 1u) )
      goto LABEL_75;
    v39 = 1;
  }
  _mm_lfence();
  v9 = WmipLoggerContext[v7];
  if ( (v9 & 1) != 0 )
  {
    if ( !v39 )
      return (unsigned int)-1073741816;
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v7], 1u);
LABEL_75:
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
      && !v36->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)-1073741816;
  }
  if ( !v9 )
    return (unsigned int)-1073741816;
  if ( a5 && !PsEqualCurrentServerSilo(*(_QWORD *)(v9 + 912)) )
  {
    v40 = -1073741816;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 12);
    if ( (v10 & 0x80u) != 0 )
    {
      v40 = -1073741790;
    }
    else
    {
      if ( !a5 && (v10 & 0x1000000) != 0 )
      {
        v40 = -1073741637;
        goto LABEL_68;
      }
      if ( a5 )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a2 + v5 > MmUserProbeAddress || (unsigned __int16 *)((char *)a2 + v5) < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v41 = *a2;
      if ( v41 < (unsigned int)v5 )
      {
        v40 = -1073741811;
      }
      else
      {
        v44 = *((_DWORD *)a2 + 11);
        v11 = *a2;
        if ( (v44 & 0x100000) == 0 )
        {
LABEL_35:
          v18 = (char *)EtwpReserveTraceBuffer((unsigned int *)v9, v11, (__int64)&v47, &v49, 0);
          v19 = v18;
          if ( v18 )
          {
            if ( (v44 & 0x100000) != 0 )
            {
              v46 = &v18[(unsigned int)v5];
              memmove(v18, a2, (unsigned int)v5);
              for ( i = 0; i < v43; ++i )
              {
                v21 = (char *)Src[2 * i];
                v22 = LODWORD(Src[2 * i + 1]);
                if ( v21 && (_DWORD)v22 )
                {
                  if ( a5 && ((unsigned __int64)&v21[v22] > MmUserProbeAddress || &v21[v22] < v21) )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  v23 = v22;
                  memmove(v46, v21, v22);
                  v46 += v23;
                }
              }
            }
            else
            {
              if ( a5 && v11 )
              {
                if ( ((unsigned __int8)a2 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v24 = (ULONG64)a2 + v11;
                if ( v24 > MmUserProbeAddress || v24 < (unsigned __int64)a2 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v18, a2, v11);
            }
            if ( (v44 & 0x80000) != 0 )
            {
              v25 = (_OWORD *)*((_QWORD *)a2 + 3);
              if ( a5 && ((unsigned __int8)v25 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(_OWORD *)(v19 + 24) = *v25;
            }
            v26 = KeGetCurrentThread();
            *(_DWORD *)v19 = a4 | v41;
            *((_QWORD *)v19 + 2) = v49;
            *((_DWORD *)v19 + 10) = v26->SchedulerApc.SpareLong0;
            *((_DWORD *)v19 + 11) = v26->UserTime;
            *((_DWORD *)v19 + 2) = v26[1].KernelStack;
            *((_DWORD *)v19 + 3) = v26[1].CurrentRunTime;
            if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
              && (*(_DWORD *)(v9 + 12) & 0x80000) != 0 )
            {
              EtwpSendTraceEvent(v9, &v47);
            }
            v27 = v47;
            v28 = v48;
            v29 = (signed __int64 *)v48;
            _m_prefetchw((const void *)v48);
            v30 = *v29;
            for ( j = *v29 ^ v47; j < 0xF; j = v27 ^ v30 )
            {
              v32 = v30;
              v30 = _InterlockedCompareExchange64(v28, v30 + 1, v30);
              if ( v32 == v30 )
                goto LABEL_67;
            }
            _InterlockedAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF);
          }
          else
          {
            if ( v11 <= 0xFFF8 )
              v38 = *(_DWORD *)(v9 + 8) < v11 ? -2147483643 : -1073741801;
            else
              v38 = -1073741675;
            v40 = v38;
          }
LABEL_67:
          LODWORD(v7) = v42;
          goto LABEL_68;
        }
        v12 = (char *)a2 + v5;
        v13 = v41 - v5;
        if ( v41 - (unsigned int)v5 <= 0x100 )
        {
          if ( v13 )
          {
            if ( a5 )
            {
              if ( ((unsigned __int8)v12 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v14 = (ULONG64)&v12[v13];
              if ( v14 > MmUserProbeAddress || v14 < (unsigned __int64)v12 )
                *(_BYTE *)MmUserProbeAddress = 0;
            }
            v15 = v13;
            memmove(Src, v12, v13);
            v11 = a3;
            v41 = a3;
            v43 = v15 >> 4;
            for ( k = 0; ; ++k )
            {
              if ( k >= v43 )
              {
                LODWORD(v5) = a3;
                goto LABEL_35;
              }
              v17 = (unsigned int)Src[2 * k + 1];
              v11 += v17;
              v41 = v11;
              if ( v11 < v17 )
                break;
            }
            v40 = -2147483643;
            goto LABEL_68;
          }
          goto LABEL_35;
        }
        v40 = -1073741684;
      }
    }
  }
LABEL_68:
  if ( v39 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[(unsigned int)v7], 1u);
    v33 = KeGetCurrentThread();
    v34 = v33->KernelApcDisable + 1;
    v33->KernelApcDisable = v34;
    if ( !v34
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v40;
}
