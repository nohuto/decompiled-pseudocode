/*
 * XREFs of XdvIoBuildDeviceIoControlRequest @ 0x140223250
 * Callers:
 *     IovBuildDeviceIoControlRequest @ 0x140700998 (IovBuildDeviceIoControlRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoBuildDeviceIoControlRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 (__fastcall *a11)(__int64, __int64, __int64, __int64, __int64, int))
{
  return a11(a1, a2, a3, a4, a5, a6);
}
