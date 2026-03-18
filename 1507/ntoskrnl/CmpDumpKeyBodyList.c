/*
 * XREFs of CmpDumpKeyBodyList @ 0x140656AC4
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpDumpOneKeyBody @ 0x140656C00 (CmpDumpOneKeyBody.c)
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
  _QWORD *v13; // r15
  _QWORD *v14; // rdi
  signed __int64 v15; // rdi

  v4 = 0;
  v6 = 1;
  v7 = (__int64)a1;
  if ( *a1 )
  {
    v8 = (signed __int64 *)(a1 + 34);
    v9 = 0;
    v10 = (_QWORD *)(v7 + 136);
    while ( !*v10 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 4 )
        goto LABEL_7;
    }
    v6 = 0;
LABEL_7:
    v11 = (_QWORD **)(v7 + 120);
    if ( *v11 != v11 || v6 != 1 )
    {
      v13 = CmpConstructName(v7);
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
            && v15 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * v4 + 136), 1LL, v15) )
          {
            CmpDumpOneKeyBody(1LL, v15, v13, a3);
            ++*a2;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8LL * v4 + 136), v15, 1LL);
          }
          ++v4;
          ++v8;
        }
        while ( v4 < 4 );
        ExFreePoolWithTag(v13, 0x624E4D43u);
      }
      else if ( a3 )
      {
        *(_DWORD *)(a3 + 20) = -1073741670;
      }
    }
  }
}
