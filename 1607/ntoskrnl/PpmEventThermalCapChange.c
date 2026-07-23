/*
 * XREFs of PpmEventThermalCapChange @ 0x14020C728
 * Callers:
 *     PpmRegisterPerfCap @ 0x140204E54 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x14020B15C (PpmFireWmiEvent.c)
 */

char __fastcall PpmEventThermalCapChange(__int64 a1, int a2)
{
  char result; // al
  REGHANDLE v4; // rdi
  __int16 v5; // ax
  __int16 v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  int *v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h]
  int v10; // [rsp+4Ch] [rbp+3h]
  int v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 v12; // [rsp+58h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+17h] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v12 = *(_QWORD *)(a1 + 1608);
  v7 = a2;
  v11 = a2;
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = &v11;
    v9 = 16;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4662, 4200450);
  }
  result = WmiThermalEventEnabled;
  if ( WmiThermalEventEnabled )
    result = PpmFireWmiEvent(a1 + 24032, (__int128 *)&PPM_THERMALCONSTRAINT_GUID, 0x10u, &v11);
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_THERMAL_CAP_CHANGE);
    if ( result )
    {
      v5 = *(unsigned __int8 *)(a1 + 1616);
      UserData.Reserved = 0;
      v16 = 0;
      v19 = 0;
      v6 = v5;
      UserData.Ptr = (ULONGLONG)&v6;
      v14 = a1 + 1617;
      v17 = &v7;
      UserData.Size = 2;
      v15 = 1;
      v18 = 4;
      return EtwWrite(v4, &PPM_ETW_THERMAL_CAP_CHANGE, 0LL, 3u, &UserData);
    }
  }
  return result;
}
