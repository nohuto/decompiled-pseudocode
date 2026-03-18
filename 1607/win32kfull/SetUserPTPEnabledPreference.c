/*
 * XREFs of SetUserPTPEnabledPreference @ 0x1C01C94D0
 * Callers:
 *     <none>
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1C0131F90 (AccessPTPEnabledStatus.c)
 */

__int64 __fastcall SetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v7; // eax
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v3 = 1;
  v10 = 1;
  if ( grpWinStaList )
  {
    v7 = AccessPTPEnabledStatus(0, 1, &v10);
    v3 = v10;
    if ( v7 )
      gPTPEnabled = v10;
  }
  if ( aDeviceTemplate[153] )
    a3 = aDeviceTemplate[153];
  result = RIMFindConfigDeviceForInput(a3, a2, a1, v9);
  if ( (_DWORD)result )
  {
    if ( v3 )
      return RIMUnRevokeConfigurationChange(v9[0], 87LL);
    else
      return RIMRevokeConfigurationChange(v9[0], 87LL);
  }
  return result;
}
