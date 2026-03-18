/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1404F07F0
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404F0520 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v7; // rbx
  __int64 v9; // r14
  __int64 NextElement; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = -1;
  *a4 = 0;
  v7 = a5;
  if ( a5 )
    *a5 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v7 )
      *v7 = *(_DWORD *)(a2 + 56);
    if ( !a1 )
      return 0LL;
  }
  else if ( !a1 )
  {
    return 0LL;
  }
  *a4 = *(unsigned __int16 *)(a1 + 176);
  if ( a3 )
  {
    v9 = a1 + 200;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v9, &v17, 32LL);
      v11 = NextElement;
      if ( !NextElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
      {
        if ( *(_DWORD *)(v11 + 68) == 1 )
        {
          v12 = *(_QWORD *)(v11 + 80);
          if ( (*(_DWORD *)(v12 + 4) & 0x20000) == 0 )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v12 + 32) + 8LL))(
                    *(_QWORD *)(v12 + 32),
                    *(unsigned int *)(v12 + 40),
                    &v16);
            if ( !v13 )
              return 3221225626LL;
            v14 = (unsigned __int16)*(_DWORD *)(v13 + 52);
            if ( *a4 < v14 )
              *a4 = v14;
            if ( v7 )
            {
              v15 = *(_DWORD *)(v13 + 56);
              if ( *v7 < v15 )
                *v7 = v15;
            }
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v12 + 32) + 16LL))(*(_QWORD *)(v12 + 32), &v16);
          }
        }
      }
    }
  }
  return 0LL;
}
