/*
 * XREFs of RmRegisterActivityHost @ 0x18000E040
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientRegisterHostJobObject @ 0x18000E4D8 (RmpClientRegisterHostJobObject.c)
 *     RmpClientRegisterHostProcess @ 0x18000E55C (RmpClientRegisterHostProcess.c)
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
