/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140700998
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     XdvIoBuildDeviceIoControlRequest @ 0x140223250 (XdvIoBuildDeviceIoControlRequest.c)
 *     VfSetIoBuildRequest @ 0x14070C0DC (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v9 = pXdvIoBuildDeviceIoControlRequest(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         a7,
         a8,
         a9,
         retaddr,
         (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int))IopBuildDeviceIoControlRequest);
  v10 = v9;
  if ( v9 )
    VfSetIoBuildRequest(v9);
  return v10;
}
