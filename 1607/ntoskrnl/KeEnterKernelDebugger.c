/*
 * XREFs of KeEnterKernelDebugger @ 0x1401D4BC4
 * Callers:
 *     <none>
 * Callees:
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 */

__int64 __fastcall KeEnterKernelDebugger(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  KiHardwareTrigger = 1;
  _disable();
  __writecr8((unsigned int)(KiHardwareTrigger + 14));
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger && !_InterlockedExchange(&dword_140342110, 1) )
    KdInitSystem(0LL, 0LL);
  return KiBugCheckDebugBreak(5u, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
