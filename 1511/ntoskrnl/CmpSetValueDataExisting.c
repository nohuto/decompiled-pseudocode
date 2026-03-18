/*
 * XREFs of CmpSetValueDataExisting @ 0x1404B8C18
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  unsigned __int16 v13; // r15
  char *v14; // r12
  void *v15; // rax
  size_t v16; // r8
  unsigned int v17; // ebx
  ULONG_PTR v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // r15
  int Cell; // eax
  unsigned __int16 v23; // r15
  ULONG_PTR v24; // rdx
  int v25; // eax
  int v26; // [rsp+30h] [rbp-10h] BYREF
  int v27; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  int v29; // [rsp+80h] [rbp+40h] BYREF
  void *Src; // [rsp+88h] [rbp+48h]

  Src = a2;
  v26 = -1;
  v27 = -1;
  v29 = -1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a5, &v27);
  v9 = v8;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v8 + 4),
            &v29);
    if ( !v10 )
    {
      v17 = -1073741670;
LABEL_14:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      return v17;
    }
    v11 = *(_WORD *)(v9 + 2);
    v12 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v12 > v11 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
      v19 = *(unsigned int *)(v9 + 4);
      v28 = 0LL;
      v20 = HvReallocateCell(BugCheckParameter2, v19, 4 * (unsigned int)(unsigned __int16)v12, 1, &v28, &v29);
      v10 = v28;
      if ( v20 == -1 )
        goto LABEL_19;
      v21 = *(_WORD *)(v9 + 2);
      *(_DWORD *)(v9 + 4) = v20;
      while ( v21 < (unsigned __int16)v12 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0LL, 0LL);
        *(_DWORD *)(v10 + 4LL * v21) = Cell;
        if ( Cell == -1 )
          goto LABEL_19;
        ++v21;
      }
    }
    else if ( (unsigned __int16)v12 < v11 )
    {
      v23 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v10 + 4LL * v23++));
      while ( v23 < *(_WORD *)(v9 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
      v24 = *(unsigned int *)(v9 + 4);
      v28 = 0LL;
      v25 = HvReallocateCell(BugCheckParameter2, v24, 4 * (unsigned int)(unsigned __int16)v12, 1, &v28, &v29);
      v10 = v28;
      if ( v25 == -1 )
        goto LABEL_19;
      *(_DWORD *)(v9 + 4) = v25;
    }
    v13 = 0;
    if ( !(_WORD)v12 )
    {
LABEL_11:
      *(_WORD *)(v9 + 2) = v12;
      v17 = 0;
      goto LABEL_12;
    }
    v14 = (char *)Src;
    while ( 1 )
    {
      v15 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v10 + 4LL * v13),
                      &v26);
      if ( !v15 )
        break;
      v16 = a3;
      if ( a3 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v15, v14, v16);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      a3 -= 16344;
      v14 += 16344;
      if ( ++v13 >= (unsigned __int16)v12 )
        goto LABEL_11;
    }
LABEL_19:
    v17 = -1073741670;
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    goto LABEL_14;
  }
  return 3221225626LL;
}
