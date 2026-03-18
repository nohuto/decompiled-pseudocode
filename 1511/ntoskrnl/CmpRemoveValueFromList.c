/*
 * XREFs of CmpRemoveValueFromList @ 0x1403D7848
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  ULONG_PTR v10; // rdx
  unsigned int v11; // ebx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(a1, a3[1]);
    a3[1] = -1;
LABEL_7:
    *a3 = v6;
    return 0LL;
  }
  v7 = a3[1];
  v13 = -1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, v7, &v13);
  if ( v8 )
  {
    if ( (unsigned int)v4 < v6 )
    {
      v9 = (_DWORD *)(v8 + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v9++ = *(_DWORD *)(v8 + 4 * v4);
      }
      while ( (unsigned int)v4 < v6 );
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v13);
    v10 = a3[1];
    v14 = 0LL;
    v11 = HvReallocateCell(a1, v10, (__int64)&v14, (__int64)&v13);
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v13);
    a3[1] = v11;
    goto LABEL_7;
  }
  return 3221225626LL;
}
