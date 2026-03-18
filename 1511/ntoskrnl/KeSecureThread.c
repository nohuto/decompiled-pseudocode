/*
 * XREFs of KeSecureThread @ 0x1401C315C
 * Callers:
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 * Callees:
 *     HvlCreateSecureThread @ 0x1405F6AEC (HvlCreateSecureThread.c)
 */

__int64 __fastcall KeSecureThread(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return HvlCreateSecureThread(*(_QWORD *)(a1 + 544), a1, a2, a3, a4, a5, a1 + 796);
}
