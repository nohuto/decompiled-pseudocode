/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C0225EF0
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C021A2F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C0091770 (-BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z.c)
 *     UpdateTPCurrentActiveState @ 0x1C00E3404 (UpdateTPCurrentActiveState.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225B4C (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
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
  dword_1C03206EC = DWORD2(gTouchPadParameters);
  dword_1C032075C = qword_1C03281F0;
  if ( a1[2] <= 4u )
  {
    dword_1C03206EC = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v2 = a1[4];
  if ( (unsigned int)(v2 - 1) <= 0x13 )
    dword_1C032075C = v2;
  dword_1C03206FC = -__CFSHR__(a1[3], 3);
  dword_1C032070C = -__CFSHR__(a1[3], 4);
  dword_1C032071C = -__CFSHR__(a1[3], 8);
  dword_1C032072C = -__CFSHR__(a1[3], 9);
  dword_1C032073C = -__CFSHR__(a1[3], 10);
  dword_1C032074C = -__CFSHR__(a1[3], 11);
  dword_1C032076C = -(a1[5] & 1);
  dword_1C032077C = -__CFSHR__(a1[5], 2);
  dword_1C032078C = -__CFSHR__(a1[5], 3);
  dword_1C032079C = -__CFSHR__(a1[5], 7);
  dword_1C03207AC = -__CFSHR__(a1[5], 8);
  v3 = WriteSettingValues(
         (const unsigned __int16 **)&gaTouchPadSettings,
         0x7Au,
         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
         0xDu);
  if ( v3 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    v4 = (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4 ^ HIDWORD(gTouchPadParameters);
    HIDWORD(gTouchPadParameters) = v4;
    v5 = a1[4];
    if ( (_DWORD)qword_1C03281F0 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      LODWORD(qword_1C03281F0) = a1[4];
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
    HIDWORD(gTouchPadParameters) = (v4 ^ a1[3]) & 0x80 ^ v4;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    HIDWORD(qword_1C03281F0) ^= (a1[5] ^ HIDWORD(qword_1C03281F0)) & 1;
    HIDWORD(qword_1C03281F0) ^= (a1[5] ^ HIDWORD(qword_1C03281F0)) & 2;
    HIDWORD(qword_1C03281F0) ^= (a1[5] ^ HIDWORD(qword_1C03281F0)) & 4;
    HIDWORD(qword_1C03281F0) ^= (a1[5] ^ HIDWORD(qword_1C03281F0)) & 0x40;
    HIDWORD(qword_1C03281F0) ^= (a1[5] ^ HIDWORD(qword_1C03281F0)) & 0x80;
  }
  UpdateTPCurrentActiveState();
  return v3;
}
