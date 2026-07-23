/*
 * XREFs of CmpKeyEnumStackEntryStart @ 0x14060A5F8
 * Callers:
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1404373E0 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x140606994 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryStart(__int64 *a1, unsigned int *a2)
{
  unsigned int *v3; // rdi
  __int64 *v4; // rsi
  _QWORD *v5; // rbp
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // edx
  _WORD *v9; // rax
  unsigned int SubKeyByNumber; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx

  *a1 = *(_QWORD *)a2;
  a1[1] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)a2 + 8LL))(*(_QWORD *)a2, a2[2], a1 + 2);
  v3 = (unsigned int *)(a1 + 9);
  v4 = a1 + 10;
  v5 = a1 + 12;
  v6 = 2LL;
  do
  {
    result = a1[1];
    v8 = *(unsigned int *)((char *)v3 + result - (_QWORD)a1 - 52);
    *(v3 - 10) = v8;
    if ( v8 )
    {
      v9 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*a1 + 8))(
                      *a1,
                      *(unsigned int *)((char *)v3 + a1[1] - (_QWORD)a1 - 44),
                      v5 - 5);
      *(v4 - 5) = (__int64)v9;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, v9, 0);
      *v3 = SubKeyByNumber;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*a1 + 8))(*a1, SubKeyByNumber, v5);
      *v4 = v11;
      v12 = v11;
      v13 = a1[15];
      if ( !v13 || (result = CmpCompareKeysByName(v11, v13), (int)result < 0) )
      {
        a1[15] = v12;
        result = *v3;
        *((_DWORD *)a1 + 28) = result;
      }
    }
    ++v5;
    ++v4;
    ++v3;
    --v6;
  }
  while ( v6 );
  return result;
}
