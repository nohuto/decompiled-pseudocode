/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x180079FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180029E18 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x180079D50 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceAdded(__int64 a1, const unsigned __int16 *a2)
{
  void *v3; // rdx
  void *v4; // rcx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)IsMmeNotifyDeviceAddedSupported() )
    return 1;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v4, v3, &v6) )
    return GetLastError();
  if ( v6 )
  {
    MmeOnDeviceAdded(a2);
    if ( v6 )
      return 0;
  }
  return 5;
}
