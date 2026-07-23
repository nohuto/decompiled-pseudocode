/*
 * XREFs of PfSnLogOpenVolumesForPrefetch @ 0x1404D869C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogOpenVolumesForPrefetch(__int64 a1, char a2)
{
  REGHANDLE v2; // rdi
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v5; // rax
  __int16 v6; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v8; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+5Ch] [rbp+23h]
  __int64 v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  __int64 v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]

  if ( a1 )
  {
    v2 = RegHandle;
    v3 = (const EVENT_DESCRIPTOR *)&PfSnEvt_OpenVolumes_Start;
    if ( !a2 )
      v3 = &PfSnEvt_OpenVolumes_Stop;
    if ( RegHandle && EtwEventEnabled(RegHandle, v3) )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(a1 + 16 + 2 * v5) );
      v6 = v5;
      UserData.Ptr = (ULONGLONG)&v6;
      v9 = 2 * (unsigned __int16)v5;
      v8 = a1 + 16;
      v11 = a1 + 76;
      *(_QWORD *)&UserData.Size = 2LL;
      v13 = a1 + 80;
      v10 = 0;
      v12 = 4LL;
      v14 = 4LL;
      EtwWrite(v2, v3, 0LL, 4u, &UserData);
    }
  }
}
