/*
 * XREFs of KeRundownSecureProcess @ 0x1401D2214
 * Callers:
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  return VslRundownSecureProcess(*(_QWORD *)(a1 + 720));
}
