/*
 * XREFs of ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DE8C
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013E4B0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C013E77C (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TdrGetDbgOwnerTag(const struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  if ( !a1 )
    return -1LL;
  result = *((_QWORD *)a1 + 11);
  if ( !result )
  {
    v2 = *((_QWORD *)a1 + 4);
    if ( !v2 )
      return -1LL;
    result = *(_QWORD *)(v2 + 440);
    if ( !result )
    {
      result = *(_QWORD *)(v2 + 296);
      if ( !result )
        return -1LL;
    }
  }
  return result;
}
