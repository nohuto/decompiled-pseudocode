/*
 * XREFs of _TelemPTPConfigUpdateEx @ 0x1C01C9584
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 *     EnablePTPDevices @ 0x1C01C90F4 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C021A2F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetHidVidPidStrings @ 0x1C00E5F34 (GetHidVidPidStrings.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetTelemDeviceData @ 0x1C01C9258 (GetTelemDeviceData.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C021E994 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 */

void __fastcall TelemPTPConfigUpdateEx(
        int a1,
        int a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  char v8; // si
  char v9; // di
  int v10; // ebx
  int TelemDeviceData; // eax
  struct tagRECT v12; // xmm1
  unsigned int v13; // [rsp+50h] [rbp-91h] BYREF
  int v14; // [rsp+58h] [rbp-89h] BYREF
  int v15; // [rsp+60h] [rbp-81h] BYREF
  int v16; // [rsp+68h] [rbp-79h] BYREF
  struct tagRECT v17; // [rsp+70h] [rbp-71h] BYREF
  struct tagRECT v18; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v19[8]; // [rsp+90h] [rbp-51h] BYREF
  WCHAR pwsz; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v21; // [rsp+B2h] [rbp-2Fh]
  int v22; // [rsp+BAh] [rbp-27h]
  __int16 v23; // [rsp+BEh] [rbp-23h]
  unsigned __int16 v24; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v25; // [rsp+C2h] [rbp-1Fh]
  int v26; // [rsp+CAh] [rbp-17h]
  __int16 v27; // [rsp+CEh] [rbp-13h]

  v25 = 0LL;
  v7 = a1;
  v26 = 0;
  v8 = a4;
  v27 = 0;
  v9 = a3;
  v21 = 0LL;
  v10 = a2;
  v22 = 0;
  v23 = 0;
  v13 = a1;
  v16 = a4;
  v19[1] = -__CFSHR__(HIDWORD(gTouchPadParameters), 3);
  v14 = a2;
  v15 = a3;
  v19[2] = -__CFSHR__(HIDWORD(gTouchPadParameters), 4);
  v19[0] = gPTPEnabled;
  v19[3] = DWORD2(gTouchPadParameters);
  v19[4] = -__CFSHR__(HIDWORD(gTouchPadParameters), 10);
  v24 = 0;
  pwsz = 0;
  v19[5] = -__CFSHR__(HIDWORD(qword_1C03281F0), 3);
  v19[6] = -__CFSHR__(HIDWORD(qword_1C03281F0), 5);
  v19[7] = qword_1C03281F0;
  if ( !a7 )
  {
    TelemDeviceData = GetTelemDeviceData(&v24, &pwsz, &v15, &v16, (int *)&v13, &v14, a5, a6);
    v7 = v13;
    v10 = v14;
    v9 = v15;
    v8 = v16;
    goto LABEL_7;
  }
  v18.left = 0x100000;
  *(_QWORD *)&v18.right = &v24;
  *(_QWORD *)&v17.right = &pwsz;
  v17.left = 0x100000;
  if ( !*(_DWORD *)(a7 + 316) )
  {
    TelemDeviceData = 1;
LABEL_7:
    if ( !TelemDeviceData )
      return;
    goto LABEL_8;
  }
  if ( GetHidVidPidStrings(a7, (struct _UNICODE_STRING *)&v18, (struct _UNICODE_STRING *)&v17) < 0 )
    return;
LABEL_8:
  v12 = *a5;
  v18 = *a6;
  v17 = v12;
  TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v19, v7, v10, &v24, &pwsz, v9, v8, &v17, &v18);
}
