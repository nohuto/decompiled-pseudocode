/*
 * XREFs of ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180032840
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x1800328D0 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 */

signed int __fastcall RmpEnforcementEmptyProcess(
        struct _RM_ACTIVITY_HOST *a1,
        HANDLE ProcessHandle,
        unsigned int a3,
        void *a4)
{
  char v4; // bl
  signed int result; // eax
  bool v9; // cc
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = (char)a4;
  if ( ((unsigned __int8)a4 & 2) == 0
    || (result = RmpEnforcementEmptyProcessAndLog(a1, ProcessHandle, a3, 0, v10), v9 = result <= 0, !result) )
  {
    if ( (v4 & 4) == 0
      || (result = RmpEnforcementEmptyProcessAndLog(a1, ProcessHandle, a3, 1u, v10), v9 = result <= 0, !result) )
    {
      if ( (v4 & 0x20) == 0
        || (result = RmpEnforcementEmptyProcessAndLog(a1, ProcessHandle, a3, 8u, v10), v9 = result <= 0, !result) )
      {
        result = 0;
        v9 = 1;
      }
    }
  }
  if ( !v9 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
