/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x1400C29FC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PVOID result; // rax
  void *v3; // rbx
  _QWORD *i; // rcx

  result = Table->TableRoot;
  v3 = 0LL;
  if ( Table->TableRoot )
  {
    if ( *RestartKey )
    {
      result = RtlRealSuccessor((PRTL_SPLAY_LINKS)*RestartKey);
      if ( !result )
        return v3;
      *RestartKey = result;
    }
    else
    {
      for ( i = (_QWORD *)*((_QWORD *)result + 1); i; i = (_QWORD *)i[1] )
        result = i;
      *RestartKey = result;
    }
    return (char *)result + 40;
  }
  return result;
}
