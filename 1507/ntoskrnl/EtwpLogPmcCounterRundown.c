/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x1406E86D4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

unsigned __int64 __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  const WCHAR *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  _DWORD v11[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v13[21]; // [rsp+48h] [rbp-81h]

  v2 = *(_QWORD *)(a1 + 864);
  result = *(unsigned int *)(v2 + 28);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v11[0] = *(_DWORD *)(v2 + 28);
    v6 = v11[0];
    v12 = v11;
    v13[0] = 4LL;
    if ( v11[0] )
    {
      do
      {
        v11[1] = 0;
        LODWORD(v13[3 * v5 + 9]) = *(_DWORD *)(v2 + 4LL * v5);
        if ( (int)off_140321B18() < 0 )
          v7 = L"Unknown";
        else
          v7 = (const WCHAR *)v13[3 * v5 + 11];
        v8 = -1LL;
        do
          ++v8;
        while ( v7[v8] );
        v6 = v11[0];
        v9 = 2 * v8 + 2;
        v10 = 2LL * ++v5;
        v13[v10 - 1] = v7;
        LODWORD(v13[v10]) = v9;
        HIDWORD(v13[v10]) = 0;
      }
      while ( v5 < v6 );
    }
    return EtwpLogKernelEvent((__int64)&v12, a2, v6 + 1, 0xF30u, 4200450);
  }
  return result;
}
