/*
 * XREFs of ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x140179B8C
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402A7964 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 * Callees:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall zzzUpdateWindowCompositionCloak(__int64 a1, int a2, int a3)
{
  int v6; // edx
  unsigned int v7; // ebx

  if ( (unsigned int)(a3 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 304LL);
  v6 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 233LL) >> 4) & 2 | 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 0x40) == 0 )
    v6 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 233LL) >> 4) & 2;
  if ( a2 == 1 )
    v7 = v6 & ~a3;
  else
    v7 = v6 | a3;
  return zzzSetWindowCompositionCloak(a1, v7);
}
