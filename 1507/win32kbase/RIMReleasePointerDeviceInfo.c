/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C00782B4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00755F8 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMFreePointerDevice @ 0x1C0078334 (RIMFreePointerDevice.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 400);
  v4 = *(_QWORD *)(a2 + 416);
  v6 = Win32AllocPoolZInit(*(unsigned int *)(v2 + 104));
  *(_QWORD *)(v4 + 1520) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 104));
  }
  else
  {
    v8 = -1073741801;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Fu,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
      v8);
  }
  result = RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 416) = 0LL;
  return result;
}
