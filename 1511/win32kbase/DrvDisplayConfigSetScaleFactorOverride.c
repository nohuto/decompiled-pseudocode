/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxSendNotifyMessage_0 @ 0x1C0002B78 (xxxSendNotifyMessage_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B88B0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = WPP_MAIN_CB.DeviceQueue.1;
        i;
        i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&i + 24LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&i + 56LL) & 0x401) == 1 )
    {
      v7 = *(_DWORD **)(*(_QWORD *)&i + 2600LL);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          v9 = *(_QWORD *)&i + 2480LL;
          if ( a2 )
          {
            if ( *a2 )
            {
              v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, __int64))qword_1C0104520)(
                      v7 + 66,
                      (unsigned int)v7[68],
                      (unsigned int)a1[5],
                      v9);
              v4 = v10;
              if ( v10 < 0 )
              {
                v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v5, v13);
                v14[3] = v4;
                v14[4] = (int)a1[5];
                v14[5] = *(int *)(*(_QWORD *)(*(_QWORD *)&i + 2600LL) + 268LL);
                v14[6] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&i + 2600LL) + 264LL);
                v14[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&i + 2600LL) + 272LL);
                WdLogEvent5_WdError(v14);
              }
            }
            else if ( (v8 & 4) != 0 )
            {
              v15 = (unsigned int)v7[68];
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, __int64))qword_1C0104520)(
                              v7 + 66,
                              v15,
                              (unsigned int)a1[5],
                              v9);
              break;
            }
          }
          else if ( a1[2] == v7[66] && a1[3] == v7[67] )
          {
            v16 = v7[68];
            if ( a1[4] == v16 )
            {
              v15 = v16;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v5);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  if ( (int)v4 >= 0 )
  {
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    GreIncrementDisplaySettingsUniqueness();
    xxxSendNotifyMessage_0();
    xxxResetDisplayDevice(grpdeskRitInput, 0, 0, 1);
  }
  return (unsigned int)v4;
}
