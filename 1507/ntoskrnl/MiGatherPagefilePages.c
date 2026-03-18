/*
 * XREFs of MiGatherPagefilePages @ 0x14013D12C
 * Callers:
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140082AE0 (MiReleaseWriteInProgressCharges.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     MiFillNoReservationCluster @ 0x14013A3CC (MiFillNoReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MI_PAGEFILE_WRITE @ 0x14013B758 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14013E180 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14013E28C (MiUpdatePagefilePeakUsage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPageFileNoFreeSpace @ 0x140221DAC (MiPageFileNoFreeSpace.c)
 */

void __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r14
  struct _KTHREAD *CurrentThread; // r13
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  __int64 *v7; // r11
  int v8; // eax
  __int16 v9; // r10
  unsigned __int64 v10; // r9
  unsigned int v11; // ecx
  ULONG v12; // edi
  ULONG v13; // eax
  ULONG v14; // ecx
  ULONG v15; // eax
  ULONG v16; // r12d
  __int16 v17; // ax
  ULONG v18; // edi
  __int64 *v19; // r13
  unsigned int v20; // eax
  ULONG v21; // edi
  __int64 v22; // r15
  int v23; // edi
  int v24; // edi
  int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // eax
  ULONG v28; // r12d
  unsigned int v29; // r15d
  __int64 v30; // r15
  __int64 *v31; // rax
  __int16 v32; // ax
  __int16 v33; // ax
  __int64 *v34; // rsi
  __int64 *v35; // r13
  __int64 v36; // rdi
  unsigned int v37; // r12d
  __int16 v38; // ax
  NTSTATUS v39; // eax
  unsigned __int8 v40; // di
  ULONG v41; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v42; // [rsp+54h] [rbp-45h]
  __int64 *v43; // [rsp+58h] [rbp-41h]
  __int64 *v44; // [rsp+60h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+68h] [rbp-31h]
  int v46; // [rsp+70h] [rbp-29h]
  __int64 v47; // [rsp+78h] [rbp-21h]
  __int64 v48; // [rsp+80h] [rbp-19h]
  struct _KTHREAD *v49; // [rsp+88h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v52; // [rsp+100h] [rbp+67h]
  unsigned int v53; // [rsp+108h] [rbp+6Fh] BYREF
  ULONG NumberToSet; // [rsp+110h] [rbp+77h] BYREF
  ULONG StartingIndex; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0;
  v48 = v1;
  v49 = CurrentThread;
  v5 = *(_QWORD *)(v1 + 216);
  v47 = v5;
  if ( !*(_QWORD *)(v1 + 24) )
  {
    MiPageFileNoFreeSpace(v1, a1);
    goto LABEL_38;
  }
  v6 = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v7 = (__int64 *)(a1 + 256);
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = *(_DWORD *)(v5 + 1048);
  v9 = *(_WORD *)(v1 + 164);
  v44 = (__int64 *)(a1 + 256);
  if ( v8 )
    v4 = 16;
  v10 = *(_QWORD *)(v5 + 40LL * (v9 & 0xF) + 2112);
  if ( (v9 & 0x10) == 0 && (v4 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 40LL * *(unsigned int *)(v5 + 1044) + 2112);
    if ( v6 )
    {
      v4 |= 8u;
LABEL_8:
      if ( v10 )
        goto LABEL_9;
      goto LABEL_40;
    }
  }
  if ( !*(_DWORD *)(v5 + 1040) )
  {
    v6 = *(_QWORD *)(v5 + 2048);
    goto LABEL_8;
  }
  v10 = 0LL;
LABEL_40:
  if ( !v6 || (v9 & 0x10) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 192), &LockHandle);
    *(_BYTE *)(v1 + 166) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)v3 = 2575857425LL;
    goto LABEL_38;
  }
