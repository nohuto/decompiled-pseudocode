/*
 * XREFs of IoQueryFullDriverPath @ 0x1401C98D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  v5 = *(_QWORD *)(v2 + 48);
  if ( retaddr < v5 || retaddr > v5 + *(unsigned int *)(v2 + 64) )
    return 3221225506LL;
  else
    return IopQueryFullDriverPath(a1, a2);
}
