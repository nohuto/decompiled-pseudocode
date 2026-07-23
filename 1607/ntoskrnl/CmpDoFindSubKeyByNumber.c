/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1404373E0
 * Callers:
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14060A420 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryStart @ 0x14060A5F8 (CmpKeyEnumStackEntryStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(__int64 a1, _WORD *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v8; // rax
  _WORD *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v3 = 0LL;
  v12 = -1;
  v13 = 0;
  if ( *a2 == 26994 && a2[1] )
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)&a2[2 * v3 + 2], &v12);
      v9 = (_WORD *)v8;
      if ( !v8 )
        return 0xFFFFFFFFLL;
      v10 = *(unsigned __int16 *)(v8 + 2);
      if ( a3 < v10 )
        break;
      a3 -= v10;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= (unsigned __int16)a2[1] )
        goto LABEL_2;
    }
    if ( ((*v9 - 26220) & 0xFDFF) != 0 )
      v11 = *(_DWORD *)&v9[2 * a3 + 2];
    else
      v11 = *(_DWORD *)&v9[4 * a3 + 2];
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
    return v11;
  }
  else
  {
LABEL_2:
    if ( ((*a2 - 26220) & 0xFDFF) != 0 )
      return *(unsigned int *)&a2[2 * a3 + 2];
    else
      return *(unsigned int *)&a2[4 * a3 + 2];
  }
}
