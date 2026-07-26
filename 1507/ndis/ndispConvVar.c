/*
 * XREFs of ndispConvVar @ 0x1C00992C8
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndispConvVar(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v4 = a1 + a2;
  v5 = a1 + *((_QWORD *)a4 + 1);
  v6 = v5 + *a4;
  if ( v4 < a1 + 72 || v6 < v5 || v5 < a1 + 72 || v6 > v4 || (v5 & 1) != 0 )
    return 3221225485LL;
  *((_QWORD *)a4 + 1) = v5;
  return 0LL;
}
