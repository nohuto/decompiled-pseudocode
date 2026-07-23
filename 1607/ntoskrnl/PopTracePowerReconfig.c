/*
 * XREFs of PopTracePowerReconfig @ 0x14020983C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopTracePowerReconfig()
{
  unsigned __int8 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-59h] BYREF
  int v3; // [rsp+34h] [rbp-55h] BYREF
  int v4; // [rsp+38h] [rbp-51h] BYREF
  int v5; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v6; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v7[2]; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  int *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  int *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  v7[0] = MEMORY[0xFFFFF78000000014];
  v7[1] = MEMORY[0xFFFFF78000000018];
  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v2 = dword_1403035B4;
      v3 = xmmword_140303604;
      v5 = v0;
      v6 = dword_140303728;
      v9 = v7;
      v11 = &v2;
      v13 = &v3;
      v15 = &v4;
      v17 = &v5;
      v19 = &v6;
      v4 = v1;
      v10 = 8LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      TlgWrite(&hProvider, &unk_14027D27C, 0LL, 0LL, 8u, &pData);
    }
  }
}
