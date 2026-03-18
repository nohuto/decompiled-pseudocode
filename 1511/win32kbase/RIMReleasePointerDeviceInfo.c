/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C000ABDC
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000CD9C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     RIMFreePointerDevice @ 0x1C000AC5C (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v6; // rax
  int v7; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 400);
  v4 = *(_QWORD *)(a2 + 416);
  v6 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v2 + 104));
  *(_QWORD *)(v4 + 1536) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 104));
  }
  else
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3,
      31,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
      23);
  }
  result = RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 416) = 0LL;
  return result;
}
