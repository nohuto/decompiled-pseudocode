/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7488
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C00C6358 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00C6844 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HSEMAPHORE *a1, struct _D3DKMT_GETPATHSMODALITY *a2)
{
  HSEMAPHORE *v2; // rbx
  unsigned int updated; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _devicemodeW *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  HSEMAPHORE *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v19 = a1;
  updated = 0;
  EngAcquireSemaphore(a1[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)v2[9], 4);
  EngAcquireSemaphore(v2[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v2[8], 11);
  if ( !v2[327] )
  {
    v9 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v9 + 24) = 1LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation((struct tagGRAPHICS_DEVICE *)v2[325])
    || (v7 = v2[325], (v7[40] & 0x6000008) != 0) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v9 + 24) = 2LL;
LABEL_18:
    WdLogEvent5_WdEvent(v9);
    goto LABEL_19;
  }
  v10 = 0LL;
  if ( !*((_WORD *)a2 + 10) )
    goto LABEL_10;
  while ( 1 )
  {
    v11 = 216LL * (unsigned int)v10;
    if ( v7[68] == *(_DWORD *)((char *)a2 + v11 + 64)
      && v7[66] == *(_DWORD *)((char *)a2 + v11 + 56)
      && v7[67] == *(_DWORD *)((char *)a2 + v11 + 60) )
    {
      break;
    }
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_10;
  }
  v10 = 216LL * (unsigned int)v10;
  v12 = *(struct _devicemodeW **)((char *)a2 + v10 + 224);
  if ( !v12 )
  {
LABEL_10:
    v9 = WdLogNewEntry5_WdEvent(v10, v7);
    *(_QWORD *)(v9 + 24) = 27365LL;
    goto LABEL_18;
  }
  if ( !DevmodeAutoRotateCompatible(v12, (const struct _devicemodeW *)v2[327]) )
  {
    v9 = WdLogNewEntry5_WdEvent(v14, v13);
    goto LABEL_18;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v19, v12);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
    v17 = WdLogNewEntry5_WdEvent(v16, v15);
    *(_QWORD *)(v17 + 24) = 4LL;
    WdLogEvent5_WdEvent(v17);
  }
  v2 = v19;
LABEL_19:
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)v2[8]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)v2[9]);
  return updated;
}
