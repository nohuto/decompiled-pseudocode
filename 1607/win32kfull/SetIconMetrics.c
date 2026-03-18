/*
 * XREFs of SetIconMetrics @ 0x1C00B9BDC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00BC2F0 (xxxInitWindowStation.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01CD718 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00B9B2C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?MetricGetIDLocalized@@YAHIH@Z @ 0x1C00B9DF0 (-MetricGetIDLocalized@@YAHIH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  unsigned int *v2; // rbx
  int DeviceCaps; // eax
  int v5; // eax
  __int64 v6; // rdx
  signed int v7; // r8d
  int v9; // [rsp+30h] [rbp-98h]
  char v10; // [rsp+40h] [rbp-88h] BYREF
  int v11; // [rsp+44h] [rbp-84h]
  int v12; // [rsp+48h] [rbp-80h]
  int v13; // [rsp+4Ch] [rbp-7Ch]

  v2 = (unsigned int *)a2;
  if ( !(unsigned int)SetIconFonts(a1, a2) )
    return 0LL;
  if ( !v2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL);
    v13 = v9;
    DeviceCaps = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 32LL), 88LL);
    MetricGetIDLocalized(0x71u, 75 * DeviceCaps / 96);
    FastGetProfileIntFromID(a1, 23LL, 64LL);
    v11 = v9;
    v5 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 32LL), 90LL);
    MetricGetIDLocalized(0x72u, 75 * v5 / 96);
    FastGetProfileIntFromID(a1, 23LL, 65LL);
    v2 = (unsigned int *)&v10;
    v12 = v9;
  }
  v6 = *(unsigned int *)(gpsi + 1924LL);
  if ( (int)v2[1] > (int)v6 )
    v6 = v2[1];
  v2[1] = v6;
  v7 = *(_DWORD *)(gpsi + 1928LL);
  if ( (int)v2[2] > v7 )
    v7 = v2[2];
  v2[2] = v7;
  SetDpiDepSysMet(38LL, v6);
  SetDpiDepSysMet(39LL, v2[2]);
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2032LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2424LL) = EngMulDiv(*(_DWORD *)(gpsi + 2036LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  if ( v2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
