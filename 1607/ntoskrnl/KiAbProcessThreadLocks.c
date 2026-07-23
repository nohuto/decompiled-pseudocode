/*
 * XREFs of KiAbProcessThreadLocks @ 0x14006B728
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbDeferredProcessingWorker @ 0x14006B5D4 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x14006B69C (KiAbPropagateBoosts.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14006B564 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14006BA1C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14006BB0C (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14006BBEC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14006BE50 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14006BF58 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14006BF94 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14006C02C (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14020EE94 (PsBoostThreadOutstandingIoQoS.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  int v8; // r15d
  __int64 v10; // rdx
  int v11; // r13d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // r14d
  __int64 LockedHeadEntry; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // si
  int v21; // edx
  int v22; // r10d
  char CpuPriorityKey; // r15
  char v24; // al
  char v25; // dl
  int v26; // eax
  void *v27; // rbx
  char v28; // al
  int v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+38h] [rbp-28h]
  volatile signed __int64 *v31[4]; // [rsp+40h] [rbp-20h] BYREF
  int v32; // [rsp+A0h] [rbp+40h] BYREF
  int v33; // [rsp+B0h] [rbp+50h]
  int v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v7 = a4;
  v8 = a3;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422)) != 63 )
  {
    v10 = a1 + 800;
    v11 = *(char *)(a1 + 792) | *(char *)(a1 + 1422);
    v30 = a1 + 800;
    v12 = v11 ^ 0x3F;
    v15 = !_BitScanForward((unsigned int *)&a1, v12);
    if ( !v15 )
    {
      while ( 1 )
      {
        v12 &= v12 - 1;
        v13 = v10 + 96 * a1;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 || (v14 & 2) != 0 )
          break;
        if ( a2 && (v14 & 1) != 0 )
          goto LABEL_23;
        if ( *(__int64 *)(v13 + 32) >= 0 )
        {
          v26 = a2;
          goto LABEL_30;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1) != *(_BYTE *)(v13 + 48) )
            {
LABEL_11:
              v16 = 0;
              v29 = 0;
              LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v13);
              v18 = LockedHeadEntry;
              if ( LockedHeadEntry )
              {
                if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
                {
                  if ( v8 )
                  {
                    if ( v13 != LockedHeadEntry )
                      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13);
                    v19 = *(_QWORD *)(v18 + 56);
                    if ( v19 )
                      v20 = *(_BYTE *)(v19 + 48);
                    else
                      v20 = 15;
                    v15 = (*(_BYTE *)(v18 + 25) & 1) == 0;
                    LOBYTE(v32) = v20;
                    if ( v15 )
                    {
                      v24 = KiAbOwnerComputeCpuPriorityKey(v18);
                      v25 = v20;
                      if ( v24 < v20 )
                        v25 = v24;
                      v20 = v25;
                      LOBYTE(v32) = v25;
                    }
                    KiAbTryIncrementIoWaiterCounts(v13, v18);
                    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
                    if ( v20 < CpuPriorityKey )
                    {
                      if ( v22 )
                        goto LABEL_48;
                    }
                    else
                    {
                      if ( !v22 )
                        goto LABEL_21;
LABEL_48:
                      KiAbIoBoostOwners(v18, v22, a5, a6, a7);
                    }
                    LOBYTE(v21) = CpuPriorityKey;
                    KiAbCpuBoostOwners(v18, v21, a5, a6, a7);
                  }
LABEL_33:
                  KxReleaseQueuedSpinLock(v31);
                  if ( v16 )
                  {
                    v27 = (void *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)));
                    if ( ObReferenceObjectSafeWithTag((__int64)v27) )
                    {
                      if ( (v16 & 1) != 0 )
                        IoBoostThreadIoPriority(v27, 2LL, 0x80000000LL);
                      if ( (v16 & 2) != 0 )
                        PsBoostThreadOutstandingIoQoS(v27);
                      ObDereferenceObjectDeferDeleteWithTag(v27, 0x746C6644u);
                    }
                  }
                }
                else
                {
                  if ( !v7 )
                    goto LABEL_33;
                  if ( v13 != LockedHeadEntry )
                    KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                  KiAbDetermineMaxWaiterPriority(v18, (__int64)&v32);
                  if ( v32 )
                  {
                    if ( (unsigned int)KiAbSetMinimumThreadPriority(v13, (unsigned int)&v32, a5, a6, a7, (__int64)&v29)
                      && v13 != v18 )
                    {
                      KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                    }
                    v16 = v29;
                    goto LABEL_33;
                  }
LABEL_21:
                  KxReleaseQueuedSpinLock(v31);
                }
              }
            }
            v10 = v30;
            goto LABEL_23;
          }
          v28 = *(_BYTE *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)) + 195);
          if ( v28 > 15 )
            v28 = 15;
          v15 = v28 == *(_BYTE *)(v13 + 48);
        }
        else if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          v15 = v8 == 0;
        }
        else
        {
          v15 = v7 == 0;
        }
LABEL_10:
        if ( !v15 )
          goto LABEL_11;
LABEL_23:
        v15 = !_BitScanForward((unsigned int *)&a1, v12);
        v7 = v34;
        v8 = v33;
        if ( v15 )
          return;
      }
      v26 = 0;
LABEL_30:
      v15 = v26 == 0;
      goto LABEL_10;
    }
  }
}
