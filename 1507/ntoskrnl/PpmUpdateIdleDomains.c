/*
 * XREFs of PpmUpdateIdleDomains @ 0x140235FE4
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r11
  unsigned int v12; // ebx
  unsigned __int16 v13; // ax
  __int64 v14; // r10
  unsigned __int16 v15; // r8
  unsigned __int16 i; // dx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 *v19; // r9
  int v20; // eax
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  struct _KTHREAD *v23; // rdx
  __int16 v24; // ax
  unsigned __int16 v26; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int16 v27; // [rsp+22h] [rbp-C6h]
  int v28; // [rsp+24h] [rbp-C4h]
  _QWORD v29[21]; // [rsp+28h] [rbp-C0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = KeGetCurrentThread();
  qword_14032E288 = (__int64)v11;
  if ( !a1 )
  {
LABEL_6:
    v12 = -1073741811;
    goto LABEL_26;
  }
  v13 = KeActiveProcessors[0];
  v14 = a1 + 8;
  v15 = *(_WORD *)(a1 + 8);
  if ( v15 < LOWORD(KeActiveProcessors[0]) )
    v13 = *(_WORD *)(a1 + 8);
  v26 = v13;
  for ( i = 0; i < v26; v13 = v26 )
  {
    v17 = i++;
    v29[v17] = qword_1403D15E8[v17] & *(_QWORD *)(v14 + 8 * v17 + 8);
  }
  v28 = 0;
  v27 = 20;
  if ( i < 0x14u )
  {
    do
    {
      v18 = i++;
      v29[v18] = 0LL;
    }
    while ( i < v27 );
    v13 = v26;
  }
  if ( v15 >= v13 )
  {
    v19 = (unsigned __int16 *)(a1 + 8);
    v15 = v13;
  }
  else
  {
    v19 = &v26;
  }
  v7 = 0LL;
  if ( v15 )
  {
    while ( *(_QWORD *)(v14 + 8LL * (unsigned __int16)v7 + 8) == v29[(unsigned __int16)v7] )
    {
      LOWORD(v7) = v7 + 1;
      if ( (unsigned __int16)v7 >= v15 )
        goto LABEL_23;
    }
    goto LABEL_6;
  }
LABEL_23:
  while ( (unsigned __int16)v7 < *v19 )
  {
    if ( *(_QWORD *)&v19[4 * (unsigned __int16)v7 + 4] )
      goto LABEL_6;
    LOWORD(v7) = v7 + 1;
  }
  v20 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
  v11 = (struct _KTHREAD *)qword_14032E288;
  v12 = v20;
  if ( v20 >= 0 )
    v12 = 0;
LABEL_26:
  if ( v11 )
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
  return v12;
}
