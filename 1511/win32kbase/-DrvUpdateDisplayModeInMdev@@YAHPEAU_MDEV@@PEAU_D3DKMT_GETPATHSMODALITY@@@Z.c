/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     IsDwmActive_0 @ 0x1C00013F8 (IsDwmActive_0.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     GreUpdateSharedDevCaps @ 0x1C0061FE4 (GreUpdateSharedDevCaps.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB784 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct _D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int updated; // esi
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8

  if ( !(unsigned int)IsDwmActive_0() || *((_DWORD *)a1 + 5) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 5LL;
LABEL_3:
    WdLogEvent5_WdEvent(v6);
    return 0LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 27267LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 27272LL;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01042B8)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2600LL) + 256LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2600LL) + 272LL)) )
  {
    v12 = *(unsigned int (__fastcall **)(_QWORD))(v8 + 2704);
    if ( v12 && v12(*(_QWORD *)(v8 + 1824)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 72));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 72), 4);
      EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 64), 11);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 13);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 15);
      GreAcquireHmgrSemaphore(v14, v13, v15);
      updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 4), a2);
      if ( updated )
      {
        v19 = *(_DWORD **)(*((_QWORD *)a1 + 4) + 2616LL);
        *((_DWORD *)a1 + 12) = v19[19];
        *((_DWORD *)a1 + 13) = v19[20];
        *((_DWORD *)a1 + 14) = v19[19] + v19[43];
        *((_DWORD *)a1 + 15) = v19[20] + v19[44];
        GreUpdateSharedDevCaps(*(_QWORD *)a1);
      }
      else
      {
        v23 = WdLogNewEntry5_WdEvent(v17, v16);
        *(_QWORD *)(v23 + 24) = 6LL;
        WdLogEvent5_WdEvent(v23);
      }
      GreReleaseHmgrSemaphore(v21, v20, v22);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (__int64)ghsemRFONTList, v24);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (__int64)ghsemPublicPFT, v25);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (__int64)ghsemPalette, v26);
      GreReleaseSemaphoreInternal(ghsemPalette);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v27);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 64), v28);
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v8 + 64));
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v29);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v30);
      GreReleaseSemaphoreInternal(ghsemSprite);
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 72), v31);
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v8 + 72));
      return updated;
    }
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v11 + 24) = 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v11 + 24) = 7LL;
  }
  WdLogEvent5_WdEvent(v11);
  return 0;
}
