/*
 * XREFs of PspUnlinkJobProcess @ 0x140505D9C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspUnlinkJobProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)(a1 + 1080);
  for ( i = *(_QWORD **)(a1 + 1080); i != v2; i = (_QWORD *)*i )
  {
    if ( i[2] == a2 + 1128 )
      i[2] = *(_QWORD *)(a2 + 1136);
  }
  result = a2 + 1128;
  v5 = *(_QWORD *)(a2 + 1128);
  v6 = *(_QWORD **)(result + 8);
  if ( *(_QWORD *)(v5 + 8) != result || *v6 != result )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
