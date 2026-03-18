/*
 * XREFs of DrvEnableMDEV @ 0x1C0064CE8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeEnableMDEV @ 0x1C0070960 (SafeEnableMDEV.c)
 * Callees:
 *     DrvRealizeHalftonePaletteWrap_0 @ 0x1C0001730 (DrvRealizeHalftonePaletteWrap_0.c)
 *     IsDrvRealizeHalftonePaletteSupported_0 @ 0x1C0001738 (IsDrvRealizeHalftonePaletteSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0083ED0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  void (__fastcall *v20)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  _QWORD *v23; // rdi
  void (__fastcall *v24)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

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
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 72), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 64), 11);
  if ( (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v9 + 1832);
  v28 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v20 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2896);
    if ( v20 )
      v20(*(_QWORD *)(v9 + 1824), &v28, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v6 = 0;
  }
  else
  {
    v14 = *((_DWORD *)a1 + 5);
    if ( v14 > 1 )
    {
      v21 = 0;
      v22 = a1 + 4;
      while ( 1 )
      {
        v23 = (_QWORD *)*v22;
        if ( (*(_DWORD *)(*v22 + 2196) & 0x100) != 0 )
          break;
        ++v21;
        v22 += 4;
        if ( v21 >= v14 )
          goto LABEL_9;
      }
      v24 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v23[224];
      v25 = v23[229];
      v26 = v25;
      if ( v24 )
        v24(*(_QWORD *)(v23[5] + 1824LL), &v26, 0LL, 0LL, *(_DWORD *)(v25 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported_0() >= 0 )
        DrvRealizeHalftonePaletteWrap_0();
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 64), v12);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v9 + 64));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v15);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v16);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 72), v17);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v9 + 72));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v18);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  if ( (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return v6;
}
