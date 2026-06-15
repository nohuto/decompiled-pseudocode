/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x180093B50
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18009374C (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800938D8 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 */

DWORD __fastcall s_mmeNotifyDeviceAdded(void *a1, void *a2)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(a1, a2, &v4) )
    return GetLastError();
  if ( v4 )
  {
    MmeOnDeviceAdded((const unsigned __int16 *)a2);
    if ( v4 )
      return 0;
  }
  return 5;
}
