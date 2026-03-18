/*
 * XREFs of NtAlpcConnectPortEx @ 0x1404D7E74
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1404080D0 (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPortEx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
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
