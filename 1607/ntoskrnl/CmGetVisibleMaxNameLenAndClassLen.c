/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1404A7724
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404A7428 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  _QWORD *v9; // r14
  char *NextElement; // rax
  char *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+5Ch] [rbp+14h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = -1;
  v5 = a5;
  v18 = 0LL;
  v17 = 0;
  *a4 = 0;
  if ( v5 )
    *v5 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v5 )
      *v5 = *(_DWORD *)(a2 + 56);
    if ( !a1 )
      return 0LL;
  }
  else if ( !a1 )
  {
    return 0LL;
  }
  *a4 = *(unsigned __int16 *)(a1 + 168);
  if ( a3 )
  {
    v9 = (_QWORD *)(a1 + 200);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v9, &v18, 32);
      v11 = NextElement;
      if ( !NextElement )
        break;
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a3) )
      {
        if ( *((_DWORD *)v11 + 17) == 1 )
        {
          v12 = *((_QWORD *)v11 + 11);
          if ( !(unsigned __int8)CmpIsKeyDeleted(v12, 0LL) )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v12 + 24) + 8LL))(
                    *(_QWORD *)(v12 + 24),
                    *(unsigned int *)(v12 + 32),
                    &v16);
            if ( !v13 )
              return 3221225626LL;
            v14 = (unsigned __int16)*(_DWORD *)(v13 + 52);
            if ( *a4 < v14 )
              *a4 = v14;
            if ( v5 )
            {
              v15 = *(_DWORD *)(v13 + 56);
              if ( *v5 < v15 )
                *v5 = v15;
            }
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v12 + 24) + 16LL))(*(_QWORD *)(v12 + 24), &v16);
          }
        }
      }
    }
  }
  return 0LL;
}
