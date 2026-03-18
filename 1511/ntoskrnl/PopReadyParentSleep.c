/*
 * XREFs of PopReadyParentSleep @ 0x14039D370
 * Callers:
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopReadyParentSleep(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  char v3; // r10
  __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 v9; // rax
  __int64 **v10; // rcx

  v3 = 0;
  if ( (*((_DWORD *)a1 + 23))-- == 1 )
  {
    v7 = *a1;
    v8 = (__int64 **)a1[1];
    if ( *(__int64 **)(v7 + 8) != a1 || *v8 != a1 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = a2 + 8 * (*((unsigned __int8 *)a1 + 56) + 8LL * *((unsigned __int8 *)a1 + 56) + 5);
    v10 = *(__int64 ***)(v9 + 8);
    *a1 = v9;
    a1[1] = (__int64)v10;
    if ( *v10 != (__int64 *)v9 )
      __fastfail(3u);
    *v10 = a1;
    *(_QWORD *)(v9 + 8) = a1;
    return *((_BYTE *)a1 + 56) == a3;
  }
  return v3;
}
