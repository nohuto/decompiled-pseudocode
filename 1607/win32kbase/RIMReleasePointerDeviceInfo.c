/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C00067A0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     rimDestroyDeadzone @ 0x1C0005280 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C0006844 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  void *v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a2 + 464);
  v4 = *(_QWORD *)(a2 + 480);
  v6 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v2 + 104));
  *(_QWORD *)(v4 + 1496) = v6;
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
      35,
      (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
      23);
  }
  if ( *(_DWORD *)(v4 + 24) == 5 )
  {
    v9 = *(_QWORD *)(a1 + 960);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(a1 + 960) = 0LL;
    }
    rimDestroyDeadzone();
  }
  result = RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 480) = 0LL;
  return result;
}
