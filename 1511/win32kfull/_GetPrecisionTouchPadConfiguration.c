/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C0098878
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C000BB60 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UpdateTPCurrentActiveState @ 0x1C00957EC (UpdateTPCurrentActiveState.c)
 *     IsLegacyTouchPad @ 0x1C0098A64 (IsLegacyTouchPad.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  int v2; // ecx
  struct DEVICEINFO *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  unsigned int v8; // eax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  if ( !gTouchPadMonitor )
  {
    if ( (unsigned int)GetDWORDSettingValues(
                         off_1C031B178,
                         0x7Au,
                         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                         0xBu) )
    {
      v2 = HIDWORD(gTouchPadParameters);
      if ( *((_DWORD *)off_1C031B178 + 7) )
      {
        v2 = HIDWORD(gTouchPadParameters) | 4;
        HIDWORD(gTouchPadParameters) |= 4u;
      }
      if ( *((_DWORD *)off_1C031B178 + 11) )
      {
        v2 |= 8u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C031B178 + 3) <= 4u )
        DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C031B178 + 3);
      if ( (unsigned int)(*((_DWORD *)off_1C031B178 + 31) - 1) <= 0x13 )
        LODWORD(qword_1C0322020) = *((_DWORD *)off_1C031B178 + 31);
      if ( *((_DWORD *)off_1C031B178 + 15) )
      {
        v2 |= 0x80u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C031B178 + 19) )
      {
        v2 |= 0x100u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      v8 = HIDWORD(qword_1C0322020);
      if ( !*((_DWORD *)off_1C031B178 + 35) )
      {
        v8 = HIDWORD(qword_1C0322020) & 0xFFFFFFFE;
        HIDWORD(qword_1C0322020) &= ~1u;
      }
      if ( !*((_DWORD *)off_1C031B178 + 39) )
      {
        v8 &= ~2u;
        HIDWORD(qword_1C0322020) = v8;
      }
      if ( !*((_DWORD *)off_1C031B178 + 43) )
        HIDWORD(qword_1C0322020) = v8 & 0xFFFFFFFB;
      if ( !*((_DWORD *)off_1C031B178 + 23) )
      {
        v2 &= ~0x200u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( !*((_DWORD *)off_1C031B178 + 27) )
        v2 &= ~0x400u;
      LODWORD(gTouchPadParameters) = 0;
      gTouchPadMonitor = 1;
      goto LABEL_5;
    }
    return 0LL;
  }
  v2 = HIDWORD(gTouchPadParameters);
LABEL_5:
  HIDWORD(gTouchPadParameters) = v2 & 0xFFFFFFAE;
  EnterDeviceInfoListCrit_();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v3 = gpRimDevBackedDeviceInfoList;
  else
    v3 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v3 )
  {
    LOBYTE(v4) = BYTE12(gTouchPadParameters);
    do
    {
      if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 )
        break;
      if ( (unsigned int)IsLegacyTouchPad(v3) )
      {
        v4 |= 0x10u;
        HIDWORD(gTouchPadParameters) = v4;
      }
      else if ( *(_DWORD *)(v5 + 308) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 416) + 24LL) == 8 )
        {
          v4 |= 0x40u;
          HIDWORD(gTouchPadParameters) = v4;
          if ( *(_DWORD *)(*(_QWORD *)(v5 + 416) + 720LL) >= 5u )
            HIDWORD(qword_1C0322020) = v6 | 0x20;
        }
      }
      v3 = *(struct DEVICEINFO **)(v5 + 56);
    }
    while ( v3 );
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
  LeaveDeviceInfoListCrit_();
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C0322020;
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
