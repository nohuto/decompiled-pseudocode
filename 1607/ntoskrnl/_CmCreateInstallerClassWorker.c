/*
 * XREFs of _CmCreateInstallerClassWorker @ 0x1406D7658
 * Callers:
 *     _CmCreateInstallerClass @ 0x1406D74EC (_CmCreateInstallerClass.c)
 * Callees:
 *     _CmOpenInstallerClassRegKey @ 0x1404DA9EC (_CmOpenInstallerClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x1406DC028 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInstallerClassWorker(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, bool *a5, __int16 a6)
{
  int v9; // ebx
  bool v10; // dl
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenInstallerClassRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, (__int64)v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent(a1, a2, 2LL, *a4);
    }
  }
  return (unsigned int)v9;
}
