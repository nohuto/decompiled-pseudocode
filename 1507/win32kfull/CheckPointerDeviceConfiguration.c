/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0145214
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0039AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     IsLegacyTouchPad @ 0x1C0039CDC (IsLegacyTouchPad.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     AccessPTPEnabledStatus @ 0x1C01461D0 (AccessPTPEnabledStatus.c)
 *     ReadTiltCalibrationData @ 0x1C01C20C4 (ReadTiltCalibrationData.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01CFD04 (_TelemPTPConfigUpdateEx.c)
 *     RevokeConfigurationChange @ 0x1C01D3AFC (RevokeConfigurationChange.c)
 */

void CheckPointerDeviceConfiguration()
{
  struct DEVICEINFO *v0; // rdi
  struct DEVICEINFO *v1; // rbp
  char v2; // r14
  char v3; // r15
  unsigned int v4; // esi
  int v5; // r12d
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DEVICEINFO *v8; // rbx
  int v9; // r8d
  char v10; // dl
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v13 = 1;
  GetPrecisionTouchPadConfiguration(0LL);
  if ( (unsigned int)GetDWORDSettingValues(
                       (struct tagDEVICECONFIG_SETTING *)&gTouchPadThresholdSettings,
                       0x7Au,
                       L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                       1u)
    && (unsigned int)(dword_1C031EEAC - 50) <= 0x60E )
  {
    dword_1C03236D0 = dword_1C031EEAC;
  }
  AccessPTPEnabledStatus(0LL, 1LL, &v13);
  gPTPEnabled = v13;
  EnterDeviceInfoListCrit_(v6);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v13, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v8 = gpRimDevBackedDeviceInfoList;
  else
    v8 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v8 )
  {
    v9 = 3;
    while ( 1 )
    {
      v10 = *((_BYTE *)v8 + 48);
      if ( v10 == (_BYTE)v9
        && ((v7 = 256LL, (*((_WORD *)v8 + 32) & 0x100) != 0) || (*((_DWORD *)v8 + 46) & 0x400) != 0)
        && !gPTPEnabled )
      {
        if ( LODWORD(aDeviceTemplate[154]) )
          RIMRevokeConfigurationChange(v8, 87LL);
        else
          RevokeConfigurationChange(v8);
      }
      else
      {
        if ( !*((_DWORD *)v8 + 79) )
        {
          if ( !v10 )
          {
            if ( *((_WORD *)v8 + 338) )
            {
              if ( (unsigned int)IsLegacyTouchPad((__int64)v8) && !v1 )
              {
                v5 = 1;
                v1 = v8;
              }
            }
            else
            {
              v2 = 1;
            }
          }
          goto LABEL_11;
        }
        v7 = *((_QWORD *)v8 + 52);
        if ( !*(_QWORD *)(v7 + 304) )
        {
          if ( !v0 && *(_DWORD *)(v7 + 24) == 8 )
          {
            v11 = *(_DWORD *)(v7 + 1544);
            if ( v11 == 1 )
            {
              v4 = 1;
            }
            else if ( v11 == 2 )
            {
              v4 = 2;
            }
            else if ( v11 == v9 )
            {
              v4 = v9;
            }
            v0 = v8;
          }
          else
          {
            v7 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 52) + 24LL) - 1);
            if ( (unsigned int)v7 <= 4 )
              v3 = 1;
          }
          goto LABEL_11;
        }
        v12 = *((_OWORD *)v8 + 13);
        ReadTiltCalibrationData(v7, &v12);
      }
      v9 = 3;
LABEL_11:
      v8 = (struct DEVICEINFO *)*((_QWORD *)v8 + 7);
      if ( !v8 )
      {
        if ( !v0 )
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
  LeaveDeviceInfoListCrit_(v7);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
}
