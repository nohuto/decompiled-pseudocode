/*
 * XREFs of CleanupRemoteHandles @ 0x1C00700C0
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B20 (IsRemoteConnection_0.c)
 *     IsRemoveInputDevicesSupported_0 @ 0x1C0001B28 (IsRemoveInputDevicesSupported_0.c)
 *     RemoveInputDevices_0 @ 0x1C0001B30 (RemoveInputDevices_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall CleanupRemoteHandles(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  if ( a1[7] )
  {
    Win32FreePool();
    a1[7] = 0LL;
  }
  if ( gThinwireFileObject )
  {
    ObfDereferenceObject(gThinwireFileObject);
    gThinwireFileObject = 0LL;
  }
  if ( gVideoFileObject )
  {
    ObfDereferenceObject(gVideoFileObject);
    gVideoFileObject = 0LL;
  }
  if ( gpRemoteBeepDevice )
  {
    ObfDereferenceObject(gpRemoteBeepDevice);
    gpRemoteBeepDevice = 0LL;
  }
  ghRemoteMouseChannel = 0LL;
  ghRemoteKeyboardChannel = 0LL;
  result = IsRemoteConnection_0();
  if ( (_DWORD)result )
  {
    result = IsRemoveInputDevicesSupported_0();
    if ( (int)result >= 0 )
      return RemoveInputDevices_0();
  }
  return result;
}
