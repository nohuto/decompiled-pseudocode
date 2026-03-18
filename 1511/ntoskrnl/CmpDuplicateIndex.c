/*
 * XREFs of CmpDuplicateIndex @ 0x1405E3E4C
 * Callers:
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpDuplicateKey @ 0x1405E0AE4 (CmpDuplicateKey.c)
 * Callees:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvDuplicateCell @ 0x1404BD9A0 (HvDuplicateCell.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  _WORD *v8; // rax
  _WORD *v9; // r15
  unsigned int v11; // eax
  unsigned int v12; // r14d
  ULONG_PTR v13; // rcx
  _DWORD *v14; // rax
  unsigned int v15; // r12d
  int v16; // ecx
  __int64 v17; // rax
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v18 = -1;
  v19 = -1;
  v5 = 0LL;
  v6 = a2;
  v8 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  a2,
                  &v18);
  v9 = v8;
  if ( !v8 )
    return 0xFFFFFFFFLL;
  if ( *v8 == 26994 )
  {
    v11 = HvDuplicateCell(BugCheckParameter2, v6, a3, 0);
    v12 = v11;
    v13 = BugCheckParameter2;
    if ( v11 == -1 )
    {
LABEL_5:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(v13, &v18);
      return 0xFFFFFFFFLL;
    }
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v11,
                      &v19);
    v5 = v14;
    if ( !v14 )
    {
LABEL_14:
      HvFreeCell(BugCheckParameter2, v12);
      v13 = BugCheckParameter2;
      goto LABEL_5;
    }
    *v14 = 26994;
    v15 = 0;
    if ( v9[1] )
    {
      while ( 1 )
      {
        v16 = HvDuplicateCell(BugCheckParameter2, *(unsigned int *)&v9[2 * v15 + 2], a3, 1);
        if ( v16 == -1 )
          break;
        v17 = v15++;
        v5[v17 + 1] = v16;
        ++*((_WORD *)v5 + 1);
        if ( v15 >= (unsigned __int16)v9[1] )
          goto LABEL_16;
      }
      if ( *((_WORD *)v5 + 1) )
      {
        do
          HvFreeCell(BugCheckParameter2, (unsigned int)v5[++v4]);
        while ( v4 < *((unsigned __int16 *)v5 + 1) );
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
      goto LABEL_14;
    }
  }
  else
  {
    v12 = HvDuplicateCell(BugCheckParameter2, v6, a3, 1);
  }
LABEL_16:
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  return v12;
}
