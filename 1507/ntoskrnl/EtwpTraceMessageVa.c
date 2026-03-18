/*
 * XREFs of EtwpTraceMessageVa @ 0x140016040
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x14012FD60 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x14025CC30 (WmiTraceMessageVa.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 */

__int64 __fastcall EtwpTraceMessageVa(__int64 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5, char a6)
{
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // eax
  char v13; // si
  char v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // r11d
  int v23; // r9d
  int v24; // edx
  int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // r9
  volatile signed __int32 *v29; // rax
  signed __int32 v30; // edx
  unsigned __int64 v31; // rcx
  __int16 v32; // r8
  signed __int32 *v33; // rdi
  struct _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rbx
  char *v36; // rdx
  size_t v37; // r15
  int v38; // ecx
  signed __int64 *v39; // roff
  signed __int64 v40; // rax
  unsigned __int64 v41; // rdx
  signed __int64 v42; // rtt
  __int64 v43; // rdx
  __int64 v44; // r8
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  int v50; // eax
  unsigned int v51; // [rsp+30h] [rbp-D8h]
  char v52; // [rsp+34h] [rbp-D4h]
  char v53; // [rsp+35h] [rbp-D3h]
  char v54; // [rsp+36h] [rbp-D2h]
  int v55; // [rsp+38h] [rbp-D0h]
  signed __int32 *v56; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-A0h]
  _DWORD v60[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+88h] [rbp-80h]
  unsigned __int64 v62; // [rsp+90h] [rbp-78h]
  signed __int32 KernelStack; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  unsigned int CurrentRunTime; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v66; // [rsp+B0h] [rbp-58h] BYREF
  signed __int64 *v67; // [rsp+B8h] [rbp-50h]
  unsigned int v68; // [rsp+110h] [rbp+8h]
  unsigned int v69; // [rsp+114h] [rbp+Ch]

  v69 = HIDWORD(a1);
  v51 = 0;
  v58 = 0LL;
  v7 = (unsigned __int16)a1;
  v55 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 >= 0x40u )
    return (unsigned int)-1073741816;
  v52 = 0;
  if ( a6 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(
            (PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[(unsigned __int16)a1],
            1u) )
      goto LABEL_99;
    v52 = 1;
  }
  _mm_lfence();
  v11 = WmipLoggerContext[v7];
  v61 = v11;
  if ( (v11 & 1) != 0 )
  {
    if ( !v52 )
      return (unsigned int)-1073741816;
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v7], 1u);
LABEL_99:
    v48 = KeGetCurrentThread();
    v49 = v48->KernelApcDisable + 1;
    v48->KernelApcDisable = v49;
    if ( !v49
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
      && !v48->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v48, v9, v10);
    }
    return (unsigned int)-1073741816;
  }
  v64 = v11;
  if ( !v11 )
    return (unsigned int)-1073741816;
  v12 = *(_DWORD *)(v11 + 12);
  if ( (v12 & 0x80u) != 0 )
  {
    v51 = -1073741790;
    goto LABEL_87;
  }
  if ( !a6 && (v12 & 0x1000000) != 0 )
  {
    v51 = -1073741637;
    goto LABEL_87;
  }
  v13 = a2 & 0x40;
  v54 = a2 & 0x40;
  v14 = a2 & 0x80;
  v53 = a2 & 0x80;
  v15 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v16 = a5 + v69;
    v58 = v16;
  }
  else
  {
    v16 = 0LL;
  }
  v57 = v16;
  v17 = 0LL;
  v59 = 0LL;
  v18 = a5;
  while ( 1 )
  {
    if ( !v13 )
    {
      v19 = v18 + 8;
LABEL_15:
      v20 = *(_QWORD *)(v19 - 8);
      goto LABEL_16;
    }
    if ( !v14 )
    {
      v19 = v18 + 8;
      if ( v19 > v16 )
      {
        v51 = -1073741306;
        LODWORD(v7) = v55;
        goto LABEL_87;
      }
      goto LABEL_15;
    }
    v19 = v18 + 4;
    if ( v19 > v16 )
    {
      v51 = -1073741306;
      LODWORD(v7) = v55;
      goto LABEL_87;
    }
    v20 = *(unsigned int *)(v19 - 4);
LABEL_16:
    if ( !v20 )
      break;
    if ( v13 && v14 )
    {
      v18 = v19 + 4;
      v21 = *(unsigned int *)(v18 - 4);
    }
    else
    {
      v18 = v19 + 8;
      v21 = *(_QWORD *)(v18 - 8);
    }
    if ( v21 )
    {
      v17 += v21;
      v59 = v17;
      if ( v17 < v21 )
      {
        v51 = -1073741675;
        LODWORD(v7) = v55;
        goto LABEL_87;
      }
    }
    v16 = v57;
  }
  if ( !*(_QWORD *)(v11 + 280) )
    a2 &= ~1u;
  if ( (a2 & 2) != 0 )
    v22 = 16;
  else
    v22 = 0;
  if ( (a2 & 4) != 0 )
    v23 = 4;
  else
    v23 = 0;
  v24 = 8;
  if ( (a2 & 0x18) != 0 )
    v25 = 8;
  else
    v25 = 0;
  if ( (a2 & 0x20) == 0 )
    v24 = 0;
  v26 = v17 + v24 + v25 + v23 + v22 + ((a2 & 1) != 0 ? 12 : 8);
  v68 = v26;
  if ( v17 > v26 )
  {
    v51 = -1073741306;
  }
  else
  {
    v27 = EtwpReserveTraceBuffer(v11, v26, (unsigned int)&v66, (unsigned int)v60, 0);
    v28 = v61;
    v29 = *(volatile signed __int32 **)(v61 + 280);
    if ( v29 )
    {
      v30 = _InterlockedIncrement(v29);
      v31 = v58;
      v57 = v58;
      v13 = v54;
      v14 = v53;
      v17 = v59;
    }
    else
    {
      v30 = 0;
      v31 = v57;
    }
    if ( v27 )
    {
      *(_DWORD *)v27 = -1879048192;
      *(_WORD *)v27 = v68;
      *(_WORD *)(v27 + 4) = a4;
      v32 = 128;
      if ( v14 )
        v32 = 64;
      *(_WORD *)(v27 + 6) = v32 | a2 & 0x3F;
      v33 = (signed __int32 *)(v27 + 8);
      v56 = v33;
      if ( (a2 & 1) != 0 )
      {
        *v33++ = v30;
        v56 = v33;
      }
      if ( (a2 & 4) != 0 )
      {
        *v33++ = *a3;
LABEL_54:
        v56 = v33;
      }
      else if ( (a2 & 2) != 0 )
      {
        *(_OWORD *)v33 = *(_OWORD *)a3;
        v33 += 4;
        goto LABEL_54;
      }
      if ( (a2 & 8) != 0 )
      {
        v33[1] = v60[1];
        *v33 = v60[0];
        v33 += 2;
        v56 = v33;
      }
      if ( (a2 & 0x20) != 0 )
      {
        v34 = KeGetCurrentThread();
        KernelStack = (signed __int32)v34[1].KernelStack;
        *v56 = KernelStack;
        CurrentRunTime = v34[1].CurrentRunTime;
        v56[1] = CurrentRunTime;
        v33 = v56 + 2;
        v31 = v58;
        v57 = v58;
        v13 = v54;
        v14 = v53;
        v17 = v59;
      }
      v62 = v17;
      while ( 1 )
      {
        do
        {
          if ( v13 && v14 )
          {
            v35 = v15 + 4;
            v36 = (char *)*(unsigned int *)(v35 - 4);
          }
          else
          {
            v35 = v15 + 8;
            v36 = *(char **)(v35 - 8);
          }
          if ( !v36 )
          {
            v38 = 0;
            goto LABEL_82;
          }
          if ( !v13 )
            goto LABEL_67;
          if ( v35 >= v31 )
          {
            v38 = -1073741306;
            v51 = -1073741306;
            goto LABEL_82;
          }
          if ( v14 )
          {
            v15 = v35 + 4;
            v37 = *(unsigned int *)(v15 - 4);
          }
          else
          {
LABEL_67:
            v15 = v35 + 8;
            v37 = *(_QWORD *)(v15 - 8);
          }
        }
        while ( !v37 );
        if ( v37 > v17 )
          break;
        if ( v13 && ((unsigned __int64)&v36[v37] > MmUserProbeAddress || &v36[v37] < v36) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v33, v36, v37);
        v17 -= v37;
        v62 = v17;
        v33 = (signed __int32 *)((char *)v33 + v37);
        v31 = v57;
      }
      v38 = -1073741306;
      v51 = -1073741306;
LABEL_82:
      if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
        && (*(_DWORD *)(v61 + 12) & 0x80000) != 0
        && v38 >= 0 )
      {
        EtwpSendTraceEvent(v61, &v66);
      }
      v39 = v67;
      _m_prefetchw(v67);
      v40 = *v39;
      v41 = v66;
      if ( (*v39 ^ v66) >= 0xF )
      {
LABEL_104:
        _InterlockedDecrement((volatile signed __int32 *)(v41 + 12));
      }
      else
      {
        while ( 1 )
        {
          v42 = v40;
          v40 = _InterlockedCompareExchange64(v67, v40 + 1, v40);
          if ( v42 == v40 )
            break;
          v41 = v66;
          if ( (v40 ^ v66) >= 0xF )
            goto LABEL_104;
        }
      }
    }
    else
    {
      if ( v68 > 0xFFF8 )
      {
        v50 = -1073741675;
      }
      else if ( v68 > *(_DWORD *)(v28 + 8) )
      {
        v50 = -2147483643;
      }
      else
      {
        v50 = -1073741801;
      }
      v51 = v50;
    }
  }
  LODWORD(v7) = v55;
LABEL_87:
  if ( v52 )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[(unsigned int)v7], 1u);
    v45 = KeGetCurrentThread();
    v46 = v45->KernelApcDisable + 1;
    v45->KernelApcDisable = v46;
    if ( !v46
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
      && !v45->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v45, v43, v44);
    }
  }
  return v51;
}
