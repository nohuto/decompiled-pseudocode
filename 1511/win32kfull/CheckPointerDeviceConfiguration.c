/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0098070
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0098878 (_GetPrecisionTouchPadConfiguration.c)
 *     IsLegacyTouchPad @ 0x1C0098A64 (IsLegacyTouchPad.c)
 *     AccessPTPEnabledStatus @ 0x1C0110FA8 (AccessPTPEnabledStatus.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01C3C84 (ReadTiltCalibrationData.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01D1964 (_TelemPTPConfigUpdateEx.c)
 *     RevokeConfigurationChange @ 0x1C01D5620 (RevokeConfigurationChange.c)
 */

void CheckPointerDeviceConfiguration()
{
  struct DEVICEINFO *v0; // rsi
  struct DEVICEINFO *v1; // rbp
  char v2; // r15
  char v3; // r12
  unsigned int v4; // r14d
  int v5; // edi
  struct DEVICEINFO *v6; // rbx
  int v7; // r8d
  char v8; // dl
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  v12 = 1;
  GetPrecisionTouchPadConfiguration(0LL);
  if ( (unsigned int)GetDWORDSettingValues(
                       (struct tagDEVICECONFIG_SETTING *)&gTouchPadThresholdSettings,
                       0x7Au,
                       L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                       1u)
    && (unsigned int)(dword_1C031B92C - 50) <= 0x60E )
  {
    dword_1C0321F30 = dword_1C031B92C;
  }
  AccessPTPEnabledStatus(0LL, 1LL, &v12);
  gPTPEnabled = v12;
  EnterDeviceInfoListCrit_();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v6 = gpRimDevBackedDeviceInfoList;
  else
    v6 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v6 )
  {
    v7 = 3;
    while ( 1 )
    {
      v8 = *((_BYTE *)v6 + 48);
      if ( v8 == (_BYTE)v7
        && ((*((_WORD *)v6 + 32) & 0x100) != 0 || (*((_DWORD *)v6 + 44) & 0x400) != 0)
        && !gPTPEnabled )
      {
        if ( LODWORD(aDeviceTemplate[154]) )
          RIMRevokeConfigurationChange(v6, 87LL);
        else
          RevokeConfigurationChange(v6);
      }
      else
      {
        if ( !*((_DWORD *)v6 + 77) )
        {
          if ( !v8 )
          {
            if ( *((_WORD *)v6 + 338) )
            {
              if ( (unsigned int)IsLegacyTouchPad(v6) && !v1 )
                v1 = v6;
            }
            else
            {
              v2 = 1;
            }
          }
          goto LABEL_11;
        }
        v9 = *((_QWORD *)v6 + 52);
        if ( !*(_QWORD *)(v9 + 320) )
        {
          if ( !v0 && *(_DWORD *)(v9 + 24) == 8 )
          {
            v10 = *(_DWORD *)(v9 + 1560);
            if ( v10 == 1 )
            {
              v4 = 1;
            }
            else if ( v10 == 2 )
            {
              v4 = 2;
            }
            else if ( v10 == v7 )
            {
              v4 = v7;
            }
            v0 = v6;
          }
          else if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)v6 + 52) + 24LL) - 1) <= 4 )
          {
            v3 = 1;
          }
          goto LABEL_11;
        }
        v11 = *(_OWORD *)((char *)v6 + 200);
        ReadTiltCalibrationData(v9, &v11);
      }
      v7 = 3;
LABEL_11:
      v6 = (struct DEVICEINFO *)*((_QWORD *)v6 + 7);
      if ( !v6 )
      {
        if ( v0 )
        {
          v5 = 0;
        }
        else
        {
          if ( !v1 )
            break;
          v0 = v1;
        }
        TelemPTPConfigUpdateEx(v4, v5, v2, v3, v0);
        break;
      }
    }
  }
  LeaveDeviceInfoListCrit_();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
}
