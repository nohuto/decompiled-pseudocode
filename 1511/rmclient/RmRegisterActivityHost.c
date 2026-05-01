/*
 * XREFs of RmRegisterActivityHost @ 0x18000EA70
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientRegisterHostJobObject @ 0x18000EEF0 (RmpClientRegisterHostJobObject.c)
 *     RmpClientRegisterHostProcess @ 0x18000EF74 (RmpClientRegisterHostProcess.c)
 */

__int64 __fastcall RmRegisterActivityHost(int a1, _DWORD *a2, int a3, int a4, __int64 a5)
{
  if ( *a2 )
  {
    if ( *a2 == 1 )
      return RmpClientRegisterHostProcess(a1, (_DWORD)a2, a3, a4, a5);
    if ( *a2 == 2 )
      return RmpClientRegisterHostJobObject(a1, (_DWORD)a2, a3, a4, a5);
  }
  return 3221225485LL;
}
