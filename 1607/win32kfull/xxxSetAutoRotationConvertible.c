/*
 * XREFs of xxxSetAutoRotationConvertible @ 0x1C0154F84
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxRefreshDisplayOrientation @ 0x1C0154E80 (xxxRefreshDisplayOrientation.c)
 * Callees:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01CA400 (xxxRestoreSlateAutorotationPreferences.c)
 */

void __fastcall xxxSetAutoRotationConvertible(int a1)
{
  const GUID *v1; // r9
  const GUID *v2; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v4; // [rsp+50h] [rbp-38h]
  int v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+5Ch] [rbp-2Ch]
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]
  int v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  LODWORD(v1) = a1;
  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
  {
    v6 = 0;
    v9 = 0;
    v4 = &dword_1C0329474;
    v7 = &v10;
    v5 = 4;
    v8 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE269, v2, v1, 4u, &pData);
    LODWORD(v1) = v10;
  }
  if ( dword_1C0329474 && !(_DWORD)v1 && !dword_1C0329470 )
  {
    xxxRestoreSlateAutorotationPreferences();
    LODWORD(v1) = v10;
  }
  dword_1C0329474 = (int)v1;
  if ( (_DWORD)v1 )
    xxxApplyNativeOrientation();
  else
    xxxApplyOrientationPreference();
}
