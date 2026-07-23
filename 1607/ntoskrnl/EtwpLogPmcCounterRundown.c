/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x1406A710C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  _DWORD v10[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD *v11; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v12[21]; // [rsp+48h] [rbp-81h]

  v2 = *(_QWORD *)(a1 + 848);
  if ( *(_DWORD *)(v2 + 28) )
  {
    v4 = 0;
    v10[0] = *(_DWORD *)(v2 + 28);
    v5 = v10[0];
    v11 = v10;
    v12[0] = 4LL;
    if ( v10[0] )
    {
      do
      {
        v10[1] = 0;
        LODWORD(v12[3 * v4 + 9]) = *(_DWORD *)(v2 + 4LL * v4);
        if ( (int)off_1402F37E8() < 0 )
          v6 = L"Unknown";
        else
          v6 = (const WCHAR *)v12[3 * v4 + 11];
        v7 = -1LL;
        do
          ++v7;
        while ( v6[v7] );
        v5 = v10[0];
        v8 = 2 * v7 + 2;
        v9 = 2LL * ++v4;
        v12[v9 - 1] = v6;
        LODWORD(v12[v9]) = v8;
        HIDWORD(v12[v9]) = 0;
      }
      while ( v4 < v5 );
    }
    EtwpLogKernelEvent((__int64)&v11, EtwpHostSiloState, a2, v5 + 1, 0xF30u, 0x401802u);
  }
}
