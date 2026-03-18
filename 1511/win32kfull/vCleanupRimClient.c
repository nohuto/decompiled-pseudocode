/*
 * XREFs of vCleanupRimClient @ 0x1C009EAE0
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 * Callees:
 *     vCleanupRimClientWorker @ 0x1C009CF3C (vCleanupRimClientWorker.c)
 */

__int64 __fastcall vCleanupRimClient(int a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi

  result = vCleanupRimClientWorker(a1);
  if ( a1 == -1 )
  {
    v3 = 0LL;
    v4 = 3LL;
    do
    {
      if ( *(_QWORD *)(v3 + aDeviceTemplate[0] + 280) )
      {
        result = Win32FreePool(*(_QWORD *)(v3 + aDeviceTemplate[0] + 280));
        *(_QWORD *)(v3 + aDeviceTemplate[0] + 280) = 0LL;
      }
      if ( *(_QWORD *)(v3 + aDeviceTemplate[0] + 288) )
      {
        result = Win32FreePool(*(_QWORD *)(v3 + aDeviceTemplate[0] + 288));
        *(_QWORD *)(v3 + aDeviceTemplate[0] + 288) = 0LL;
      }
      if ( *(_QWORD *)(v3 + aDeviceTemplate[0] + 344) )
      {
        result = Win32FreePool(*(_QWORD *)(v3 + aDeviceTemplate[0] + 344));
        *(_QWORD *)(v3 + aDeviceTemplate[0] + 344) = 0LL;
      }
      if ( *(_QWORD *)(v3 + aDeviceTemplate[0] + 392) )
      {
        result = Win32FreePool(*(_QWORD *)(v3 + aDeviceTemplate[0] + 392));
        *(_QWORD *)(v3 + aDeviceTemplate[0] + 392) = 0LL;
      }
      if ( *(_QWORD *)(v3 + aDeviceTemplate[0] + 440) )
      {
        result = Win32FreePool(*(_QWORD *)(v3 + aDeviceTemplate[0] + 440));
        *(_QWORD *)(v3 + aDeviceTemplate[0] + 440) = 0LL;
      }
      v3 += 568LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
