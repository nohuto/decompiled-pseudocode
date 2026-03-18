/*
 * XREFs of NtGdiDestroyOPMProtectedOutput @ 0x1C0082480
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0082784 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyOPMProtectedOutput(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = UserSessionSwitchEnterCrit((__int64)a1);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    v4 = OPMDestroyProtectedOutput(a1);
    UserSessionSwitchLeaveCrit(v6, v5);
    if ( v4 < 0 )
      return (unsigned int)v4;
    return v3;
  }
  return result;
}
