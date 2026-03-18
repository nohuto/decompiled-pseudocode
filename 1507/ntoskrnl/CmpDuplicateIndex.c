/*
 * XREFs of CmpDuplicateIndex @ 0x14065AFC8
 * Callers:
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpDuplicateKey @ 0x140656794 (CmpDuplicateKey.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvDuplicateCell @ 0x1404F3250 (HvDuplicateCell.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v22 = -1;
  v23 = -1;
  v5 = 0LL;
  v6 = a2;
  v8 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  a2,
                  &v22);
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
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(v13, &v22);
      return 0xFFFFFFFFLL;
    }
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v11,
                      &v23);
    v5 = v14;
    if ( !v14 )
    {
LABEL_14:
      HvFreeCell(BugCheckParameter2, v12, v15, v16);
      v13 = BugCheckParameter2;
      goto LABEL_5;
    }
    *v14 = 26994;
    v17 = 0;
    if ( v9[1] )
    {
      while ( 1 )
      {
        v18 = HvDuplicateCell(BugCheckParameter2, *(unsigned int *)&v9[2 * v17 + 2], a3, 1);
        if ( v18 == -1 )
          break;
        v21 = v17++;
        v5[v21 + 1] = v18;
        ++*((_WORD *)v5 + 1);
        if ( v17 >= (unsigned __int16)v9[1] )
          goto LABEL_16;
      }
      if ( *((_WORD *)v5 + 1) )
      {
        do
          HvFreeCell(BugCheckParameter2, (unsigned int)v5[++v4], v19, v20);
        while ( v4 < *((unsigned __int16 *)v5 + 1) );
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
      goto LABEL_14;
    }
  }
  else
  {
    v12 = HvDuplicateCell(BugCheckParameter2, v6, a3, 1);
  }
LABEL_16:
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
  return v12;
}
