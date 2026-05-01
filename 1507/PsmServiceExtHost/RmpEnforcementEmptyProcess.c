/*
 * XREFs of RmpEnforcementEmptyProcess @ 0x18003AE50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003A1E0 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, unsigned __int8 a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  bool v10; // cc

  v6 = (a4 >> 2) & 8;
  if ( (a4 & 1) != 0 )
  {
    v6 |= 2u;
    goto LABEL_4;
  }
  if ( (a4 & 0x22) != 0 )
  {
LABEL_4:
    result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, v6);
    v10 = (int)result <= 0;
    if ( (_DWORD)result )
      goto LABEL_8;
  }
  if ( (a4 & 4) == 0
    || (result = RmpEnforcementEmptyProcessAndLog(a1, a2, a3, v6 | 1), v10 = (int)result <= 0, !(_DWORD)result) )
  {
    result = 0LL;
    v10 = 1;
  }
LABEL_8:
  if ( !v10 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
