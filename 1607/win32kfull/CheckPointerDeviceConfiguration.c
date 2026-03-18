/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C00E61F0
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 *     IsLegacyTouchPad @ 0x1C00E4CD0 (IsLegacyTouchPad.c)
 *     GetHidTelemetryData @ 0x1C00E5E08 (GetHidTelemetryData.c)
 *     AccessPTPEnabledStatus @ 0x1C0131F90 (AccessPTPEnabledStatus.c)
 *     ReadTiltCalibrationData @ 0x1C01C3364 (ReadTiltCalibrationData.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01C9584 (_TelemPTPConfigUpdateEx.c)
 */

void CheckPointerDeviceConfiguration()
{
  __int64 v0; // rsi
  struct DEVICEINFO *v1; // r14
  int v2; // edi
  char v3; // r12
  char v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DEVICEINFO *v9; // rbx
  __int64 v10; // r8
  __int128 v11; // xmm6
  char v12; // r9
  __int128 v13; // xmm7
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+B0h] [rbp+30h] BYREF

  v0 = 0LL;
  v16[1] = 0LL;
  v1 = 0LL;
  v17[1] = 0LL;
  v2 = 1;
  v3 = 0;
  v18 = 1;
  v4 = 0;
  v5 = 0;
  GetPrecisionTouchPadConfiguration(0LL);
  if ( (unsigned int)GetDWORDSettingValuesEx(
                       (struct tagDEVICECONFIG_SETTING *)&gTouchPadThresholdSettings,
                       0x7Au,
                       L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                       1u,
                       0)
    && (unsigned int)(dword_1C03206DC - 50) <= 0x60E )
  {
    dword_1C03280F0 = dword_1C03206DC;
  }
  AccessPTPEnabledStatus(0LL, 1LL, &v18);
  gPTPEnabled = v18;
  EnterDeviceInfoListCrit_(v6);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v9 = gpRimDevBackedDeviceInfoList;
  v10 = 0LL;
  if ( gpRimDevBackedDeviceInfoList )
  {
    v11 = *(_OWORD *)v16;
    v12 = 3;
    v13 = *(_OWORD *)v17;
    while ( 1 )
    {
      LOBYTE(v7) = *((_BYTE *)v9 + 48);
      if ( (_BYTE)v7 == v12
        && ((v8 = 256LL, (*((_WORD *)v9 + 32) & 0x100) != 0) || (*((_DWORD *)v9 + 46) & 0x400) != 0)
        && gPTPEnabled == (_DWORD)v10 )
      {
        RIMRevokeConfigurationChange(v9, 87LL);
      }
      else
      {
        if ( !*((_DWORD *)v9 + 79) )
        {
          if ( !(_BYTE)v7 )
          {
            if ( *((_WORD *)v9 + 370) == (_WORD)v10 )
            {
              v3 = 1;
            }
            else if ( (unsigned int)IsLegacyTouchPad((__int64)v9) && !v1 )
            {
              v1 = v9;
            }
          }
          goto LABEL_9;
        }
        v14 = *((_QWORD *)v9 + 60);
        if ( *(_QWORD *)(v14 + 312) == v10 )
        {
          GetHidTelemetryData((__int64)v9);
          v10 = 0LL;
          if ( !v0 && (v8 = *((_QWORD *)v9 + 60), *(_DWORD *)(v8 + 24) == 7) )
          {
            v15 = *(_DWORD *)(v8 + 1520);
            v12 = 3;
            switch ( v15 )
            {
              case 1:
                v5 = 1;
                break;
              case 2:
                v5 = 2;
                break;
              case 3:
                v5 = 3;
                break;
            }
            v11 = *(_OWORD *)(v8 + 172);
            v0 = (__int64)v9;
            v13 = *(_OWORD *)(v8 + 204);
          }
          else
          {
            v12 = 3;
            v8 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 60) + 24LL) - 1);
            if ( (unsigned int)v8 <= 3 )
              v4 = 1;
          }
          goto LABEL_9;
        }
        *(_OWORD *)v17 = *((_OWORD *)v9 + 13);
        ReadTiltCalibrationData(v14, v17);
        GetHidTelemetryData((__int64)v9);
      }
      v10 = 0LL;
      v12 = 3;
LABEL_9:
      v9 = (struct DEVICEINFO *)*((_QWORD *)v9 + 7);
      if ( !v9 )
      {
        if ( v0 )
        {
          v2 = v10;
        }
        else
        {
          if ( !v1 )
            break;
          v0 = (__int64)v1;
        }
        *(_OWORD *)v17 = v13;
        *(_OWORD *)v16 = v11;
        TelemPTPConfigUpdateEx(v5, v2, v3, v4, (__int64)v16, (__int64)v17, v0);
        break;
      }
    }
  }
  LeaveDeviceInfoListCrit_(v8, v7);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v18);
}
