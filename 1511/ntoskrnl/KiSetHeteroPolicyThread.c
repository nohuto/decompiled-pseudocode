/*
 * XREFs of KiSetHeteroPolicyThread @ 0x1401C9B74
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x1401C3198 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401C31EC (KeSetUserHeteroCpuPolicyThread.c)
 *     KeUpdateThreadHeteroPolicy @ 0x1403B0E50 (KeUpdateThreadHeteroPolicy.c)
 * Callees:
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401C96E4 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1401C9790 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  char v10; // al
  bool v11; // sf
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r11
  char v15; // cl
  unsigned __int64 v16; // rax
  char v17; // cl
  int v18; // ecx
  int v19; // r14d
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v32; // [rsp+90h] [rbp+30h] BYREF

  KiAcquireThreadLockRaiseToDpc(a1, &v32);
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
    __writecr8(v32);
  }
  else
  {
    v12 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
    v13 = v9;
    if ( v9 >= 5 )
      v13 = KiConvertDynamicHeteroPolicy(a1, v8, (struct _KPRCB *)KiProcessorBlock[*(unsigned int *)(a1 + 588)]);
    KiGenerateHeteroSets(*(_QWORD *)(v12 + 1600), *(_QWORD *)(a1 + 576), v13, &v31, &v29);
    if ( (v31 & *(_QWORD *)(v14 + 1608)) == 0 )
    {
      v15 = *(_BYTE *)(v14 + 1617);
      _BitScanForward64(&v16, __ROR8__(v31, v15));
      v17 = v16 + v15;
      LODWORD(v16) = *(_DWORD *)(a1 + 116);
      v18 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v14 + 1616) + (v17 & 0x3F)];
      *(_DWORD *)(a1 + 588) = v18;
      if ( (v16 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v18;
    }
    v28 = 0LL;
    v19 = 0;
    v20 = KiAcquireThreadStateLock(a1, &v27, (volatile signed __int32 **)&v30);
    v22 = v27;
    *(_BYTE *)(a1 + 125) = v9;
    if ( v20 == 1 )
    {
      KiRemoveThreadFromAnyReadyQueue(v22, (__int64)v30, a1, (unsigned int)*(char *)(a1 + 195));
      KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), &v28);
    }
    else if ( v20 == 2 )
    {
      if ( (*(_QWORD *)(v22 + 1608) & v29) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
          v22 = v27;
          if ( !*(_QWORD *)(v27 + 16) )
          {
            KiSelectNextThread(v27, &v28);
            v19 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v22 = v27;
        }
      }
    }
    else if ( v20 == 3 && (*(_QWORD *)(v22 + 1608) & v29) == 0 )
    {
      KiSelectNextThread(v22, &v28);
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
    if ( v19 )
    {
      v24 = *(unsigned int *)(v27 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v24 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v21) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v24, v21);
      }
      __writecr8(v32);
    }
    else
    {
      KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v28, v32);
    }
  }
  return (unsigned int)v9;
}
