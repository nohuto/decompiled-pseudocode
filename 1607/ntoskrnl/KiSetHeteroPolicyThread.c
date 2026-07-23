/*
 * XREFs of KiSetHeteroPolicyThread @ 0x1401D8180
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x1401D2D34 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401D2D88 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeUpdateThreadHeteroPolicy @ 0x1403DD090 (KeUpdateThreadHeteroPolicy.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401D7C78 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1401D7D04 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  char v10; // al
  bool v11; // sf
  __int64 v12; // rsi
  int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // rax
  char v16; // cl
  int v17; // ecx
  int v18; // r14d
  char v19; // al
  __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int8 v33; // [rsp+90h] [rbp+30h] BYREF

  KiAcquireThreadLockRaiseToDpc(a1, &v33);
  if ( a3 )
  {
    v9 = *(unsigned __int8 *)(a1 + 125);
    v10 = (a2 ^ *(_BYTE *)(a1 + 126)) & 0x7F;
    v11 = ((v10 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v10;
    if ( v11 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( a4 )
  {
LABEL_3:
    v9 = a2;
    goto LABEL_4;
  }
  v9 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_4:
  if ( v9 == 8 )
    v9 = KiDefaultHeteroCpuPolicy;
  if ( !KiHeteroSystem )
  {
    v9 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v9 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(v33);
  }
  else
  {
    v12 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
    v13 = v9;
    if ( v9 >= 5 )
      v13 = KiConvertDynamicHeteroPolicy(a1, v8, KiProcessorBlock[*(unsigned int *)(a1 + 588)]);
    KiGenerateHeteroSets(*(_QWORD *)(v12 + 1600), *(_QWORD *)(a1 + 576), v13, &v31, &v32, &v29);
    if ( (v31 & *(_QWORD *)(v12 + 1608)) == 0 )
    {
      v14 = *(_BYTE *)(v12 + 1617);
      _BitScanForward64(&v15, __ROR8__(v31, v14));
      v16 = v15 + v14;
      LODWORD(v15) = *(_DWORD *)(a1 + 116);
      v17 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v12 + 1616) + (v16 & 0x3F)];
      *(_DWORD *)(a1 + 588) = v17;
      if ( (v15 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v17;
    }
    v28 = 0LL;
    v18 = 0;
    v19 = KiAcquireThreadStateLock(a1, &v27, (volatile signed __int32 **)&v30);
    v22 = v27;
    *(_BYTE *)(a1 + 125) = v9;
    if ( v19 == 1 )
    {
      KiRemoveThreadFromAnyReadyQueue(v22, (__int64)v30, a1, *(char *)(a1 + 195));
      KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), &v28);
    }
    else if ( v19 == 2 )
    {
      if ( (*(_QWORD *)(v22 + 1608) & v29) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
          v22 = v27;
          if ( !*(_QWORD *)(v27 + 16) )
          {
            KiSelectNextThread(v27, &v28, v21);
            v18 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v22 = v27;
        }
      }
    }
    else if ( v19 == 3 && (*(_QWORD *)(v22 + 1608) & v29) == 0 )
    {
      KiSelectNextThread(v22, &v28, v21);
      v23 = v28;
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = v23;
      v28 = a1 + 216;
    }
    if ( v22 )
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
    if ( v30 )
      _InterlockedAnd64(v30, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v18 )
    {
      v24 = *(unsigned int *)(v27 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v24 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v20) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v24, v20);
      }
    }
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v28, v33);
  }
  return (unsigned int)v9;
}
