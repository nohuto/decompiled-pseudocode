/*
 * XREFs of UpdatePointerDevices @ 0x1C0111510
 * Callers:
 *     <none>
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01CBFE0 (FindMonitorForDigitizerWithQDCData.c)
 *     GetQDCActivePathsData @ 0x1C01CD86C (GetQDCActivePathsData.c)
 */

__int64 __fastcall UpdatePointerDevices(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  int QDCActivePathsData; // eax
  _BYTE *v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    RIMOnMonitorNotification();
  }
  else
  {
    EnterDeviceInfoListCrit_(a1);
    v4 = gpDeviceInfoList;
    if ( gpDeviceInfoList )
    {
      v5 = gpDispInfo;
      do
      {
        if ( *(_DWORD *)(v4 + 308) )
        {
          v6 = *(_QWORD *)(v4 + 416);
          if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 7) <= 1 )
          {
            *(_OWORD *)(*(_QWORD *)(v6 + 280) + 44LL) = *(_OWORD *)(*(_QWORD *)v5 + 120LL);
            *(_OWORD *)(*(_QWORD *)(v6 + 280) + 60LL) = *(_OWORD *)(*(_QWORD *)v5 + 136LL);
            v3 = *(_QWORD *)(v6 + 280);
            *(_OWORD *)(v3 + 28) = *(_OWORD *)(*(_QWORD *)v5 + 104LL);
            *(_OWORD *)(v6 + 124) = *(_OWORD *)(*(_QWORD *)(v6 + 280) + 28LL);
          }
          else if ( (*(_BYTE *)(v4 + 64) & 0x40) == 0 )
          {
            if ( !v1 )
            {
              QDCActivePathsData = GetQDCActivePathsData(v9, v5);
              v8 = v9;
              if ( QDCActivePathsData < 0 )
                v8 = 0LL;
              v1 = v8;
            }
            FindMonitorForDigitizerWithQDCData((struct tagHID_POINTER_DEVICE_INFO *)v6);
            v5 = gpDispInfo;
          }
        }
        v4 = *(_QWORD *)(v4 + 56);
      }
      while ( v4 );
    }
    LeaveDeviceInfoListCrit_(v3);
  }
  return FreeQDCActivePathsData(v1);
}
