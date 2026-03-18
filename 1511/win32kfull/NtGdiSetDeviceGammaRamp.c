/*
 * XREFs of NtGdiSetDeviceGammaRamp @ 0x1C02B07C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C00E3C40 (GreSetDeviceGammaRamp.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetDeviceGammaRamp(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  struct _EPROCESS *CurrentProcess; // rax

  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(W32UserProbeAddress, 0LL, a3, a4);
    LOBYTE(v6) = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0;
    return (unsigned int)GreSetDeviceGammaRamp(a1, a2, v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v7;
}
