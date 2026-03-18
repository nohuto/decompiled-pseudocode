/*
 * XREFs of sub_1C0053ED0 @ 0x1C0053ED0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     IsUpdateGammaRampOnDeviceSupported_0 @ 0x1C00016C0 (IsUpdateGammaRampOnDeviceSupported_0.c)
 *     UpdateGammaRampOnDevice_0 @ 0x1C00016C8 (UpdateGammaRampOnDevice_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     sub_1C00536C0 @ 0x1C00536C0 (sub_1C00536C0.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B88B0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall sub_1C0053ED0(
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // esi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  unsigned int v31; // r9d
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // r8
  unsigned int i; // edi
  __int64 v36; // rcx

  v11 = 0;
  *a6 = 0;
  if ( !(unsigned int)sub_1C00536C0(a1) )
    return 0xFFFFFFFFLL;
  LOBYTE(v12) = 1;
  sub_1C0054204(v12);
  if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a2;
  LODWORD(v19) = a2 | 0x20000;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64))qword_1C0104108)(v19, a1) >= 0 )
  {
    if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v25);
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v26 = *(unsigned int *)(a1 + 36);
      v11 = 1;
      v27 = 0;
      if ( (_DWORD)v26 )
      {
        while ( 1 )
        {
          v28 = 168LL * v27;
          if ( *(_DWORD *)(v28 + *(_QWORD *)(a1 + 40) + 152) != *(_DWORD *)(v28 + *(_QWORD *)(a1 + 40) + 156) )
            break;
          if ( ++v27 >= (unsigned int)v26 )
            goto LABEL_17;
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v26);
        v30 = 168LL * v27;
        v29[3] = *(int *)(*(_QWORD *)(a1 + 40) + v30 + 4);
        v29[4] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v30);
        v29[5] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v30 + 152);
        v29[6] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v30 + 156);
        WdLogEvent5_WdEvent(v29);
        v11 = 0;
      }
    }
LABEL_17:
    v24 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v11);
    if ( v24 < 0 )
      *a6 = 1;
    ((void (__fastcall *)(__int64))qword_1C0104110)(a1);
    if ( v24 == 2 )
    {
      v31 = *(_DWORD *)(a1 + 36);
      if ( !v31 )
        goto LABEL_39;
      v32 = *(_QWORD *)(a1 + 40);
      if ( !v32 )
        goto LABEL_39;
      v33 = 0;
      while ( 1 )
      {
        v34 = 168LL * v33;
        if ( *(_DWORD *)(v34 + v32 + 152) || *(_DWORD *)(v34 + v32 + 164) || *(_DWORD *)(v34 + v32 + 160) )
          break;
        if ( ++v33 >= v31 )
          goto LABEL_39;
      }
      *(_QWORD *)a7 = a5;
      v24 = 0;
      GreIncrementDisplaySettingsUniqueness();
    }
    if ( v24 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported_0() >= 0 && a7 && *(_QWORD *)a7 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a7 + 20LL); ++i )
      {
        v36 = *(_QWORD *)(32 * (i + 1LL) + *(_QWORD *)a7);
        if ( v36 )
        {
          if ( (*(_DWORD *)(v36 + 56) & 1) != 0 )
            UpdateGammaRampOnDevice_0();
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
      GreReleaseSemaphoreInternal(ghsemGreLock);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    goto LABEL_39;
  }
  *a6 = 1;
  v24 = -1;
LABEL_39:
  sub_1C0054204(0LL);
  return (unsigned int)v24;
}
