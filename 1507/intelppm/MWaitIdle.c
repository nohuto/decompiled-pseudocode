/*
 * XREFs of MWaitIdle @ 0x1C00032A0
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x1C0002240 (IssueVerw.c)
 */

__int64 __fastcall MWaitIdle(const void **a1, int a2)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax

  v2 = a2;
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  if ( v2 )
  {
    result = v2;
    __writemsr(0x48u, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
