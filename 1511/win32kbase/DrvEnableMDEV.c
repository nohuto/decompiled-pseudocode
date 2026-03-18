/*
 * XREFs of DrvEnableMDEV @ 0x1C0057B68
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeEnableMDEV @ 0x1C0087B60 (SafeEnableMDEV.c)
 * Callees:
 *     DrvRealizeHalftonePaletteWrap_0 @ 0x1C00016D0 (DrvRealizeHalftonePaletteWrap_0.c)
 *     IsDrvRealizeHalftonePaletteSupported_0 @ 0x1C00016D8 (IsDrvRealizeHalftonePaletteSupported_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0078560 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // ebp
  HDEV v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edx
  void (__fastcall *v15)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v16; // ecx
  __int64 *v17; // rsi
  _QWORD *v18; // rdi
  void (__fastcall *v19)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = (int)a2;
  v6 = 1;
  v7 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v4;
  WdLogEvent5_WdEvent(v7);
  v9 = *a1;
  v10 = 0;
  for ( i = *a1; v10 < *((_DWORD *)a1 + 5); ++v10 )
  {
    v11 = (HDEV)a1[4 * v10 + 4];
    if ( (_DWORD)v4
      || (*(_DWORD *)(*((_QWORD *)v11 + 325) + 160LL) & 0x20000000) != 0
      && gbInvalidateDualView
      && ((_DWORD)v11[14] & 0x400) != 0 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[4 * v10 + 4], v8, a3);
      DrvEnableDisplay(v11);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 72), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 64), 11LL);
  if ( (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v12 = *(_QWORD *)(v9 + 1832);
  v23 = v12;
  if ( (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v15 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2896);
    if ( v15 )
      v15(*(_QWORD *)(v9 + 1824), &v23, 0LL, 0LL, *(_DWORD *)(v12 + 28));
    else
      v6 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v16 = 0;
      v17 = a1 + 4;
      while ( 1 )
      {
        v18 = (_QWORD *)*v17;
        if ( (*(_DWORD *)(*v17 + 2196) & 0x100) != 0 )
          break;
        ++v16;
        v17 += 4;
        if ( v16 >= v13 )
          goto LABEL_9;
      }
      v19 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v18[224];
      v20 = v18[229];
      v21 = v20;
      if ( v19 )
        v19(*(_QWORD *)(v18[5] + 1824LL), &v21, 0LL, 0LL, *(_DWORD *)(v20 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported_0() >= 0 )
        DrvRealizeHalftonePaletteWrap_0();
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()");
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v9 + 64));
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()");
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v9 + 72));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  if ( (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return v6;
}
