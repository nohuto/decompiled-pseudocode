/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14000BBEC
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14000BE64 (EtwpTraceThreadRundown.c)
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpLogRegistryEvent @ 0x1406E4744 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1406E50A4 (EtwpSetMark.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 */

char __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  $CD287064E7C9F7953DE243E927CFCB99 *v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // bx
  __int64 v17; // rax
  char *v18; // r15
  unsigned int i; // r14d
  size_t v20; // rbx
  __int64 v21; // r8
  volatile signed __int64 *v22; // rdx
  signed __int64 *v23; // roff
  signed __int64 v24; // rax
  unsigned __int64 j; // rcx
  signed __int64 v26; // rtt
  int v27; // ecx
  struct _KTHREAD *v28; // rcx
  _QWORD v30[3]; // [rsp+40h] [rbp-78h] BYREF
  char *v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int64 *v33; // [rsp+68h] [rbp-50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = a3;
  LOBYTE(v11) = ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a3], 1u);
  if ( !(_BYTE)v11 )
  {
LABEL_24:
    v28 = KeGetCurrentThread();
    LOWORD(v11) = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = (__int16)v11;
    if ( (_WORD)v11 )
      return (char)v11;
    goto LABEL_34;
  }
  v12 = WmipLoggerContext[v10];
  if ( (v12 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v10], 1u);
    goto LABEL_24;
  }
  v30[2] = WmipLoggerContext[v10];
  if ( v12 )
  {
    v13 = 0;
    if ( a4 )
    {
      v14 = (_DWORD *)(a1 + 8);
      v15 = a4;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
    }
    v16 = v13 + 32;
    v17 = EtwpReserveTraceBuffer(v12, v13 + 32, (unsigned int)&v32, (unsigned int)v30, a6);
    if ( v17 )
    {
      *(_DWORD *)v17 = (a6 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a6 | 0xC0010000
                     : (unsigned __int8)a6 | 0xC0020000;
      *(_QWORD *)(v17 + 16) = v30[0];
      *(_WORD *)(v17 + 4) = v16;
      *(_WORD *)(v17 + 6) = a5;
      *(_DWORD *)(v17 + 8) = a2[396];
      *(_DWORD *)(v17 + 12) = a2[394];
      *(_DWORD *)(v17 + 24) = a2[163];
      *(_DWORD *)(v17 + 28) = a2[183];
      v18 = (char *)(v17 + 32);
      v30[1] = v17 + 32;
      if ( v17 != -32 )
      {
        v31 = (char *)(v17 + 32);
        for ( i = 0; i < a4; ++i )
        {
          v20 = *(unsigned int *)(a1 + 16LL * i + 8);
          memmove(v18, *(const void **)(a1 + 16LL * i), v20);
          v18 += v20;
          v31 = v18;
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v12 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v12, &v32);
        }
        v21 = v32;
        v22 = v33;
        v23 = (signed __int64 *)v33;
        _m_prefetchw((const void *)v33);
        v24 = *v23;
        for ( j = *v23 ^ v32; j < 0xF; j = v21 ^ v24 )
        {
          v26 = v24;
          v24 = _InterlockedCompareExchange64(v22, v24 + 1, v24);
          if ( v26 == v24 )
            goto LABEL_19;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
LABEL_19:
        v27 = *(_DWORD *)(v12 + 832);
        if ( (v27 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v12 + 848), a5 & 0x1FFF) )
          EtwpStackTraceDispatcher(*(_DWORD *)v12 | v27 & 0xFFFF0000, v30, a2, a6);
      }
    }
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[a3], 1u);
    v28 = KeGetCurrentThread();
    LOWORD(v11) = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = (__int16)v11;
    if ( !(_WORD)v11 )
    {
LABEL_34:
      v11 = &v28->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != v11 && !v28->SpecialApcDisable )
        LOBYTE(v11) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v11;
}
