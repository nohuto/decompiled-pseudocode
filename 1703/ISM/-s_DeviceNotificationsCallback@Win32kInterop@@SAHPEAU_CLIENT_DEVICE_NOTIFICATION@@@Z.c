/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z @ 0x18000B40C (-ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z.c)
 *     ?ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNotification@@@Z @ 0x18000B79C (-ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNot.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x18000B8B4 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18000BB34 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18000BC44 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x18000C090 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 */

__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1, __int64 a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int *v9; // rsi
  unsigned __int64 i; // rdi

  v3 = (_DWORD *)*((unsigned int *)a1 + 1);
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)((_DWORD)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v5 )
      {
        v6 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v6 )
        {
          v7 = (unsigned int)(v6 - 1);
          if ( (_DWORD)v7 )
          {
            v8 = (unsigned int)(v7 - 1);
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                v9 = (int *)*((_QWORD *)a1 + 2);
                for ( i = (unsigned __int64)*((unsigned int *)a1 + 2) >> 3; i; --i )
                {
                  Win32kInterop::ProcessPnpNotification((_DWORD *)v8, *(_DWORD *)a1, v9);
                  v9 += 2;
                }
              }
            }
            else
            {
              Win32kInterop::ProcessCursorPosMessage(v8, a2, (unsigned int *)a1 + 2);
            }
          }
          else
          {
            Win32kInterop::ProcessRawInputMessage(v7, *(_DWORD *)a1, (_DWORD *)a1 + 2);
          }
        }
        else
        {
          Win32kInterop::ProcessInterceptMessage(v6, *(_DWORD *)a1, (__int64)a1 + 8);
        }
      }
      else
      {
        Win32kInterop::ProcessInputMessage(v5, *(_DWORD *)a1, (__int64)a1 + 8);
      }
    }
    else
    {
      Win32kInterop::ProcessRawInputReport(v4, *(_DWORD *)a1, (__int64)a1 + 8);
    }
  }
  else
  {
    Win32kInterop::ProcessPnpNotification(v3, *(_DWORD *)a1, (int *)a1 + 2);
  }
  return 1LL;
}
