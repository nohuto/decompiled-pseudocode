/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1403FD290
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(__int64 a1, _WORD *a2, unsigned int a3)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  _WORD *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = -1;
  if ( *a2 == 26994 && (v7 = 0LL, a2[1]) )
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)&a2[2 * v7 + 2], &v12);
      v9 = (_WORD *)v8;
      if ( !v8 )
        return 0xFFFFFFFFLL;
      v10 = *(unsigned __int16 *)(v8 + 2);
      if ( a3 < v10 )
        break;
      a3 -= v10;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned __int16)a2[1] )
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
