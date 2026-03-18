/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C022533C
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0220520 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C00957EC (UpdateTPCurrentActiveState.c)
 *     ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C00FD954 (-BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224F94 (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // edx
  int v5; // ecx
  __int64 v6; // rdi

  if ( !a1 || *a1 )
    return 0LL;
  dword_1C031B93C = DWORD2(gTouchPadParameters);
  dword_1C031B9AC = qword_1C0322020;
  if ( a1[2] <= 4u )
  {
    dword_1C031B93C = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v2 = a1[4];
  if ( (unsigned int)(v2 - 1) <= 0x13 )
    dword_1C031B9AC = v2;
  dword_1C031B94C = -__CFSHR__(a1[3], 3);
  dword_1C031B95C = -__CFSHR__(a1[3], 4);
  dword_1C031B96C = -__CFSHR__(a1[3], 8);
  dword_1C031B97C = -__CFSHR__(a1[3], 9);
  dword_1C031B98C = -__CFSHR__(a1[3], 10);
  dword_1C031B99C = -__CFSHR__(a1[3], 11);
  dword_1C031B9BC = -(a1[5] & 1);
  dword_1C031B9CC = -__CFSHR__(a1[5], 2);
  dword_1C031B9DC = -__CFSHR__(a1[5], 3);
  v3 = WriteSettingValues(
         (const unsigned __int16 **)&gaTouchPadSettings,
         0x7Au,
         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
         0xBu);
  if ( v3 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    v4 = (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4 ^ HIDWORD(gTouchPadParameters);
    HIDWORD(gTouchPadParameters) = v4;
    v5 = a1[4];
    if ( (_DWORD)qword_1C0322020 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      LODWORD(qword_1C0322020) = a1[4];
      v6 = *(_QWORD *)(gpDispInfo + 96LL);
      if ( v6 )
      {
        do
        {
          BuildTouchpadAccelerationCurve((struct tagMONITOR *)v6);
          v6 = *(_QWORD *)(v6 + 16);
        }
        while ( v6 );
        v4 = HIDWORD(gTouchPadParameters);
      }
    }
    HIDWORD(gTouchPadParameters) = ((unsigned __int8)v4 ^ (unsigned __int8)a1[3]) & 0x80 ^ v4;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    HIDWORD(qword_1C0322020) ^= (a1[5] ^ HIDWORD(qword_1C0322020)) & 1;
    HIDWORD(qword_1C0322020) ^= (a1[5] ^ HIDWORD(qword_1C0322020)) & 2;
    HIDWORD(qword_1C0322020) ^= (a1[5] ^ HIDWORD(qword_1C0322020)) & 4;
  }
  UpdateTPCurrentActiveState();
  return v3;
}
