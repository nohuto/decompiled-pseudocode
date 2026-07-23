/*
 * XREFs of KeRundownSecureProcess @ 0x1401D2040
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  return VslRundownSecureProcess(*(_QWORD *)(a1 + 720));
}
