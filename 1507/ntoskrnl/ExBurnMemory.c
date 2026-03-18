/*
 * XREFs of ExBurnMemory @ 0x1407F7FC4
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExBurnMemory(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // r10
  int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v11; // rax

  v5 = a2;
  v6 = (__int64 *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    v8 = *((_DWORD *)v7 + 4);
    if ( v8 == 2 || v8 == 5 )
    {
      v9 = v7[4];
      if ( v9 )
        break;
    }
LABEL_7:
    v7 = (__int64 *)v7[1];
    if ( v7 == v6 )
      return a2 - v5;
  }
  if ( v9 <= v5 )
  {
    *((_DWORD *)v7 + 4) = a3;
    v5 -= v9;
    if ( !v5 )
      return a2 - v5;
    goto LABEL_7;
  }
  v7[4] -= (unsigned int)v5;
  *(_QWORD *)(a4 + 24) = v7[3] + v7[4];
  *(_QWORD *)(a4 + 32) = (unsigned int)v5;
  *(_DWORD *)(a4 + 16) = a3;
  v11 = *v7;
  *(_QWORD *)a4 = *v7;
  *(_QWORD *)(a4 + 8) = v7;
  if ( *(__int64 **)(v11 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)(v11 + 8) = a4;
  v5 = 0LL;
  *v7 = a4;
  return a2 - v5;
}
