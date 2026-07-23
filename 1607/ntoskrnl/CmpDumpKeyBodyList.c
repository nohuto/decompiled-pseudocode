/*
 * XREFs of CmpDumpKeyBodyList @ 0x1405FF62C
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpFreeAllMemory @ 0x1405FCB30 (CmpFreeAllMemory.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     CmpDumpOneKeyBody @ 0x1405FF768 (CmpDumpOneKeyBody.c)
 */

void __fastcall CmpDumpKeyBodyList(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v6; // r8
  __int64 v7; // rsi
  signed __int64 *v8; // r12
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  _QWORD **v11; // r14
  __int64 v12; // rcx
  void *v13; // r15
  _QWORD *v14; // rdi
  signed __int64 v15; // rdi

  v4 = 0;
  v6 = 1;
  v7 = (__int64)a1;
  if ( *a1 )
  {
    v8 = (signed __int64 *)(a1 + 32);
    v9 = 0;
    v10 = (_QWORD *)(v7 + 128);
    while ( !*v10 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 4 )
        goto LABEL_7;
    }
    v6 = 0;
LABEL_7:
    v11 = (_QWORD **)(v7 + 112);
    if ( *v11 != v11 || v6 != 1 )
    {
      v13 = (void *)CmpConstructName(v7);
      if ( v13 )
      {
        v14 = *v11;
        if ( *v11 != v11 )
        {
          do
          {
            CmpDumpOneKeyBody(v12, v14 - 4, v13, a3);
            ++*a2;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 != v11 );
          v7 = (__int64)a1;
        }
        do
        {
          v15 = *v8;
          if ( (unsigned __int64)*v8 >= 3
            && v15 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * v4 + 128), 1LL, v15) )
          {
            CmpDumpOneKeyBody(1LL, v15, v13, a3);
            ++*a2;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * v4 + 128), v15, 1LL);
          }
          ++v4;
          ++v8;
        }
        while ( v4 < 4 );
        CmpFreeTransientPoolWithTag(v13, 0x624E4D43u);
      }
      else if ( a3 )
      {
        *(_DWORD *)(a3 + 20) = -1073741670;
      }
    }
  }
}
