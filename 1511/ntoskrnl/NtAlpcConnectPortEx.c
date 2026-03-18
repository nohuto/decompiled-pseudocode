/*
 * XREFs of NtAlpcConnectPortEx @ 0x1404B3620
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPortEx(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        LARGE_INTEGER *a11)
{
  return AlpcpConnectPort(a1, 0LL, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11);
}
