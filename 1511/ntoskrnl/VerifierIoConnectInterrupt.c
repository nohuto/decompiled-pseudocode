/*
 * XREFs of VerifierIoConnectInterrupt @ 0x1406B94F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VerifierIoConnectInterrupt(
        PKINTERRUPT *a1,
        KSERVICE_ROUTINE *a2,
        void *a3,
        KSPIN_LOCK *a4,
        ULONG a5,
        KIRQL a6,
        KIRQL a7,
        KINTERRUPT_MODE a8,
        BOOLEAN a9,
        KAFFINITY a10,
        BOOLEAN a11)
{
  return VfCtxHookAndConnectInterrupt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
