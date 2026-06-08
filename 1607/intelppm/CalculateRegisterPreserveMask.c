/*
 * XREFs of CalculateRegisterPreserveMask @ 0x1C001F414
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateRegisterPreserveMask(_BYTE *a1)
{
  char v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rax
  char v4; // cl
  __int64 v5; // rdx

  v1 = a1[2];
  v2 = 0LL;
  if ( v1 || a1[1] != a1[3] )
  {
    v3 = ((1LL << a1[1]) - 1) << v1;
    v4 = a1[3];
    if ( v4 == 64 )
      v5 = -1LL;
    else
      v5 = (1LL << v4) - 1;
    return ~v3 & v5;
  }
  return v2;
}
