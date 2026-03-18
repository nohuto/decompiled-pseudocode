/*
 * XREFs of CmpMarkKeyDirty @ 0x1403DA3B4
 * Callers:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 * Callees:
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  char v3; // r14
  unsigned int v4; // r13d
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // bl
  __int64 v14; // r14
  int v16; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v17[3]; // [rsp+24h] [rbp-Ch] BYREF
  int v18; // [rsp+70h] [rbp+40h] BYREF
  char v19; // [rsp+80h] [rbp+50h]
  int v20; // [rsp+88h] [rbp+58h] BYREF

  v19 = a3;
  v3 = a3;
  v17[0] = -1;
  v16 = -1;
  v4 = BugCheckParameter3;
  v18 = -1;
  v20 = -1;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         v17);
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 2) & 2) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v4) )
    {
      v9 = *(unsigned int *)(v8 + 48);
      if ( (_DWORD)v9 == -1 || (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v9) )
      {
        v10 = *(unsigned int *)(v8 + 44);
        if ( (_DWORD)v10 == -1 )
          goto LABEL_11;
        if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v10) )
        {
          v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  *(unsigned int *)(v8 + 44),
                  &v18);
          v12 = v11;
          if ( v11 )
          {
            if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 4))
              && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 8)) )
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
LABEL_11:
              v13 = 1;
              if ( (*(_BYTE *)(v8 + 2) & 0x40) != 0 || !*(_DWORD *)(v8 + 36) )
                goto LABEL_21;
              if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v8 + 40)) )
              {
                v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)(v8 + 40),
                       &v16);
                if ( v6 )
                {
                  v14 = 0LL;
                  if ( *(_DWORD *)(v8 + 36) )
                  {
                    while ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v6 + 4 * v14))
                         && (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                              BugCheckParameter2,
                              *(unsigned int *)(v6 + 4 * v14),
                              &v20) )
                    {
                      if ( !(unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) )
                      {
                        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
                        goto LABEL_31;
                      }
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
                      v14 = (unsigned int)(v14 + 1);
                      if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 36) )
                        goto LABEL_20;
                    }
                    goto LABEL_31;
                  }
LABEL_20:
                  v3 = v19;
LABEL_21:
                  if ( (*(_BYTE *)(v8 + 2) & 4) != 0
                    || !v3
                    || CmpMarkIndexDirty(BugCheckParameter2, *(_DWORD *)(v8 + 16), v4)
                    && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v8 + 16)) )
                  {
LABEL_25:
                    if ( v6 )
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
                    goto LABEL_27;
                  }
LABEL_31:
                  v13 = 0;
                  goto LABEL_25;
                }
              }
              goto LABEL_33;
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
          }
        }
      }
    }
LABEL_33:
    v13 = 0;
    goto LABEL_27;
  }
  v13 = 1;
LABEL_27:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  return v13;
}
