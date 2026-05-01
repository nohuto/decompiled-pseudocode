/*
 * XREFs of RmpEnforcementEmptyProcess @ 0x180040240
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003F56C (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, char a4)
{
  __int64 result; // rax
  bool v9; // cc

  if ( (a4 & 2) == 0
    || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 0), v9 = (int)result <= 0, !(_DWORD)result) )
  {
    if ( (a4 & 4) == 0
      || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 1u), v9 = (int)result <= 0, !(_DWORD)result) )
    {
      if ( (a4 & 0x20) == 0
        || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, 8u), v9 = (int)result <= 0, !(_DWORD)result) )
      {
        result = 0LL;
        v9 = 1;
      }
    }
  }
  if ( !v9 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
