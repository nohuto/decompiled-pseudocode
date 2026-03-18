/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C001A630
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0008D50 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z @ 0x1C0012830 (-VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00176C4 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0019F38 (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C001A004 (VidSchiRewindPacket.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 *     VidSchIsVSyncEnabled @ 0x1C0078930 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned int v8; // ebx
  void (__fastcall *v9)(_QWORD, _QWORD); // rax
  void (__fastcall *v10)(_QWORD, _QWORD); // rax
  __int64 v11; // rdx
  bool v12; // zf
  unsigned int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  _QWORD *v17; // rax
  int v18; // eax
  char v19; // bl
  __int64 v20; // rdx
  int v21; // eax
  _DWORD *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  int v26; // eax
  char v27; // cl
  int v28; // eax
  char v29; // dl
  void *v30; // rcx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  ULONG v34; // eax
  unsigned int v35; // r13d
  ULONG v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edx
  int v40; // eax
  unsigned int v41; // r8d
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  unsigned int v44[2]; // [rsp+30h] [rbp-59h]
  unsigned int v45; // [rsp+30h] [rbp-59h]
  unsigned int v46; // [rsp+38h] [rbp-51h]
  BOOL v47; // [rsp+3Ch] [rbp-4Dh]
  int v48; // [rsp+40h] [rbp-49h]
  int v49; // [rsp+48h] [rbp-41h]
  __int64 v50; // [rsp+50h] [rbp-39h]
  _DWORD *v51; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  __int64 v53; // [rsp+F0h] [rbp+67h] BYREF
  KIRQL NewIrql; // [rsp+F8h] [rbp+6Fh]
  unsigned int v55; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 80);
  v3 = *(unsigned int *)(a1 + 144);
  *(_QWORD *)v44 = v1;
  v4 = (unsigned int)v3;
  v46 = v3;
  v5 = *(_QWORD *)(v1 + 104);
  v50 = v3;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v6 + 8 * v3 + 2640);
  if ( (*(_BYTE *)(v6 + 2508) & 1) != 0
    || *(_DWORD *)(v6 + 2480)
    || *(_BYTE *)(v5 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 168), 0, 0) )
  {
    VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(a1 + 376) >= 4 )
    VidSchIsVSyncEnabled(v6, (unsigned int)v3);
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v4 + 2640) + 14736LL);
  if ( v8 != -1 )
  {
    v9 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2512);
    if ( v9 )
      v9(*(_QWORD *)(v6 + 2560), v8);
  }
  NewIrql = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1872), &LockHandle);
  if ( (*(_DWORD *)(a1 + 64) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x1800) != 0x800 )
      ++*(_QWORD *)(v5 + 8 * v4 + 344);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(NewIrql);
    VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 384) - *(_QWORD *)(v5 + 8 * v4 + 344) > (unsigned __int64)(unsigned int)(64
                                                                                               - *(_DWORD *)(v7 + 2320)) )
  {
    VidSchiRewindPacket(a1, 1LL, 1, 1u);
    VidSchiUpdateContextStatus(v1, (_QWORD *)3, (__int64 *)0xA2B);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(NewIrql);
LABEL_15:
    if ( v8 != -1 )
    {
      v10 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2528);
      if ( v10 )
        v10(*(_QWORD *)(v6 + 2560), v8);
    }
    return;
  }
  v11 = a1 + 616;
  v12 = *(_DWORD *)(v7 + 4) == 3;
  LOBYTE(v53) = 0;
  v47 = v12;
  v13 = -1;
  v55 = -1;
  if ( (*(_BYTE *)(a1 + 75) & 1) != 0 )
  {
    v14 = (unsigned __int8)*(_DWORD *)v11;
    v15 = v14 | *(unsigned __int8 *)(a1 + 617);
  }
  else
  {
    v14 = *(unsigned int *)(v6 + 124);
    v15 = (1 << v14) - 1;
  }
  if ( v15 )
  {
    v12 = !_BitScanForward((unsigned int *)&v18, v15);
    v19 = -1;
    LOBYTE(v14) = !v12;
    if ( !v12 )
      v19 = v18;
    do
    {
      v20 = 280LL * v19;
      if ( *(_DWORD *)(v20 + v7 + 148) == 2 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v20);
        v43[5] = v19;
        v43[3] = 281LL;
        v43[4] = 0x100000LL;
        v43[6] = *(unsigned int *)(a1 + 372);
        v43[7] = v6;
        WdLogEvent5_WdCriticalError(v43);
        __debugbreak();
      }
      if ( v13 == -1 )
      {
        v13 = v19;
        v55 = v19;
      }
      v21 = 1 << v19;
      v19 = -1;
      v15 &= ~v21;
      v12 = !_BitScanForward((unsigned int *)&v21, v15);
      LOBYTE(v14) = !v12;
      if ( !v12 )
        v19 = v21;
    }
    while ( v15 );
    v11 = a1 + 616;
  }
  else
  {
    v16 = *(_DWORD *)(v6 + 124);
    v13 = 0;
    v55 = 0;
    if ( !v16 )
      goto LABEL_29;
    while ( 1 )
    {
      v14 = 280LL * v13;
      if ( *(_DWORD *)(v14 + v7 + 148) != 2 )
        break;
      v55 = ++v13;
      if ( v13 >= v16 )
        goto LABEL_29;
    }
    if ( v13 == -1 )
    {
LABEL_29:
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v11);
      v17[5] = 0LL;
      v17[3] = 281LL;
      v17[4] = 0x100000LL;
      v17[6] = *(unsigned int *)(a1 + 372);
      v17[7] = v6;
      WdLogEvent5_WdCriticalError(v17);
      __debugbreak();
    }
  }
  v49 = *(_DWORD *)(a1 + 384) - *(_DWORD *)(v5 + 8 * v4 + 344);
  v22 = *(_DWORD **)(v7 + 8LL * v13 + 16);
  v51 = v22;
  LODWORD(v4) = ((_BYTE)v49 + (unsigned __int8)v22[8]) & 0x3F;
  v48 = v4;
  v23 = (__int64)&v22[286 * (((_BYTE)v49 + (unsigned __int8)v22[8]) & 0x3F) + 14];
  if ( *(_DWORD *)(v23 + 1044) == 8 )
  {
    v24 = *(_QWORD *)v44;
    *(_QWORD *)(v23 + 8LL * *(unsigned int *)(v23 + 1068)) = *(_QWORD *)v44;
    *(_QWORD *)(v23 + 8LL * (unsigned int)(*(_DWORD *)(v23 + 1068))++ + 520) = *(_QWORD *)(*(_QWORD *)v44 + 144LL);
    ++*(_DWORD *)(*(_QWORD *)v44 + 768LL);
    goto LABEL_65;
  }
  ++*(_DWORD *)(v6 + 912);
  ++*(_DWORD *)(v5 + 1004);
  ++*(_DWORD *)(*(_QWORD *)v44 + 768LL);
  ++*(_DWORD *)(v7 + 2320);
  if ( (*(_BYTE *)(a1 + 259) & 1) != 0 )
    v25 = (unsigned __int8)*(_DWORD *)v11 | *(unsigned __int8 *)(v11 + 1);
  else
    v25 = (1 << *(_DWORD *)(v6 + 124)) - 1;
  v12 = !_BitScanForward((unsigned int *)&v26, v25);
  v27 = -1;
  if ( !v12 )
    v27 = v26;
  for ( ; v25; v27 = v29 )
  {
    ++*(_DWORD *)(280LL * v27 + *(_QWORD *)(v6 + 8 * v50 + 2640) + 156);
    v25 &= ~(1 << v27);
    v12 = !_BitScanForward((unsigned int *)&v28, v25);
    v29 = -1;
    if ( !v12 )
      v29 = v28;
  }
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)v23);
  *(_QWORD *)v23 = *(_QWORD *)v44;
  *(_DWORD *)(v23 + 1040) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v23 + 1048) = *(_DWORD *)(a1 + 368);
  *(_QWORD *)(v23 + 520) = *(_QWORD *)(*(_QWORD *)v44 + 144LL);
  v30 = *(void **)(v23 + 1136);
  *(_BYTE *)(v23 + 1056) = (*(_DWORD *)(a1 + 256) & 0x20) != 0;
  *(_DWORD *)(v23 + 1092) ^= (*(_DWORD *)(v23 + 1092) ^ (*(_DWORD *)(a1 + 72) >> 20)) & 0x10;
  memmove(v30, (const void *)(a1 + 616), *(unsigned int *)(a1 + 628));
  *(_DWORD *)(v23 + 1060) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v23 + 1092) ^= (*(_DWORD *)(v23 + 1092) ^ (*(_DWORD *)(a1 + 256) >> 20)) & 1;
  v31 = *(_DWORD *)(v23 + 1092) ^ ((unsigned __int8)*(_DWORD *)(v23 + 1092) ^ (unsigned __int8)(*(_DWORD *)(a1 + 256) >> 20)) & 2;
  *(_DWORD *)(v23 + 1092) = v31;
  v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)(a1 + 256) >> 20)) & 4;
  *(_DWORD *)(v23 + 1092) = v32;
  *(_DWORD *)(v23 + 1092) = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(*(_DWORD *)(a1 + 256) >> 20)) & 8;
  *(_DWORD *)(v23 + 1096) = *(_DWORD *)(a1 + 400);
  *(_QWORD *)(v23 + 1120) = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(v23 + 1128) = *(_QWORD *)(a1 + 288);
  v12 = (*(_DWORD *)(a1 + 256) & 0x800) == 0;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(v23 + 1068) = 1;
  if ( v12 )
    *(_DWORD *)(v23 + 1064) = 1;
  else
    *(_DWORD *)(v23 + 1064) = *(_DWORD *)(a1 + 396);
  if ( !*(_BYTE *)(v23 + 1056) && !v47 && *(_DWORD *)(a1 + 380) != 1 )
  {
    if ( *(_DWORD *)(a1 + 380) == 2 )
    {
      *(_DWORD *)(v23 + 1052) = 1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 380) != 3 )
      {
        v24 = *(_QWORD *)v44;
        if ( *(_DWORD *)(a1 + 380) == 4 )
        {
          *(_DWORD *)(v23 + 1052) = 3;
          goto LABEL_65;
        }
        goto LABEL_64;
      }
      *(_DWORD *)(v23 + 1052) = 2;
    }
    v24 = *(_QWORD *)v44;
    goto LABEL_65;
  }
  v24 = *(_QWORD *)v44;
