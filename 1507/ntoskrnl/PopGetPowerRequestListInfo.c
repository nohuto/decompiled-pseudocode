/*
 * XREFs of PopGetPowerRequestListInfo @ 0x1406B326C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PoStoreDiagnosticContext @ 0x140233764 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rbx
  SIZE_T v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  int v12; // ebx
  unsigned __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  _DWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  signed __int64 v22; // rcx
  ULONG_PTR v23; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v25; // ax
  unsigned __int64 v27; // [rsp+60h] [rbp+18h] BYREF

  PopAcquirePowerRequestPushLock(0, (__int64)a2, a3, a4);
  v6 = (__int64 *)PopPowerRequestObjectList;
  v7 = (8 * PopPowerRequestObjectCount + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v6 != &PopPowerRequestObjectList )
  {
    v8 = v6[10];
    v27 = 0LL;
    PoStoreDiagnosticContext(v8, 0LL, &v27);
    v7 = (v27 + 31 + v7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v7 > 0xFFFFFFFF )
    {
      v12 = -1073741789;
      goto LABEL_20;
    }
    v6 = (__int64 *)*v6;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x206D654Du);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = PoolWithTag + 1;
    v14 = PopPowerRequestObjectCount;
    *v11 = PopPowerRequestObjectCount;
    v15 = PopPowerRequestObjectList;
    v16 = (8 * v14 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = v7 - v16;
    while ( 1 )
    {
      if ( (__int64 *)v15 == &PopPowerRequestObjectList )
      {
        *a1 = v11;
        v11 = 0LL;
        *a2 = v16;
        v12 = 0;
        goto LABEL_18;
      }
      if ( v17 < 0x40 )
        break;
      *(_DWORD *)((char *)v11 + v16) = *(_DWORD *)(v15 + 20);
      v18 = (_DWORD *)((char *)v11 + v16 + 4);
      v19 = 5LL;
      do
      {
        *v18 = *(_DWORD *)((char *)v18 + v15 - ((_QWORD)v11 + v16) + 28);
        ++v18;
        --v19;
      }
      while ( v19 );
      v20 = *(_QWORD *)(v15 + 80);
      v27 = v17 - 24;
      v12 = PoStoreDiagnosticContext(v20, (_QWORD *)((char *)v11 + v16 + 24), &v27);
      if ( v12 < 0 )
        goto LABEL_18;
      v21 = (v27 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
      v27 = v21;
      if ( v17 < v21 )
        break;
      *v13 = v16;
      v17 -= v21;
      v15 = *(_QWORD *)v15;
      v16 += v21;
      ++v13;
    }
    v12 = -1073741789;
LABEL_18:
    if ( v11 )
      ExFreePoolWithTag(v11, 0x206D654Du);
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_20:
  if ( qword_14032F7D8 )
    qword_14032F7D8 = 0LL;
  _m_prefetchw(&PopPowerRequestLock);
  v22 = PopPowerRequestLock - 16;
  if ( (PopPowerRequestLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v22 = 0LL;
  if ( (PopPowerRequestLock & 2) != 0
    || (v23 = PopPowerRequestLock,
        v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerRequestLock, v22, PopPowerRequestLock)) )
  {
    ExfReleasePushLock(&PopPowerRequestLock, v9);
  }
  KeAbPostRelease((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v12;
}
