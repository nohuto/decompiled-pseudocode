/*
 * XREFs of KiSetHeteroPolicyThread @ 0x14020739C
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x1401FF154 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401FF1A8 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeUpdateThreadHeteroPolicy @ 0x14040152C (KeUpdateThreadHeteroPolicy.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiGenerateHeteroSets @ 0x140206EF4 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // edi
  int v10; // esi
  char v11; // al
  bool v12; // sf
  int v13; // r8d
  __int64 v14; // r10
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r10
  __int64 v20; // r11
  char v21; // cl
  unsigned __int64 v22; // rax
  char v23; // cl
  int v24; // ecx
  int v25; // r14d
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int64 *v35; // [rsp+40h] [rbp-10h] BYREF
  __int64 v36; // [rsp+48h] [rbp-8h] BYREF
  __int64 v37; // [rsp+80h] [rbp+30h] BYREF
  int v38; // [rsp+90h] [rbp+40h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( a3 )
  {
    v10 = *(unsigned __int8 *)(a1 + 125);
    v11 = (*(_BYTE *)(a1 + 126) ^ a2) & 0x7F;
    v12 = ((v11 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v11;
    if ( v12 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_11:
    v10 = a2;
    goto LABEL_12;
  }
  v10 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_12:
  if ( v10 == 8 )
    v10 = KiDefaultHeteroCpuPolicy;
  if ( !KiHeteroSystem )
  {
    v10 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v10 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(CurrentIrql);
  }
  else
  {
    v13 = v10;
    v14 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
    if ( v10 >= 5 )
    {
      if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1490LL) == 2 )
        goto LABEL_34;
      if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
        goto LABEL_37;
      v15 = *(char *)(a1 + 195);
      if ( *(char *)(a1 + 195) < 16 )
      {
        if ( *(_QWORD *)(a1 + 104) )
        {
          v16 = *(_QWORD *)(a1 + 104);
          if ( v16 )
          {
            v17 = *(unsigned int *)(v14 + 1624) + v16;
            if ( v17 )
            {
              if ( (*(_BYTE *)(v17 + 112) & 8) != 0 )
                v15 = 1;
            }
          }
        }
      }
      if ( v15 >= KiDynamicHeteroCpuPolicyImportantPriority )
      {
LABEL_34:
        if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 )
          goto LABEL_36;
        v18 = *(_DWORD *)(a1 + 84);
        if ( *(_DWORD *)(a1 + 80) > v18 )
          v18 = *(_DWORD *)(a1 + 80);
        if ( v18 < (unsigned __int64)(unsigned int)KiDynamicHeteroCpuPolicyExpectedCycles )
          v13 = KiDynamicHeteroCpuPolicyImportantShort;
        else
LABEL_36:
          v13 = KiDynamicHeteroCpuPolicyImportant;
      }
      else
      {
LABEL_37:
        v13 = KiDefaultDynamicHeteroCpuPolicy;
      }
    }
    KiGenerateHeteroSets(*(_QWORD *)(v14 + 1600), *(_QWORD *)(a1 + 576), v13, &v36, &v34);
    if ( (v36 & *(_QWORD *)(v19 + 1608)) == 0 )
    {
      v21 = *(_BYTE *)(v19 + 1617);
      _BitScanForward64(&v22, __ROR8__(v36, v21));
      v23 = v22 + v21;
      LODWORD(v22) = *(_DWORD *)(a1 + 116);
      v24 = *(_DWORD *)(v20 + 4LL * ((*(unsigned __int8 *)(v19 + 1616) << 6) + (v23 & 0x3Fu)) + 4017616);
      v38 = v24;
      *(_DWORD *)(a1 + 588) = v24;
      if ( (v22 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v24;
    }
    v33 = 0LL;
    v25 = 0;
    v26 = KiAcquireThreadStateLock(a1, &v37, (volatile signed __int32 **)&v35);
    v28 = v37;
    *(_BYTE *)(a1 + 125) = v10;
    if ( v26 == 1 )
    {
      KiRemoveThreadFromAnyReadyQueue(v28, (__int64)v35, a1, (unsigned int)*(char *)(a1 + 195));
      KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64 *)&v33);
    }
    else if ( v26 == 2 )
    {
      if ( (*(_QWORD *)(v28 + 1608) & v34) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
          v28 = v37;
          if ( !*(_QWORD *)(v37 + 16) )
          {
            KiSelectNextThread(v37, &v33);
            v25 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v28 = v37;
        }
      }
    }
    else if ( v26 == 3 && (*(_QWORD *)(v28 + 1608) & v34) == 0 )
    {
      KiSelectNextThread(v28, &v33);
      v29 = v33;
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = v29;
      v33 = (_QWORD *)(a1 + 216);
    }
    if ( v28 )
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 48), 0LL);
    if ( v35 )
      _InterlockedAnd64(v35, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v25 )
    {
      v30 = *(unsigned int *)(v37 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v30 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v27) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v30, v27);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), &v33, CurrentIrql);
    }
  }
  return (unsigned int)v10;
}
