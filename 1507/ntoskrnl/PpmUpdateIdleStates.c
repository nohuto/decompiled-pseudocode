/*
 * XREFs of PpmUpdateIdleStates @ 0x14059A450
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PpmHvConsiderNative @ 0x140163368 (PpmHvConsiderNative.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmUpdateIdleContext @ 0x1406B1CE4 (PpmUpdateIdleContext.c)
 */

__int64 __fastcall PpmUpdateIdleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  unsigned __int16 v11; // ax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  char v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r9
  void *v17; // rdx
  __int64 v18; // r8
  unsigned int updated; // eax
  unsigned int v20; // ebx
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v26; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v27[21]; // [rsp+28h] [rbp-D0h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  if ( !a1 || *(_BYTE *)(a1 + 7) )
    goto LABEL_38;
  v11 = *(_WORD *)(a1 + 4);
  if ( !v11 && !*(_BYTE *)(a1 + 6) )
  {
    v12 = 0;
LABEL_13:
    if ( !PpmHvConsiderNative() )
    {
      updated = PpmUpdateIdleContext(v12, a1);
      goto LABEL_21;
    }
    v26 = 1310721LL;
    memset(v27, 0, 0xA0uLL);
    v13 = KiProcessorIndexToNumberMappingTable[v12];
    v14 = v13 & 0x3F;
    v15 = v13 >> 6;
    if ( (_DWORD)v15 )
      LOWORD(v26) = v15 + 1;
    v27[(unsigned int)v15] = v27[v15] | (1LL << v14);
    if ( *(_BYTE *)(a1 + 17) )
    {
      v16 = 0LL;
      v17 = PpmUpdateIdleStatesInplace;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 108) )
      {
        v16 = 0LL;
        v17 = PpmRemoveIdleStates;
        v18 = 0LL;
        goto LABEL_20;
      }
      v16 = 3LL;
      v17 = PpmInstallNewIdleStates;
    }
    v18 = a1;
LABEL_20:
    updated = PopExecuteOnTargetProcessors((__int64)&v26, (__int64)v17, v18, v16);
LABEL_21:
    v20 = updated;
    goto LABEL_22;
  }
  if ( v11 >= (unsigned __int16)KiMaximumGroups || (LOBYTE(v7) = *(_BYTE *)(a1 + 6), (unsigned __int8)v7 >= 0x40u) )
  {
    v12 = -1;
  }
  else
  {
    v12 = KiProcessorNumberToIndexMappingTable[64 * v11 + (unsigned __int8)v7];
    if ( !v12 )
      goto LABEL_38;
  }
  if ( v12 != -1 )
    goto LABEL_13;
LABEL_38:
  v20 = -1073741811;
LABEL_22:
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v21 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v22 = PpmIdlePolicyLock,
        v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v21, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v20;
}
