/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     IsDwmActive_0 @ 0x1C0001468 (IsDwmActive_0.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreUpdateSharedDevCaps @ 0x1C007C8D8 (GreUpdateSharedDevCaps.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7488 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
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
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int updated; // esi
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax

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
    *(_QWORD *)(v6 + 24) = 27446LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = 27451LL;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C011B600)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2600LL) + 256LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2600LL) + 272LL)) )
  {
    v12 = *(unsigned int (__fastcall **)(_QWORD))(v8 + 2696);
    if ( v12 && v12(*(_QWORD *)(v8 + 1824)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 72));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 72), 4);
      EngAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 64), 11);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore(ghsemPalette);
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
        v21 = WdLogNewEntry5_WdEvent(v17, v16);
        *(_QWORD *)(v21 + 24) = 6LL;
        WdLogEvent5_WdEvent(v21);
      }
      GreReleaseHmgrSemaphore(v20);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v8 + 64));
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()");
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
