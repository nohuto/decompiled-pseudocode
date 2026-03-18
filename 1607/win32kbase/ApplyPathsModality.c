/*
 * XREFs of ApplyPathsModality @ 0x1C0065594
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     IsUpdateGammaRampOnDeviceSupported_0 @ 0x1C0001730 (IsUpdateGammaRampOnDeviceSupported_0.c)
 *     UpdateGammaRampOnDevice_0 @ 0x1C0001738 (UpdateGammaRampOnDevice_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0064B48 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0065808 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  unsigned int v23; // r9d
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // r8
  unsigned int i; // edi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // esi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r8

  v11 = 0;
  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore(a1) )
  {
    LOBYTE(v12) = 1;
    DrvNotifyModeChangeStartStop(v12);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v30);
    }
    v17 = a2;
    LODWORD(v17) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64))qword_1C011B448)(v17, a1) < 0 )
    {
      *a6 = 1;
      v22 = -1;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v31);
      }
      if ( (a2 & 0x400000) != 0 )
      {
        v32 = *(unsigned int *)(a1 + 36);
        v11 = 1;
        v33 = 0;
        if ( (_DWORD)v32 )
        {
          while ( 1 )
          {
            v34 = 168LL * v33;
            if ( *(_DWORD *)(v34 + *(_QWORD *)(a1 + 40) + 152) != *(_DWORD *)(v34 + *(_QWORD *)(a1 + 40) + 156) )
              break;
            if ( ++v33 >= (unsigned int)v32 )
              goto LABEL_8;
          }
          v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v32);
          v36 = 168LL * v33;
          v35[3] = *(int *)(*(_QWORD *)(a1 + 40) + v36 + 4);
          v35[4] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v36);
          v35[5] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v36 + 152);
          v35[6] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v36 + 156);
          WdLogEvent5_WdEvent(v35);
          v11 = 0;
        }
      }
LABEL_8:
      v22 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v11);
      if ( v22 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C011B450)(a1);
      if ( v22 != 2 )
        goto LABEL_19;
      v23 = *(_DWORD *)(a1 + 36);
      if ( v23 )
      {
        v24 = *(_QWORD *)(a1 + 40);
        if ( v24 )
        {
          v25 = 0;
          while ( 1 )
          {
            v26 = 168LL * v25;
            if ( *(_DWORD *)(v26 + v24 + 152) || *(_DWORD *)(v26 + v24 + 164) || *(_DWORD *)(v26 + v24 + 160) )
              break;
            if ( ++v25 >= v23 )
              goto LABEL_18;
          }
          *(_QWORD *)a7 = a5;
          v22 = 0;
          GreIncrementDisplaySettingsUniqueness();
LABEL_19:
          if ( v22 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported_0() >= 0 && a7 && *(_QWORD *)a7 )
          {
            EngAcquireSemaphore(ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
            EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
            for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a7 + 20LL); ++i )
            {
              v29 = *(_QWORD *)(32 * (i + 1LL) + *(_QWORD *)a7);
              if ( v29 )
              {
                if ( (*(_DWORD *)(v29 + 56) & 1) != 0 )
                  UpdateGammaRampOnDevice_0();
              }
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
            GreReleaseSemaphoreInternal(ghsemGreLock);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
          }
        }
      }
    }
LABEL_18:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v22;
  }
  return 0xFFFFFFFFLL;
}
