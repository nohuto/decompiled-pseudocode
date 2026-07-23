/*
 * XREFs of ArbGetNextAllocationRange @ 0x140559A7C
 * Callers:
 *     <none>
 * Callees:
 *     ArbpUpdatePriority @ 0x140559BF4 (ArbpUpdatePriority.c)
 */

char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  char result; // al

  while ( 1 )
  {
    if ( *(_QWORD *)(a2 + 40) )
    {
      ArbpUpdatePriority(a1);
    }
    else
    {
      v4 = *(_QWORD *)(a2 + 56);
      for ( i = v4 + ((unsigned __int64)*(unsigned int *)(a2 + 48) << 6);
            v4 < i;
            i = *(_QWORD *)(a2 + 56) + ((unsigned __int64)*(unsigned int *)(a2 + 48) << 6) )
      {
        *(_DWORD *)(v4 + 32) = 0;
        ArbpUpdatePriority(a1);
        v4 += 64LL;
      }
    }
    v6 = *(_QWORD *)(a2 + 56);
    v7 = v6 + 64;
    v8 = v6 + (((unsigned int)(*(_DWORD *)(a2 + 48) - 1) + 1LL) << 6);
    while ( v7 < v8 )
    {
      if ( *(_DWORD *)(v7 + 32) < *(_DWORD *)(v6 + 32) )
        v6 = v7;
      v7 += 64LL;
    }
    v9 = *(_DWORD *)(v6 + 32);
    if ( v9 == 0x7FFFFFFF )
      return 0;
    if ( (unsigned int)(v9 - 2147483645) <= 1 )
    {
      v11 = *(_QWORD *)v6;
      v12 = *(_QWORD *)(v6 + 8);
      v14 = *(_QWORD *)v6;
      v15 = v12;
    }
    else
    {
      if ( v9 > 0 )
        v10 = (unsigned int)(v9 - 1);
      else
        v10 = (unsigned int)(-1 - v9);
      v11 = *(_QWORD *)v6;
      v12 = *(_QWORD *)(v6 + 8);
      v13 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16 * v10);
      v14 = *v13;
      v15 = v13[1];
      if ( *(_QWORD *)v6 > *v13 )
        v14 = *(_QWORD *)v6;
      if ( v12 < v15 )
        v15 = *(_QWORD *)(v6 + 8);
    }
    v16 = *(_QWORD *)(v6 + 16);
    if ( !v16 )
      goto LABEL_17;
    v17 = *(_QWORD *)(v6 + 24);
    v11 = v17 + v14 - 1 - (v17 + v14 - 1) % v17;
    if ( v16 - 1 > v15 - v11 )
    {
      *(_QWORD *)(a2 + 40) = v6;
    }
    else
    {
      v12 = v15 - (1 - v16 + v15) % v17;
LABEL_17:
      if ( v11 != *(_QWORD *)(a2 + 16) || v12 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v6 )
      {
        *(_QWORD *)(a2 + 16) = v11;
        result = 1;
        *(_QWORD *)(a2 + 24) = v12;
        *(_QWORD *)(a2 + 40) = v6;
        return result;
      }
    }
  }
}
