/*
 * XREFs of PopPrepChildWake @ 0x1403EF784
 * Callers:
 *     PopSystemIrpCompletion @ 0x1403EF484 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall PopPrepChildWake(__int64 *a1, __int64 a2)
{
  __int64 **result; // rax
  __int64 *v3; // r8
  __int64 **v4; // rax
  __int64 v5; // rdx

  result = (__int64 **)*((unsigned int *)a1 + 24);
  if ( *((_DWORD *)a1 + 25) == (_DWORD)result )
  {
    v3 = (__int64 *)*a1;
    v4 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (__int64)v4;
    v5 = a2 + 72 * (*((unsigned __int8 *)a1 + 56) + 1LL);
    result = *(__int64 ***)(v5 + 8);
    *a1 = v5;
    a1[1] = (__int64)result;
    if ( *result != (__int64 *)v5 )
      __fastfail(3u);
    *result = a1;
    *(_QWORD *)(v5 + 8) = a1;
  }
  --*((_DWORD *)a1 + 25);
  return result;
}
