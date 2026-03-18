/*
 * XREFs of CmGetVisibleMaxValueNameLenAndDataLen @ 0x1403D69C4
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1403D6770 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetVisibleMaxValueNameLenAndDataLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v5 = a5;
  v15 = -1;
  v16 = -1;
  *a5 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 178);
  *v5 = *(_DWORD *)(a1 + 180);
  if ( !a3 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 280);
  if ( !v9 )
    return 0LL;
  if ( v9 != a3 )
    return 0LL;
  *a4 = 0;
  *v5 = 0;
  if ( !*(_DWORD *)(a1 + 272) )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(a1 + 276),
          &v15);
  if ( v10 )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(a1 + 272) )
    {
      while ( 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                *(_QWORD *)(a1 + 32),
                *(unsigned int *)(v10 + 4 * v11),
                &v16);
        if ( !v12 )
          break;
        if ( (*(_BYTE *)(v12 + 16) & 1) != 0 )
          v13 = (unsigned __int16)(2 * *(_WORD *)(v12 + 2));
        else
          v13 = *(unsigned __int16 *)(v12 + 2);
        if ( *a4 < v13 )
          *a4 = v13;
        v14 = *(_DWORD *)(v12 + 4);
        if ( v14 >= 0x80000000 )
          v14 += 0x80000000;
        if ( *v5 < v14 )
          *v5 = v14;
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v16);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 272) )
          goto LABEL_24;
      }
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v15);
      return 3221225626LL;
    }
LABEL_24:
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v15);
    return 0LL;
  }
  return 3221225626LL;
}
