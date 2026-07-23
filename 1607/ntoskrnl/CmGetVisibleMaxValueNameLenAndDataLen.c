/*
 * XREFs of CmGetVisibleMaxValueNameLenAndDataLen @ 0x1404A7690
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404A7428 (CmpQueryKeyDataFromCache.c)
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
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF
  int v17; // [rsp+6Ch] [rbp+24h]

  v5 = a5;
  *a4 = 0;
  v15 = 0xFFFFFFFFLL;
  *v5 = 0;
  v16 = -1;
  v17 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 170);
  *v5 = *(_DWORD *)(a1 + 172);
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
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 276),
          &v15);
  if ( v10 )
  {
    v11 = 0;
    if ( *(_DWORD *)(a1 + 272) )
    {
      while ( 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
                *(_QWORD *)(a1 + 24),
                *(unsigned int *)(v10 + 4LL * v11),
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
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v16);
        if ( ++v11 >= *(_DWORD *)(a1 + 272) )
          goto LABEL_24;
      }
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v15);
      return 3221225626LL;
    }
LABEL_24:
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v15);
    return 0LL;
  }
  return 3221225626LL;
}
