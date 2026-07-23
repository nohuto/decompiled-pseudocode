/*
 * XREFs of WdipSemEnableAllProviders @ 0x14056618C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x1404C7BCC (WdipSemEnableDisableTrace.c)
 */

void WdipSemEnableAllProviders()
{
  __int64 v0; // rbp
  unsigned __int16 v1; // r15
  unsigned __int16 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rax
  char *v5; // rdi
  char *v6; // rbx

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  v2 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
  if ( dword_1402FFF00 )
  {
    while ( 1 )
    {
      v3 = WdipSemProviderTable[v0];
      v4 = *(_QWORD *)v3 - *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
      if ( *(_QWORD *)v3 == *(_QWORD *)&WDI_SEM_PROVIDER.Data1 )
        v4 = *(_QWORD *)(v3 + 8) - *(_QWORD *)WDI_SEM_PROVIDER.Data4;
      if ( !v4 )
        goto LABEL_9;
      v5 = (char *)(v3 + 16);
      v6 = (char *)(v3 + 48);
      if ( !*(_DWORD *)(v3 + 40) || !*(_BYTE *)(v3 + 36) )
        goto LABEL_9;
      if ( (int)WdipSemEnableDisableTrace(
                  v1,
                  WdipSemProviderTable[v0],
                  *v5,
                  *(_QWORD *)(v3 + 24),
                  *(_DWORD *)(v3 + 32),
                  1) < 0 )
        break;
      *(_BYTE *)(v3 + 37) = 1;
      if ( *(_BYTE *)(v3 + 68) )
      {
        if ( (int)WdipSemEnableDisableTrace(v2, v3, *v6, *(_QWORD *)(v3 + 56), *(_DWORD *)(v3 + 64), 1) < 0 )
          goto LABEL_15;
        *(_BYTE *)(v3 + 69) = 1;
      }
LABEL_9:
      v0 = (unsigned int)(v0 + 1);
      if ( (unsigned int)v0 >= dword_1402FFF00 )
        return;
    }
    memset(v5, 0, 0x20uLL);
LABEL_15:
    memset(v6, 0, 0x20uLL);
    goto LABEL_9;
  }
}
