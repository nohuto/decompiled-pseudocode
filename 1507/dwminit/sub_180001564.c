/*
 * XREFs of sub_180001564 @ 0x180001564
 * Callers:
 *     sub_1800070FC @ 0x1800070FC (sub_1800070FC.c)
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     sub_180001228 @ 0x180001228 (sub_180001228.c)
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 __fastcall sub_180001564(HMODULE a1, int a2)
{
  DWORD CurrentProcessId; // eax
  GUID v3; // xmm0
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  DWORD dwOptions[2]; // [rsp+28h] [rbp-E0h]
  DWORD hKey; // [rsp+78h] [rbp-90h] BYREF
  GUID hKey_8; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ValueName[5]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t Data[40]; // [rsp+E8h] [rbp-20h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      DisableThreadLibraryCalls(a1);
      EventActivityIdControl(3u, &ActivityId);
      memset(Data, 0, 74);
      if ( (int)sub_180001228(
                  Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  ActivityId.Data1,
                  ActivityId.Data2,
                  ActivityId.Data3,
                  ActivityId.Data4[0],
                  ActivityId.Data4[1],
                  ActivityId.Data4[2],
                  ActivityId.Data4[3],
                  ActivityId.Data4[4],
                  ActivityId.Data4[5],
                  ActivityId.Data4[6],
                  ActivityId.Data4[7]) >= 0 )
      {
        *(_QWORD *)&hKey_8.Data1 = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\DWM",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                (PHKEY)&hKey_8,
                0LL) )
        {
          hKey = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, &hKey) )
          {
            memset(ValueName, 0, 68);
            dwOptions[0] = hKey;
            if ( (int)sub_180001228(
                        (wchar_t *)ValueName,
                        34LL,
                        L"%s_%08X",
                        L"DwmInitSessionActivityId",
                        *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(*(HKEY *)&hKey_8.Data1, 0LL, (LPCWSTR)ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(*(HKEY *)&hKey_8.Data1);
        }
      }
      v3 = (GUID)*((_OWORD *)off_18000C028 - 1);
      qword_18000C048 = 0LL;
      qword_18000C050 = 0LL;
      hKey_8 = v3;
      if ( !EventRegister(&hKey_8, (PENABLECALLBACK)EnableCallback, &dword_18000C020, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_18000C028, *(unsigned __int16 *)off_18000C028);
      if ( (unsigned int)dword_18000C020 > 5
        && (qword_18000C030 & 0x400000000000LL) != 0
        && (qword_18000C038 & 0x400000000000LL) == qword_18000C038 )
      {
        ValueName[2].Ptr = (ULONGLONG)&ActivityId;
        *(_QWORD *)&ValueName[2].Size = 16LL;
        sub_1800010DC(
          (__int64)&dword_18000C020,
          (unsigned __int8 *)dword_1800097C8,
          0x400000000000LL,
          v4,
          3u,
          ValueName);
      }
      if ( byte_18000C078 )
      {
        if ( qword_18000C070 )
        {
          sub_180001310((_DWORD *)qword_18000C070);
          v5 = qword_18000C070;
          if ( qword_18000C070 )
          {
            *(_QWORD *)(qword_18000C070 + 8) = 0LL;
            *(_QWORD *)(v5 + 16) = 0LL;
          }
        }
        byte_18000C078 = 0;
      }
      qword_18000C088 = 0xA00000000LL;
    }
  }
  else
  {
    if ( qword_18000C070 )
    {
      sub_180001310((_DWORD *)qword_18000C070);
      v6 = qword_18000C070;
      if ( qword_18000C070 )
      {
        *(_QWORD *)(qword_18000C070 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
      }
    }
    byte_18000C078 = 0;
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18000C020 = 0;
  }
  return 1LL;
}
