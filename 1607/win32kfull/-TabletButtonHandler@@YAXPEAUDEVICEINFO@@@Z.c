/*
 * XREFs of ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D1030
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D12AC (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D1D8C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall TabletButtonHandler(struct DEVICEINFO *a1)
{
  ULONG ReportLength; // ebp
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  ULONG v4; // eax
  USHORT *v5; // rdi
  NTSTATUS Usages; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  char *v10; // rax
  struct tagTABLET_BUTTON_ACTION *v11; // r9
  unsigned int v12; // edx
  int v13; // r9d
  ULONG UsageLength[4]; // [rsp+40h] [rbp-108h] BYREF
  _devicemodeW v15; // [rsp+50h] [rbp-F8h] BYREF

  ReportLength = *((_DWORD *)a1 + 66);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)a1 + 58) + 16LL);
  v4 = HidP_MaxUsageListLength(HidP_Input, 0, PreparsedData);
  UsageLength[0] = v4;
  if ( v4 )
  {
    v5 = (USHORT *)Win32AllocPool(2LL * v4, 1635087189LL);
    if ( v5 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0,
                 0,
                 v5,
                 UsageLength,
                 PreparsedData,
                 *(PCHAR *)(*((_QWORD *)a1 + 58) + 24LL),
                 ReportLength);
      if ( dword_1C032542C != 10 )
      {
        if ( Usages >= 0 && (v8 = UsageLength[0], v7 = 0LL, UsageLength[0]) )
        {
          while ( v5[v7] - 1 != dword_1C032542C )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= UsageLength[0] )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          if ( gpTabBtnAction )
          {
            xxxTabletButtonExecuteAction(gpTabBtnAction, 0, 0LL);
            gpTabBtnAction = 0LL;
          }
          v7 = gtmridTabletButtonTimer;
          dword_1C032542C = 10;
          if ( gtmridTabletButtonTimer )
          {
            FindTimer(0LL, gtmridTabletButtonTimer, 4u, 1, 0LL);
            gtmridTabletButtonTimer = 0LL;
          }
        }
        goto LABEL_34;
      }
      if ( Usages < 0 )
        goto LABEL_34;
      if ( !UsageLength[0] )
        goto LABEL_34;
      if ( (unsigned __int16)(*v5 - 1) > 9u )
        goto LABEL_34;
      dword_1C032542C = *v5 - 1;
      if ( (int)TabletRetrieveDevMode(&v15) < 0 || v15.dmDisplayOrientation > 3 )
        goto LABEL_34;
      if ( v15.dmDisplayOrientation == 1 )
      {
        v10 = (char *)&unk_1C0331DE0;
      }
      else
      {
        if ( v15.dmDisplayOrientation != 2 )
        {
          v9 = (unsigned __int64)(unsigned int)dword_1C032542C << 7;
          if ( v15.dmDisplayOrientation == 3 )
            v10 = (char *)&unk_1C0331E20;
          else
            v10 = (char *)&TabButtonConfig;
          goto LABEL_17;
        }
        v10 = (char *)&unk_1C0331E00;
      }
      v9 = (unsigned __int64)(unsigned int)dword_1C032542C << 7;
LABEL_17:
      v11 = (struct tagTABLET_BUTTON_ACTION *)&v10[v9];
      if ( (PVOID)grpdeskRitInput == grpdeskLogon )
        v11 = (struct tagTABLET_BUTTON_ACTION *)((char *)v11 + 16);
      if ( (unsigned int)(*(_DWORD *)v11 + 2147483636) <= 1 )
      {
        gpTabBtnAction = v11;
        v12 = 250;
        v13 = 0;
LABEL_25:
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, v12, (__int64)xxxTabletButtonTimerCallback, v13);
        goto LABEL_34;
      }
      if ( *(_DWORD *)v11 != *((_DWORD *)v11 + 2) || *((_DWORD *)v11 + 1) != *((_DWORD *)v11 + 3) )
      {
        gpTabBtnAction = v11;
        v12 = 1000;
        v13 = 1;
        goto LABEL_25;
      }
      xxxTabletButtonExecuteAction(v11, 0, &v15);
LABEL_34:
      Win32FreePool(v5, v7, v8);
    }
  }
}
