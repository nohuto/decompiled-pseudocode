/*
 * XREFs of s_mmeNotifyDeviceRemoved @ 0x1800913D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18003A3D0 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x180091150 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceRemoved(void *a1, void *a2)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(a1, a2, &v4) )
    return GetLastError();
  if ( v4 )
  {
    MmeOnDeviceRemoved((const unsigned __int16 *)a2);
    if ( v4 )
      return 0;
  }
  return 5;
}
