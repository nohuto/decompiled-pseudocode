/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1403D6A44
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1403D6770 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v6; // rbx
  __int64 v8; // r14
  __int64 NextElement; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = -1;
  *a4 = 0;
  v6 = a5;
  if ( a5 )
    *a5 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v6 )
      *v6 = *(_DWORD *)(a2 + 56);
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
    v8 = a1 + 200;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v8, &v16, 32LL);
      v10 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
      {
        if ( *(_DWORD *)(v10 + 68) == 1 )
        {
          v11 = *(_QWORD *)(v10 + 80);
          if ( (*(_DWORD *)(v11 + 4) & 0x20000) == 0 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
                    *(_QWORD *)(v11 + 32),
                    *(unsigned int *)(v11 + 40),
                    &v15);
            if ( !v12 )
              return 3221225626LL;
            v13 = (unsigned __int16)*(_DWORD *)(v12 + 52);
            if ( *a4 < v13 )
              *a4 = v13;
            if ( v6 )
            {
              v14 = *(_DWORD *)(v12 + 56);
              if ( *v6 < v14 )
                *v6 = v14;
            }
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v15);
          }
        }
      }
    }
  }
  return 0LL;
}
