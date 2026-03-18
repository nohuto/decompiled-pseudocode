/*
 * XREFs of NtGdiDestroyOPMProtectedOutput @ 0x1C00677C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0067AC0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyOPMProtectedOutput(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  int v4; // ebx

  result = UserSessionSwitchEnterCrit((__int64)a1);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    v4 = OPMDestroyProtectedOutput(a1);
    UserSessionSwitchLeaveCrit();
    if ( v4 < 0 )
      return (unsigned int)v4;
    return v3;
  }
  return result;
}
