/*
 * XREFs of _CmCreateInstallerClassWorker @ 0x14071259C
 * Callers:
 *     _CmCreateInstallerClass @ 0x140712430 (_CmCreateInstallerClass.c)
 * Callees:
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14058B750 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInstallerClassWorker(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, bool *a5, __int16 a6)
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
    v9 = CmOpenInstallerClassRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent((__int64)a1, a2, 2u, *a4);
    }
  }
  return (unsigned int)v9;
}
