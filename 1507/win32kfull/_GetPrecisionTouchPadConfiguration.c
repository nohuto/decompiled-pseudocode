/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C0039AF0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C00399F0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsLegacyTouchPad @ 0x1C0039CDC (IsLegacyTouchPad.c)
 *     UpdateTPCurrentActiveState @ 0x1C0039CF4 (UpdateTPCurrentActiveState.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  struct DEVICEINFO *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  if ( !gTouchPadMonitor )
  {
    if ( (unsigned int)GetDWORDSettingValues(
                         off_1C031B058,
                         0x7Au,
                         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
                         0xBu) )
    {
      v2 = HIDWORD(gTouchPadParameters);
      if ( *((_DWORD *)off_1C031B058 + 7) )
      {
        v2 = HIDWORD(gTouchPadParameters) | 4;
        HIDWORD(gTouchPadParameters) |= 4u;
      }
      if ( *((_DWORD *)off_1C031B058 + 11) )
      {
        v2 |= 8u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C031B058 + 3) <= 4u )
        DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C031B058 + 3);
      if ( (unsigned int)(*((_DWORD *)off_1C031B058 + 31) - 1) <= 0x13 )
        LODWORD(qword_1C0323098) = *((_DWORD *)off_1C031B058 + 31);
      if ( *((_DWORD *)off_1C031B058 + 15) )
      {
        v2 |= 0x80u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( *((_DWORD *)off_1C031B058 + 19) )
      {
        v2 |= 0x100u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      v10 = HIDWORD(qword_1C0323098);
      if ( !*((_DWORD *)off_1C031B058 + 35) )
      {
        v10 = HIDWORD(qword_1C0323098) & 0xFFFFFFFE;
        HIDWORD(qword_1C0323098) &= ~1u;
      }
      if ( !*((_DWORD *)off_1C031B058 + 39) )
      {
        v10 &= ~2u;
        HIDWORD(qword_1C0323098) = v10;
      }
      if ( !*((_DWORD *)off_1C031B058 + 43) )
        HIDWORD(qword_1C0323098) = v10 & 0xFFFFFFFB;
      if ( !*((_DWORD *)off_1C031B058 + 23) )
      {
        v2 &= ~0x200u;
        HIDWORD(gTouchPadParameters) = v2;
      }
      if ( !*((_DWORD *)off_1C031B058 + 27) )
        v2 &= ~0x400u;
      LODWORD(gTouchPadParameters) = 0;
      gTouchPadMonitor = 1;
      goto LABEL_5;
    }
    return 0LL;
  }
  v2 = HIDWORD(gTouchPadParameters);
LABEL_5:
  v3 = v2 & 0xFFFFFFAE;
  HIDWORD(gTouchPadParameters) = v3;
  EnterDeviceInfoListCrit_(v3);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( aDeviceTemplate[308] )
    v4 = gpRimDevBackedDeviceInfoList;
  else
    v4 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v4 )
  {
    v5 = HIDWORD(qword_1C0323098);
    v6 = HIDWORD(gTouchPadParameters);
    do
    {
      if ( (v6 & 0x10) != 0 && (v6 & 0x40) != 0 )
        break;
      if ( (unsigned int)IsLegacyTouchPad(v4, v6, v5) )
      {
        v6 = (unsigned int)v6 | 0x10;
        HIDWORD(gTouchPadParameters) = v6;
      }
      else if ( *(_DWORD *)(v7 + 316) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 416) + 24LL) == 8 )
        {
          v6 = (unsigned int)v6 | 0x40;
          HIDWORD(gTouchPadParameters) = v6;
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 416) + 704LL) >= 5u )
          {
            v5 = (unsigned int)v5 | 0x20;
            HIDWORD(qword_1C0323098) = v5;
          }
        }
      }
      v4 = *(struct DEVICEINFO **)(v7 + 56);
    }
    while ( v4 );
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  LeaveDeviceInfoListCrit_(v8);
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C0323098;
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
