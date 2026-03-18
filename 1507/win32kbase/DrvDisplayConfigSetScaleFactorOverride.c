/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BB640
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxSendNotifyMessage_0 @ 0x1C0002B48 (xxxSendNotifyMessage_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B60D0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  struct PDEV *i; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = gppdevList; i; i = (struct PDEV *)*((_QWORD *)i + 3) )
  {
    if ( (*((_DWORD *)i + 14) & 0x401) == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)i + 325);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          v9 = (char *)i + 2480;
          if ( a2 )
          {
            if ( *a2 )
            {
              v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, char *))qword_1C0101708)(
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
                v14[5] = *(int *)(*((_QWORD *)i + 325) + 268LL);
                v14[6] = *(unsigned int *)(*((_QWORD *)i + 325) + 264LL);
                v14[7] = *(unsigned int *)(*((_QWORD *)i + 325) + 272LL);
                WdLogEvent5_WdError(v14);
              }
            }
            else if ( (v8 & 4) != 0 )
            {
              v15 = (unsigned int)v7[68];
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, char *))qword_1C0101708)(
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
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  if ( (int)v4 >= 0 )
  {
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    GreIncrementDisplaySettingsUniqueness();
    xxxSendNotifyMessage_0();
    xxxResetDisplayDevice(grpdeskRitInput, 0, 0, 1);
  }
  return (unsigned int)v4;
}
