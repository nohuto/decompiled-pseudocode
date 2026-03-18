/*
 * XREFs of _TelemPTPConfigUpdateEx @ 0x1C01CFD04
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     EnablePTPDevices @ 0x1C01CF0F4 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C02206F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetPTPVIDPIDStrings@@YAJPEAUDEVICEINFO@@PEAU_UNICODE_STRING@@1@Z @ 0x1C01CE508 (-GetPTPVIDPIDStrings@@YAJPEAUDEVICEINFO@@PEAU_UNICODE_STRING@@1@Z.c)
 *     GetTelemDeviceData @ 0x1C01CF8CC (GetTelemDeviceData.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z @ 0x1C0224830 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z.c)
 */

void __fastcall TelemPTPConfigUpdateEx(int a1, int a2, int a3, int a4, struct DEVICEINFO *a5)
{
  unsigned int v5; // r14d
  char v6; // si
  char v7; // di
  int v8; // ebx
  int TelemDeviceData; // eax
  int v10; // [rsp+40h] [rbp-61h] BYREF
  int v11; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v12; // [rsp+50h] [rbp-51h] BYREF
  int v13; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-41h] BYREF
  struct _UNICODE_STRING v15; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v16[4]; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int16 v17; // [rsp+90h] [rbp-11h] BYREF
  __int64 v18; // [rsp+92h] [rbp-Fh]
  int v19; // [rsp+9Ah] [rbp-7h]
  __int16 v20; // [rsp+9Eh] [rbp-3h]
  unsigned __int16 v21; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v22; // [rsp+A2h] [rbp+1h]
  int v23; // [rsp+AAh] [rbp+9h]
  __int16 v24; // [rsp+AEh] [rbp+Dh]

  v12 = a1;
  v22 = 0LL;
  v23 = 0;
  v5 = a1;
  v6 = a4;
  v24 = 0;
  v7 = a3;
  v18 = 0LL;
  v8 = a2;
  v19 = 0;
  v20 = 0;
  v10 = a4;
  v16[1] = -__CFSHR__(HIDWORD(gTouchPadParameters), 3);
  v16[0] = gPTPEnabled;
  v13 = a2;
  v11 = a3;
  v21 = 0;
  v17 = 0;
  v16[2] = -__CFSHR__(HIDWORD(gTouchPadParameters), 4);
  v16[3] = DWORD2(gTouchPadParameters);
  if ( !a5 )
  {
    TelemDeviceData = GetTelemDeviceData(&v21, &v17, &v11, &v10, (int *)&v12, &v13);
    v5 = v12;
    v8 = v13;
    v7 = v11;
    v6 = v10;
    goto LABEL_7;
  }
  *(_DWORD *)&v14.Length = 0x100000;
  v14.Buffer = &v21;
  v15.Buffer = &v17;
  *(_DWORD *)&v15.Length = 0x100000;
  if ( !*((_DWORD *)a5 + 79) )
  {
    TelemDeviceData = 1;
LABEL_7:
    if ( !TelemDeviceData )
      return;
    goto LABEL_8;
  }
  if ( GetPTPVIDPIDStrings(a5, &v14, &v15) < 0 )
    return;
LABEL_8:
  TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v16, v5, v8, &v21, &v17, v7, v6);
}
