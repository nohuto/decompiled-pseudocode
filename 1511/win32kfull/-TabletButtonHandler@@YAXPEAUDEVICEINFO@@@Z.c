/*
 * XREFs of ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D99D0
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D9C48 (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D9E68 (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall TabletButtonHandler(struct DEVICEINFO *a1)
{
  ULONG ReportLength; // ebp
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  ULONG v4; // eax
  USHORT *v5; // rdi
  NTSTATUS Usages; // eax
  char *v7; // rax
  struct tagTABLET_BUTTON_ACTION *v8; // r9
  unsigned int v9; // edx
  int v10; // r9d
  __int64 v11; // rdx
  ULONG UsageLength[4]; // [rsp+40h] [rbp-108h] BYREF
  _devicemodeW v13; // [rsp+50h] [rbp-F8h] BYREF

  ReportLength = *((_DWORD *)a1 + 64);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)a1 + 50) + 16LL);
  v4 = HidP_MaxUsageListLength(HidP_Input, 0, PreparsedData);
  UsageLength[0] = v4;
  if ( v4 )
  {
    v5 = (USHORT *)Win32AllocPool(2LL * v4);
    if ( v5 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0,
                 0,
                 v5,
                 UsageLength,
                 PreparsedData,
                 *(PCHAR *)(*((_QWORD *)a1 + 50) + 24LL),
                 ReportLength);
      if ( dword_1C03202C0 != 10 )
      {
        if ( Usages >= 0 && (v11 = 0LL, UsageLength[0]) )
        {
          while ( v5[v11] - 1 != dword_1C03202C0 )
          {
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= UsageLength[0] )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          if ( gpTabBtnAction )
          {
            xxxTabletButtonExecuteAction(gpTabBtnAction, 0, 0LL);
            gpTabBtnAction = 0LL;
          }
          dword_1C03202C0 = 10;
          if ( gtmridTabletButtonTimer )
          {
            FindTimer(0LL, gtmridTabletButtonTimer, 4u, 1, 0LL);
            gtmridTabletButtonTimer = 0LL;
          }
        }
        goto LABEL_33;
      }
      if ( Usages >= 0 )
      {
        if ( UsageLength[0] )
        {
          if ( (unsigned __int16)(*v5 - 1) <= 9u )
          {
            dword_1C03202C0 = *v5 - 1;
            if ( (int)TabletRetrieveDevMode(&v13) >= 0 && v13.dmDisplayOrientation <= 3 )
            {
              switch ( v13.dmDisplayOrientation )
              {
                case 1u:
                  v7 = (char *)&unk_1C032BB40;
                  break;
                case 2u:
                  v7 = (char *)&unk_1C032BB60;
                  break;
                case 3u:
                  v7 = (char *)&unk_1C032BB80;
                  break;
                default:
                  v7 = (char *)&TabButtonConfig;
                  break;
              }
              v8 = (struct tagTABLET_BUTTON_ACTION *)&v7[128 * (unsigned __int64)(unsigned int)dword_1C03202C0];
              if ( (PVOID)grpdeskRitInput == grpdeskLogon )
                v8 = (struct tagTABLET_BUTTON_ACTION *)((char *)v8 + 16);
              if ( (unsigned int)(*(_DWORD *)v8 + 2147483636) <= 1 )
              {
                gpTabBtnAction = v8;
                v9 = 250;
                v10 = 0;
LABEL_24:
                gtmridTabletButtonTimer = SetRITTimer(
                                            gtmridTabletButtonTimer,
                                            v9,
                                            (__int64)xxxTabletButtonTimerCallback,
                                            v10);
                goto LABEL_33;
              }
              if ( *(_DWORD *)v8 != *((_DWORD *)v8 + 2) || *((_DWORD *)v8 + 1) != *((_DWORD *)v8 + 3) )
              {
                gpTabBtnAction = v8;
                v9 = 1000;
                v10 = 1;
                goto LABEL_24;
              }
              xxxTabletButtonExecuteAction(v8, 0, &v13);
            }
          }
        }
      }
LABEL_33:
      Win32FreePool(v5);
    }
  }
}