LABEL_9:
  if ( (v4 & 8) == 0
    && v6
    && (v9 & 0x10) == 0
    && (!v10
     || (*(_BYTE *)(v5 + 788) & 1) != 0
     || *(_QWORD *)(v1 + 56)
     && *(_DWORD *)(v1 + 144) >= *(_DWORD *)(v1 + 156) >> 2
     && (v6 >= (unsigned __int64)(unsigned int)dword_1403D00F8 >> 2 || v6 >= v10)) )
  {
    v4 |= 8u;
  }
  v11 = *(_DWORD *)(v1 + 148);
  v42 = v11;
  if ( *(_DWORD *)(v5 + 908) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v7 = v44;
    v4 |= 2u;
    v53 = 1;
    v12 = 1;
  }
  else if ( (v4 & 8) != 0 )
  {
    v53 = *(_DWORD *)(v1 + 144);
    v12 = v53;
    if ( v6 < v53 )
    {
      v53 = v6;
      v4 |= 2u;
      v12 = v6;
    }
    else if ( v53 < dword_1403D00F8 && *(_DWORD *)(v1 + 152) != v11 )
    {
      if ( v53 >= (unsigned int)dword_1403D00F8 >> 3 )
      {
        v12 = dword_1403D00F8;
        if ( v53 + (v53 >> 1) < dword_1403D00F8 )
          v12 = v53 + (v53 >> 1);
      }
      else
      {
        v12 = 2 * v53;
      }
      v53 = v12;
    }
  }
  else
  {
    v12 = dword_1403D00F8;
    v53 = dword_1403D00F8;
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x1Cu) < 8 && v12 > 0x100 )
  {
    v12 = 256;
    v4 |= 2u;
    v53 = 256;
  }
  v4 |= 4u;
  --CurrentThread->KernelApcDisable;
  if ( (v4 & 8) != 0 )
  {
    StartingIndex = *(_DWORD *)(v1 + 136);
    MiFindPageFileWriteCluster(v1, &StartingIndex, &v53, 0);
    if ( !v53 )
    {
      MiPageFileNoFreeSpace(v1, v3);
      goto LABEL_38;
    }
    if ( v53 < v12 )
    {
      v12 = v53;
      v4 = v4 & 0xFFFFFFFC | 1;
    }
    v15 = MiFillNoReservationCluster(v5, v44, v53);
    v14 = v15;
    NumberToSet = v15;
  }
  else
  {
    NumberToSet = v12;
    v13 = MiBuildReservationCluster(v7, v1, &NumberToSet, &v41);
    v14 = NumberToSet;
    StartingIndex = v13;
    v15 = v41;
  }
  if ( v14 )
  {
    v53 = v14;
    v16 = v14;
    LODWORD(v43) = v15 - 1;
    v41 = v15 - 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 192), &LockHandle);
    v46 = (v4 >> 3) & 1;
    if ( v46 )
    {
      MiFindPageFileWriteCluster(v1, &StartingIndex, &v53, 1);
      v16 = v53;
    }
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v1 + 128) + 8LL), StartingIndex, v16);
    *(_QWORD *)(v1 + 24) -= v16;
    CurrentIrql = v16;
    if ( v46 )
    {
      *(_DWORD *)(v1 + 136) = v16 + StartingIndex;
      if ( (v4 & 1) != 0 )
        *(_DWORD *)(v1 + 152) = v42;
      if ( (v4 & 2) == 0 )
        *(_DWORD *)(v1 + 144) = v12;
    }
    else
    {
      *(_DWORD *)(v1 + 156) = v16 + *(_DWORD *)(v1 + 156) - (*(_DWORD *)(v1 + 156) >> 2);
    }
    MiUpdatePagefilePeakUsage(v1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v17 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v4 &= ~4u;
    v42 = v4;
    if ( v16 == NumberToSet )
    {
      v18 = (unsigned int)v43;
    }
    else
    {
      v43 = &v44[NumberToSet];
      v34 = v43;
      v35 = &v44[CurrentIrql];
      do
      {
        v36 = 48 * *v35 - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v37 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v37);
          }
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        MiWriteCompletePfn(v36, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8((unsigned __int8)CurrentIrql);
        ++v35;
      }
      while ( v35 < v34 );
      v16 = v53;
      v18 = v53 - NumberToSet + v41;
      v41 = v18;
      MiReleaseWriteInProgressCharges(v47, NumberToSet - v53, 0);
      LOBYTE(v4) = v42;
      v3 = a1;
      v1 = v48;
    }
    v19 = v44;
    *(_DWORD *)(v3 + 248) = v16 << 12;
    *(_DWORD *)(v3 + 136) = v16 << 12;
    v20 = 0;
    *(_DWORD *)(v3 + 140) = v18;
    v21 = StartingIndex;
    NumberToSet = v16;
    v52 = 0;
    LODWORD(v43) = StartingIndex;
    do
    {
      if ( *v19 != qword_14034F6F8 )
      {
        MiUpdatePfnBackingStore(48 * *v19 - 0x58000000000LL, v1, v21, 0LL);
        v20 = v52;
      }
      ++v20;
      ++v19;
      ++v21;
      v52 = v20;
      v53 = v20;
    }
    while ( v20 < v16 );
    v22 = v47;
    *(_WORD *)(v3 + 216) = 8 * (dword_1403D00F8 + 6);
    StartingIndex = v21;
    __incgsdword(0x2E2Cu);
    __addgsdword(0x2E28u, NumberToSet);
    *(_DWORD *)(v3 + 40) &= ~2u;
    v23 = *(_DWORD *)(v3 + 40) >> 2;
    *(_QWORD *)(v3 + 184) = MEMORY[0xFFFFF78000000014];
    v24 = v23 & 7;
    v25 = *(_DWORD *)(v22 + 772);
    v26 = *(_QWORD *)(v22 + 5504);
    if ( v25 )
    {
      if ( v26 >= 0x400 )
      {
        *(_DWORD *)(v22 + 772) = 0;
        goto LABEL_33;
      }
      *(_DWORD *)(v22 + 772) = v25 - 1;
    }
    else if ( v26 < 0x80 )
    {
      *(_DWORD *)(v22 + 772) = 32;
    }
    else
    {
      if ( v26 >= 0x100 )
        goto LABEL_33;
      *(_DWORD *)(v22 + 772) = 8;
    }
    v24 = 4;
