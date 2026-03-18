/*
 * XREFs of KeRundownSecureProcess @ 0x1401FF814
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  return HvlRundownSecureProcess(*(_QWORD *)(a1 + 720));
}
