/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x1406BA7C8
 * Callers:
 *     PpmApplyProfile @ 0x1406BD84C (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1406BDEAC (PpmProfileAcDcUpdate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PpmReapplyIdlePolicy @ 0x14058EB9C (PpmReapplyIdlePolicy.c)
 *     PpmGetPolicyAction @ 0x1405B0890 (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 */

void __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, char **a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rsi
  char **v13; // rbx
  SIZE_T v14; // r8
  char *v15; // rdx
  __int64 v16; // rdx
  unsigned __int8 v17; // r11
  unsigned int v18; // ebx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rcx
  ULONG_PTR v21; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v23; // ax
  signed __int64 v24; // rcx
  ULONG_PTR v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  __int64 v28[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+70h] [rbp+8h] BYREF
  char **v30; // [rsp+78h] [rbp+10h]
  unsigned __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = a2;
  v3 = *a1;
  v28[0] = 0LL;
  LOWORD(v29) = 0;
  v5 = 0LL;
  v6 = v3 & 0x3FFD8030FC0LL;
  if ( !v6 )
    goto LABEL_26;
  v7 = !_BitScanForward64((unsigned __int64 *)&v8, v6);
  LODWORD(v31) = v8;
  if ( v7 )
    goto LABEL_26;
  do
  {
    v9 = 5 * v8;
    v31 = v6 & ~(1LL << v8);
    v10 = 1;
    v11 = 0;
    v12 = 1LL << *((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 36);
    if ( (*((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 37) & 4) != 0 )
      v10 = 2;
    v13 = v30;
    do
    {
      v14 = LODWORD((&PpmPolicyConfigTable)[v9 + 4]);
      v15 = &(&PpmPolicyConfigTable)[v9 + 3][v11 * (unsigned int)v14];
      if ( RtlCompareMemory((char *)v13 + (_QWORD)v15, &v15[a3], v14) != (unsigned int)v14 )
        v5 |= v12;
      ++v11;
      a2 = &PpmPolicyConfigTable;
    }
    while ( v11 < v10 );
    v6 = v31;
    v28[0] = v5;
    v7 = !_BitScanForward64((unsigned __int64 *)&v8, v31);
    LODWORD(v31) = v8;
  }
  while ( !v7 );
  if ( v5 )
  {
    PpmGetPolicyAction(v28, &v29);
    v18 = v29;
    if ( (v29 & 1) != 0 )
    {
      PpmReapplyIdlePolicy();
      v29 = v18 & 0xFFFFFFFE;
    }
    else
    {
      if ( qword_14032E288 )
        qword_14032E288 = 0LL;
      _m_prefetchw(&PpmIdlePolicyLock);
      v20 = PpmIdlePolicyLock - 16;
      if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( ((unsigned __int8)PpmIdlePolicyLock & v17) != 0
        || (v21 = PpmIdlePolicyLock,
            v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v20, PpmIdlePolicyLock)) )
      {
        ExfReleasePushLock(&PpmIdlePolicyLock, v16);
      }
      KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
      CurrentThread = KeGetCurrentThread();
      v23 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( (_WORD)v29 )
    {
      PpmReapplyPerfPolicy(&v29, v19);
      return;
    }
  }
  else
  {
LABEL_26:
    if ( qword_14032E288 )
      qword_14032E288 = 0LL;
    _m_prefetchw(&PpmIdlePolicyLock);
    v24 = PpmIdlePolicyLock - 16;
    if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( (PpmIdlePolicyLock & 2) != 0
      || (v25 = PpmIdlePolicyLock,
          v25 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v24, PpmIdlePolicyLock)) )
    {
      ExfReleasePushLock(&PpmIdlePolicyLock, (__int64)a2);
    }
    KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
}
