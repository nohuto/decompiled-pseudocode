/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x180091420
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18003A3D0 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800911CC (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceStateChanged(void *a1, void *a2)
{
  int v4; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(a1, a2, &v4) )
    return GetLastError();
  if ( v4 )
  {
    MmeOnDeviceStateChanged((const unsigned __int16 *)a2);
    if ( v4 )
      return 0;
  }
  return 5;
}
