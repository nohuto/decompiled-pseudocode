/*
 * XREFs of PoInitializePrcb @ 0x1403A9E9C
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PpmHvConsiderNative @ 0x140136D88 (PpmHvConsiderNative.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  __int16 v3; // ax
  char result; // al

  v1 = DeferredContext + 23808;
  memset(DeferredContext + 23808, 0, 0x1D0uLL);
  v1[240] = 1;
  *((_QWORD *)v1 + 28) = PpmWmiDispatch;
  v1[208] = 2;
  *((_DWORD *)v1 + 104) = 100;
  *((_DWORD *)v1 + 103) = 100;
  v1[408] = 100;
  KeInitializeDpc((PRKDPC)(v1 + 272), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  v3 = *((_WORD *)DeferredContext + 18) + 640;
  v1[273] = 3;
  *((_WORD *)v1 + 137) = v3;
  result = PpmHvConsiderNative();
  if ( result )
  {
    *((_DWORD *)v1 + 54) = 0;
  }
  else
  {
    result = -(HvlpFlags & 4);
    *((_DWORD *)v1 + 54) = ((HvlpFlags & 4) != 0) + 1;
  }
  return result;
}
