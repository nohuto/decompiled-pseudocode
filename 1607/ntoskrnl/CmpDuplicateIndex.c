/*
 * XREFs of CmpDuplicateIndex @ 0x140609E24
 * Callers:
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpDuplicateKey @ 0x1405FECC0 (CmpDuplicateKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14060EC9C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvDuplicateCell @ 0x1404C642C (HvDuplicateCell.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r15d
  _DWORD *v7; // rsi
  _WORD *v8; // r13
  unsigned int v10; // eax
  unsigned int v11; // r15d
  ULONG_PTR v12; // rcx
  _DWORD *v13; // rax
  unsigned int v14; // r12d
  int v15; // ecx
  __int64 v16; // rax
  int v17; // [rsp+60h] [rbp+40h] BYREF
  int v18; // [rsp+64h] [rbp+44h]
  unsigned int v19; // [rsp+70h] [rbp+50h]
  int v20; // [rsp+78h] [rbp+58h] BYREF
  int v21; // [rsp+7Ch] [rbp+5Ch]

  v19 = a3;
  v3 = 0;
  v18 = 0;
  v17 = -1;
  v20 = -1;
  v6 = a2;
  v21 = 0;
  v7 = 0LL;
  v8 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  a2,
                  &v17);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  if ( *v8 == 26994 )
  {
    v10 = HvDuplicateCell(BugCheckParameter2, v6, a3, 0);
    v11 = v10;
    v12 = BugCheckParameter2;
    if ( v10 == -1 )
    {
LABEL_5:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(v12, &v17);
      return 0xFFFFFFFFLL;
    }
    v13 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v10,
                      &v20);
    v7 = v13;
    if ( !v13 )
    {
LABEL_14:
      HvFreeCell(BugCheckParameter2, v11);
      v12 = BugCheckParameter2;
      goto LABEL_5;
    }
    *v13 = 26994;
    v14 = 0;
    if ( v8[1] )
    {
      while ( 1 )
      {
        v15 = HvDuplicateCell(BugCheckParameter2, *(unsigned int *)&v8[2 * v14 + 2], v19, 1);
        if ( v15 == -1 )
          break;
        v16 = v14++;
        v7[v16 + 1] = v15;
        ++*((_WORD *)v7 + 1);
        if ( v14 >= (unsigned __int16)v8[1] )
          goto LABEL_16;
      }
      if ( *((_WORD *)v7 + 1) )
      {
        do
          HvFreeCell(BugCheckParameter2, (unsigned int)v7[++v3]);
        while ( v3 < *((unsigned __int16 *)v7 + 1) );
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      goto LABEL_14;
    }
  }
  else
  {
    v11 = HvDuplicateCell(BugCheckParameter2, v6, a3, 1);
  }
LABEL_16:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  return v11;
}
