/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x18007A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180029E18 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x180079E24 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2, int a3)
{
  void *v5; // rdx
  void *v6; // rcx
  int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)IsMmeNotifyDeviceStateChangedSupported() )
    return 1;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v6, v5, &v8) )
    return GetLastError();
  if ( v8 )
  {
    MmeOnDeviceStateChanged(a2, a3);
    if ( v8 )
      return 0;
  }
  return 5;
}
