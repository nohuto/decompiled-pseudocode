/*
 * XREFs of vCleanupRimClient @ 0x1C011AC20
 * Callers:
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 * Callees:
 *     vCleanupRimClientWorker @ 0x1C011ADFC (vCleanupRimClientWorker.c)
 */

__int64 __fastcall vCleanupRimClient(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rsi

  v1 = a1;
  result = vCleanupRimClientWorker(a1);
  if ( v1 == -1 )
  {
    v5 = 0LL;
    v6 = 3LL;
    do
    {
      if ( *(_QWORD *)(v5 + aDeviceTemplate[0] + 272) )
      {
        result = Win32FreePool(*(_QWORD *)(v5 + aDeviceTemplate[0] + 272), v3, v4);
        *(_QWORD *)(v5 + aDeviceTemplate[0] + 272) = 0LL;
      }
      if ( *(_QWORD *)(v5 + aDeviceTemplate[0] + 280) )
      {
        result = Win32FreePool(*(_QWORD *)(v5 + aDeviceTemplate[0] + 280), v3, v4);
        *(_QWORD *)(v5 + aDeviceTemplate[0] + 280) = 0LL;
      }
      if ( *(_QWORD *)(v5 + aDeviceTemplate[0] + 336) )
      {
        result = Win32FreePool(*(_QWORD *)(v5 + aDeviceTemplate[0] + 336), v3, v4);
        *(_QWORD *)(v5 + aDeviceTemplate[0] + 336) = 0LL;
      }
      if ( *(_QWORD *)(v5 + aDeviceTemplate[0] + 384) )
      {
        result = Win32FreePool(*(_QWORD *)(v5 + aDeviceTemplate[0] + 384), v3, v4);
        *(_QWORD *)(v5 + aDeviceTemplate[0] + 384) = 0LL;
      }
      if ( *(_QWORD *)(v5 + aDeviceTemplate[0] + 432) )
      {
        result = Win32FreePool(*(_QWORD *)(v5 + aDeviceTemplate[0] + 432), v3, v4);
        *(_QWORD *)(v5 + aDeviceTemplate[0] + 432) = 0LL;
      }
      v5 += 560LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
