/*
 * XREFs of CmpMarkKeyDirty @ 0x1403FF10C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  char v3; // r14
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // bl
  unsigned int v14; // r14d
  _DWORD v16[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v17[2]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+84h] [rbp+44h]
  char v21; // [rsp+90h] [rbp+50h]

  v21 = a3;
  v3 = a3;
  v18[0] = -1;
  v18[1] = 0;
  v17[0] = -1;
  v4 = 0LL;
  v17[1] = 0;
  v5 = BugCheckParameter3;
  v19 = -1;
  v20 = 0;
  v16[0] = -1;
  v16[1] = 0;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         v18);
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 2) & 2) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v5) )
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
                  &v19);
          v12 = v11;
          if ( v11 )
          {
            if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 4))
              && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 8)) )
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
LABEL_11:
              v13 = 1;
              if ( (*(_BYTE *)(v8 + 2) & 0x40) != 0 || !*(_DWORD *)(v8 + 36) )
                goto LABEL_21;
              if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v8 + 40)) )
              {
                v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)(v8 + 40),
                       v17);
                if ( v4 )
                {
                  v14 = 0;
                  if ( *(_DWORD *)(v8 + 36) )
                  {
                    while ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v4 + 4LL * v14))
                         && (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                              BugCheckParameter2,
                              *(unsigned int *)(v4 + 4LL * v14),
                              v16) )
                    {
                      if ( !(unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) )
                      {
                        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
                        goto LABEL_31;
                      }
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
                      if ( ++v14 >= *(_DWORD *)(v8 + 36) )
                        goto LABEL_20;
                    }
                    goto LABEL_31;
                  }
LABEL_20:
                  v3 = v21;
LABEL_21:
                  if ( (*(_BYTE *)(v8 + 2) & 4) != 0
                    || !v3
                    || (unsigned __int8)CmpMarkIndexDirty(BugCheckParameter2)
                    && (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v8 + 16)) )
                  {
LABEL_25:
                    if ( v4 )
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
                    goto LABEL_27;
                  }
LABEL_31:
                  v13 = 0;
                  goto LABEL_25;
                }
              }
              goto LABEL_33;
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
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
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  return v13;
}
