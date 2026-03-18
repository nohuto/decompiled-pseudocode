/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C000D650 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 *     UpdateTPCurrentActiveState @ 0x1C00E3404 (UpdateTPCurrentActiveState.c)
 *     IsLegacyTouchPad @ 0x1C00E4CD0 (IsLegacyTouchPad.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rcx
  struct DEVICEINFO *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  if ( !gTouchPadMonitor )
  {
    if ( (unsigned int)GetDWORDSettingValuesEx(
                         off_1C03200B8,
                         0x7Au,
                         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                         0xDu,
                         1) )
    {
      v2 = HIDWORD(gTouchPadParameters);
      if ( *((_DWORD *)off_1C03200B8 + 7) )
      {
        v2 = HIDWORD(gTouchPadParameters) | 4;
        HIDWORD(gTouchPadParameters) |= 4u;
      }
      if ( *((_DWORD *)off_1C03200B8 + 11) )
      {
        v2 |= 8u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C03200B8 + 3) <= 4u )
        DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C03200B8 + 3);
      if ( (unsigned int)(*((_DWORD *)off_1C03200B8 + 31) - 1) <= 0x13 )
        LODWORD(qword_1C03281F0) = *((_DWORD *)off_1C03200B8 + 31);
      if ( *((_DWORD *)off_1C03200B8 + 15) )
      {
        v2 |= 0x80u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C03200B8 + 19) )
      {
        v2 |= 0x100u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      v3 = HIDWORD(qword_1C03281F0);
      if ( *((_DWORD *)off_1C03200B8 + 51) )
      {
        v3 = HIDWORD(qword_1C03281F0) | 0x80;
        HIDWORD(qword_1C03281F0) |= 0x80u;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 35) )
      {
        v3 &= ~1u;
        HIDWORD(qword_1C03281F0) = v3;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 39) )
      {
        v3 &= ~2u;
        HIDWORD(qword_1C03281F0) = v3;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 43) )
      {
        v3 &= ~4u;
        HIDWORD(qword_1C03281F0) = v3;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 23) )
      {
        v2 &= ~0x200u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 27) )
      {
        v2 &= ~0x400u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( !*((_DWORD *)off_1C03200B8 + 47) )
        HIDWORD(qword_1C03281F0) = v3 & 0xFFFFFFBF;
      LODWORD(gTouchPadParameters) = 0;
      gTouchPadMonitor = 1;
      goto LABEL_32;
    }
    return 0LL;
  }
  v2 = HIDWORD(gTouchPadParameters);
LABEL_32:
  v4 = v2 & 0xFFFFFFAE;
  HIDWORD(gTouchPadParameters) = v4;
  EnterDeviceInfoListCrit_(v4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v5 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    v6 = HIDWORD(qword_1C03281F0);
    v7 = HIDWORD(gTouchPadParameters);
    do
    {
      if ( (v7 & 0x10) != 0 && (v7 & 0x40) != 0 )
        break;
      if ( (unsigned int)IsLegacyTouchPad(v5, v7, v6) )
      {
        v7 = (unsigned int)v7 | 0x10;
        HIDWORD(gTouchPadParameters) = v7;
      }
      else if ( *(_DWORD *)(v8 + 316) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v8 + 480) + 24LL) == 7 )
        {
          v7 = (unsigned int)v7 | 0x40;
          HIDWORD(gTouchPadParameters) = v7;
          if ( *(_DWORD *)(*(_QWORD *)(v8 + 480) + 688LL) >= 5u )
          {
            v6 = (unsigned int)v6 | 0x20;
            HIDWORD(qword_1C03281F0) = v6;
          }
        }
      }
      v5 = *(struct DEVICEINFO **)(v8 + 56);
    }
    while ( v5 );
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
  LeaveDeviceInfoListCrit_(v10, v9);
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C03281F0;
    if ( DWORD2(gTouchPadParameters) == 4
      && (BYTE12(gTouchPadParameters) & 0x10) != 0
      && (BYTE12(gTouchPadParameters) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 8) = 3;
    }
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
