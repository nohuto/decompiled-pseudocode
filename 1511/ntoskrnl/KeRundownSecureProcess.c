/*
 * XREFs of KeRundownSecureProcess @ 0x1401C38E8
 * Callers:
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  return HvlRundownSecureProcess(*(_QWORD *)(a1 + 720));
}
