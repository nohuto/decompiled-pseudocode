/*
 * XREFs of ?DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DDC00
 * Callers:
 *     <none>
 * Callees:
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 */

__int64 __fastcall DeviceClassNotify(char *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebp
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = (unsigned int)Context;
  if ( !gProtocolType
    && *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    v4 = 1;
    EnterCrit(1LL);
    EnterDeviceInfoListCrit_(v5);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)(i + 208), 0) )
      {
        if ( *(char *)(i + 66) >= 0 )
        {
          if ( (*(_BYTE *)(i + 340) & 1) != 0 )
            v4 = 0;
        }
        else
        {
          FreeDeviceInfo(i);
        }
        break;
      }
    }
    LeaveDeviceInfoListCrit_(v6);
    UserSessionSwitchLeaveCrit(v9, v8);
    if ( v4 )
    {
      EnterCrit(1LL);
      LOBYTE(v10) = 32;
      CreateDeviceInfo(v2, *((_QWORD *)NotificationStructure + 5), v10);
      UserSessionSwitchLeaveCrit(v12, v11);
    }
  }
  return 0LL;
}