LABEL_33:
    CurrentThread = v49;
    *(_DWORD *)(v3 + 40) ^= (*(_DWORD *)(v3 + 40) ^ (4 * v24)) & 0x1C;
    if ( v24 < 2 )
    {
      --CurrentThread->SpecialApcDisable;
      ++*(_DWORD *)(v22 + 628);
      v38 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v38;
      if ( !v38
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MI_PAGEFILE_WRITE(v3, (_QWORD *)(v3 + 184), v24, ((unsigned __int8)~(_BYTE)v4 >> 3) & 1, -1);
    v27 = *(_DWORD *)(v22 + 760);
    if ( v27 == 512 )
      *(_QWORD *)(v22 + 752) -= *(_QWORD *)(v22 + 752) >> 9;
    else
      *(_DWORD *)(v22 + 760) = v27 + 1;
    v28 = NumberToSet;
    *(_QWORD *)(v22 + 752) += NumberToSet;
    v29 = (unsigned int)v43;
    *(_DWORD *)(v3 + 40) &= ~0x20u;
    *(_QWORD *)(v3 + 176) = (unsigned __int64)v29 << 12;
    if ( (v4 & 0x10) == 0 || (int)MiStoreWriteModifiedPages(v3) < 0 )
    {
      MiMapPageFileHash(v1, v3 + 208, 0LL, v29, v28);
      v39 = IoAsynchronousPageWrite(
              *(struct _FILE_OBJECT **)(v1 + 64),
              (struct _MDL *)(v3 + 208),
              (LARGE_INTEGER *)(v3 + 176),
              (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
              (void *)v3,
              v24,
              *(_DWORD *)(v1 + 160),
              0,
              (struct _IO_STATUS_BLOCK *)(v3 + 16),
              (IRP **)(v3 + 32));
      if ( (v39 & 0xC0000000) == 0xC0000000 )
      {
        *(_DWORD *)(v3 + 16) = v39;
        *(_QWORD *)(v3 + 24) = 0LL;
        v40 = KeGetCurrentIrql();
        __writecr8(1uLL);
        MiWriteComplete(v3, (int *)(v3 + 16), 0);
        __writecr8(v40);
      }
    }
    goto LABEL_38;
  }
  --CurrentThread->SpecialApcDisable;
  v30 = v5 + 816;
  v31 = *(__int64 **)(v30 + 8);
  *(_QWORD *)v3 = v30;
  *(_QWORD *)(v3 + 8) = v31;
  if ( *v31 != v30 )
    __fastfail(3u);
  *v31 = v3;
  *(_QWORD *)(v30 + 8) = v3;
  v32 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v32;
  if ( !v32 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_38:
  if ( (v4 & 4) != 0 )
  {
    v33 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
