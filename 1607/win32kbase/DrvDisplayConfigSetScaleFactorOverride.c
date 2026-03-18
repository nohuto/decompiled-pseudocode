/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C00C8B60
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00C87A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     xxxSendNotifyMessage_0 @ 0x1C0002B78 (xxxSendNotifyMessage_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int Flink; // eax
  struct _LIST_ENTRY *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 Flink_low; // rdx
  unsigned int v16; // eax

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; i; i = i[1].Blink )
  {
    if ( ((__int64)i[3].Blink & 0x401) == 1 )
    {
      Blink = i[162].Blink;
      if ( (((unsigned __int64)&Blink->Flink + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        Flink = (int)Blink[10].Flink;
        if ( (Flink & 0x800000) != 0 )
        {
          v8 = i + 155;
          if ( a2 )
          {
            if ( *a2 )
            {
              v9 = ((__int64 (__fastcall *)(struct _LIST_ENTRY **, _QWORD, _QWORD, struct _LIST_ENTRY *))qword_1C011B870)(
                     &Blink[16].Blink,
                     LODWORD(Blink[17].Flink),
                     (unsigned int)a1[5],
                     v8);
              v4 = v9;
              if ( v9 < 0 )
              {
                v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12, v13);
                v14[3] = v4;
                v14[4] = (int)a1[5];
                v14[5] = SHIDWORD(i[162].Blink[16].Blink);
                v14[6] = LODWORD(i[162].Blink[16].Blink);
                v14[7] = LODWORD(i[162].Blink[17].Flink);
                WdLogEvent5_WdError(v14);
              }
            }
            else if ( (Flink & 4) != 0 )
            {
              Flink_low = LODWORD(Blink[17].Flink);
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(struct _LIST_ENTRY **, __int64, _QWORD, struct _LIST_ENTRY *))qword_1C011B870)(
                              &Blink[16].Blink,
                              Flink_low,
                              (unsigned int)a1[5],
                              v8);
              break;
            }
          }
          else if ( a1[2] == LODWORD(Blink[16].Blink) && a1[3] == HIDWORD(Blink[16].Blink) )
          {
            v16 = (unsigned int)Blink[17].Flink;
            if ( a1[4] == v16 )
            {
              Flink_low = v16;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  if ( (int)v4 >= 0 )
  {
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    GreIncrementDisplaySettingsUniqueness();
    xxxSendNotifyMessage_0();
    xxxResetDisplayDevice(grpdeskRitInput, 0, 0);
  }
  return (unsigned int)v4;
}