LABEL_64:
  *(_DWORD *)(v23 + 1052) = 0;
LABEL_65:
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    *(_BYTE *)(v23 + 1057) = 1;
  v45 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(v24 + 88) + 368) + 6LL);
  v33 = **(_DWORD **)(v23 + 1136);
  if ( (_BYTE)v33 )
  {
    v34 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v33);
    if ( v34 )
    {
      v35 = 0;
      v36 = v34;
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidSchiFindAllocationByDriverEngine(
                                                                                    (struct VIDSCH_FLIP_QUEUE_ENTRY *)v23,
                                                                                    v45,
                                                                                    v35++)
                                                                      + 12)
                                                                    + 16LL)
                                                        + 8LL));
      while ( v35 < v36 );
      v22 = v51;
      LODWORD(v4) = v48;
    }
  }
  if ( *(_DWORD *)(v23 + 1064) <= *(_DWORD *)(v23 + 1068) )
  {
    if ( v49 )
    {
      *(_DWORD *)(v23 + 1044) = 7;
      goto LABEL_74;
    }
    while ( 1 )
    {
      v22[8] = ((_BYTE)v4 + 1) & 0x3F;
      ++*(_QWORD *)(v5 + 8 * v50 + 344);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 920));
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 2328));
      if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v23) )
      {
        ++*(_DWORD *)(v6 + 916);
        ++*(_DWORD *)(v7 + 2324);
        *(_DWORD *)(v23 + 1044) = 1;
        goto LABEL_98;
      }
      *(_DWORD *)(v23 + 1044) = 2;
      if ( v47 )
      {
        if ( (_DWORD)v4 == v22[10] )
        {
          VidSchiFlipImmediateAndCompleteFlipEntry((struct _VIDSCH_GLOBAL *)v6, v46, v55, v4, &v53);
LABEL_87:
          v22[9] = v22[8];
        }
      }
      else
      {
        if ( (_DWORD)v4 == v22[10] || *(_BYTE *)(v23 + 1056) )
        {
          v22[9] = v22[8];
          *(_QWORD *)(v23 + 1072) = MEMORY[0xFFFFF78000000320];
          if ( (*(_BYTE *)(v23 + 1092) & 0x10) != 0 )
            v39 = (unsigned __int8)**(_DWORD **)(v23 + 1136) | *(unsigned __int8 *)(*(_QWORD *)(v23 + 1136) + 1LL);
          else
            v39 = (1 << *(_DWORD *)(v6 + 124)) - 1;
          if ( (v39 & *(_DWORD *)(v7 + 2332)) == 0 )
          {
            if ( *(_BYTE *)(v23 + 1056) )
              VidSchiRestartQueuedFlip(v5, v46, v55, v4);
            v40 = *(_DWORD *)(v23 + 1052);
            if ( v40 )
            {
              *(_DWORD *)(v23 + 1044) = 3;
              *(_DWORD *)(v23 + 1052) = v40 - 1;
            }
            else
            {
              v41 = v55;
              *(_DWORD *)(v23 + 1044) = 4;
              VidSchiExecuteMmIoFlip(v6, v46, v41, v4, &v53);
            }
          }
          goto LABEL_98;
        }
        v38 = (unsigned int)v22[286 * (((_BYTE)v4 - 1) & 0x3F) + 287];
        if ( (v38 & 0x20) != 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
          v42[5] = ((_BYTE)v4 - 1) & 0x3F;
          v42[3] = 281LL;
          v42[4] = 0x100000LL;
          v42[6] = v22;
          v42[7] = v6;
          WdLogEvent5_WdCriticalError(v42);
          __debugbreak();
        }
        if ( !*(_DWORD *)(v7 + 2324) )
          goto LABEL_87;
      }
LABEL_98:
      v4 = (unsigned int)v22[8];
      v23 = (__int64)&v22[286 * v4 + 14];
      if ( *(_DWORD *)(v23 + 1044) != 7 )
        goto LABEL_74;
    }
  }
  *(_DWORD *)(v23 + 1044) = 8;
LABEL_74:
  *(_DWORD *)(a1 + 64) |= 2u;
  if ( (_BYTE)v53 )
    VidSchiCompletePendingFlip((struct _VIDSCH_GLOBAL *)v6);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  KeLowerIrql(NewIrql);
}
