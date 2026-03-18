/*
 * XREFs of PopProcessorInformation @ 0x1405541D8
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x14002B0B4 (KeQueryGroupAffinity.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PpmPerfGetCurrentState @ 0x14012D224 (PpmPerfGetCurrentState.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, _DWORD *a4)
{
  _DWORD *v5; // r13
  USHORT v6; // r15
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  struct _KTHREAD *v25; // rdx
  __int16 v26; // ax
  unsigned int v28; // [rsp+30h] [rbp-58h]
  KAFFINITY GroupAffinity; // [rsp+40h] [rbp-48h]
  int v30; // [rsp+A0h] [rbp+18h]

  v5 = a4;
  v6 = a3;
  GroupAffinity = KeQueryGroupAffinity(a3);
  v8 = 0;
  v9 = (0x101010101010101LL
      * ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  v28 = v9;
  v10 = 24 * v9;
  v30 = 24 * v9;
  if ( (unsigned int)(24 * v9) > 0x600 )
  {
    if ( v5 )
      *v5 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v9 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = 0;
      --CurrentThread->KernelApcDisable;
      v13 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v7);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v13, (ULONG_PTR)&PpmIdlePolicyLock, v14);
      v15 = 1LL;
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v16 = GroupAffinity;
      while ( 1 )
      {
        v17 = v6 + 1;
        while ( !v16 )
        {
          if ( ++v6 >= v17 )
            goto LABEL_19;
          v16 = *(_QWORD *)(8LL * v6 + 8);
        }
        _BitScanForward64((unsigned __int64 *)&v15, v16);
        v16 &= ~(1LL << v15);
        v18 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v6 + (unsigned __int8)v15];
        if ( v12 >= v28 )
          break;
        if ( (unsigned int)v18 >= (unsigned int)KeNumberProcessors_0 )
        {
          v19 = 0LL;
        }
        else
        {
          _mm_lfence();
          v19 = KiProcessorBlock[v18];
        }
        *(_DWORD *)(a1 + 24LL * v12) = *(unsigned __int8 *)(v19 + 1617);
        PpmPerfGetCurrentState(
          v19,
          (_DWORD *)(a1 + 8 + 24LL * v12),
          (unsigned int *)(a1 + 12 + 24LL * v12),
          0LL,
          0LL,
          0LL);
        v20 = *(_QWORD *)(v19 + 24176);
        if ( v20 )
          v21 = *(_DWORD *)(v20 + 292);
        else
          v21 = *(_DWORD *)(v19 + 1524);
        *(_DWORD *)(a1 + 24LL * v12 + 4) = v21;
        v15 = 1LL;
        v22 = *(_QWORD *)(v19 + 23808);
        if ( v22 )
        {
          *(_DWORD *)(a1 + 24LL * v12 + 16) = *(_DWORD *)(v22 + 28);
          *(_DWORD *)(a1 + 24LL * v12 + 20) = *(_DWORD *)(v22 + 12) + 1;
        }
        else
        {
          *(_QWORD *)(a1 + 24LL * v12 + 16) = 0LL;
        }
        ++v12;
      }
LABEL_19:
      v5 = a4;
      if ( qword_14032E288 )
        qword_14032E288 = 0LL;
      _m_prefetchw(&PpmIdlePolicyLock);
      v23 = PpmIdlePolicyLock - 16;
      if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v23 = 0LL;
      if ( (PpmIdlePolicyLock & 2) != 0
        || (v24 = PpmIdlePolicyLock,
            v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v23, PpmIdlePolicyLock)) )
      {
        ExfReleasePushLock(&PpmIdlePolicyLock, v15);
      }
      KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v10 = v30;
    }
    *v5 = v10;
  }
  return v8;
}
