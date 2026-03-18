/*
 * XREFs of CmpMarkKeyValuesDirty @ 0x14050FA7C
 * Callers:
 *     CmpFreeKeyValues @ 0x14050F9C8 (CmpFreeKeyValues.c)
 * Callees:
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  bool v4; // zf
  char v6; // di
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  _DWORD v15[10]; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v15[0] = -1;
  v6 = 1;
  v16 = -1;
  v17 = -1;
  if ( !v4 )
    return 1;
  if ( HvpMarkCellDirty(BugCheckParameter2, a2, 0) )
  {
    v7 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v7 == -1 || HvpMarkCellDirty(BugCheckParameter2, v7, 0) )
    {
      v8 = *(unsigned int *)(a3 + 44);
      if ( (_DWORD)v8 == -1 )
        goto LABEL_11;
      if ( HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
      {
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               *(unsigned int *)(a3 + 44),
               &v16);
        v10 = v9;
        if ( v9 )
        {
          v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 4), 0)
            && HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v10 + 8), 0);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
          if ( !v6 )
            return v6;
LABEL_11:
          if ( *(_DWORD *)(a3 + 36) )
          {
            if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a3 + 40), 0)
              && (v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          *(unsigned int *)(a3 + 40),
                          v15)) != 0 )
            {
              v12 = 0LL;
              if ( *(_DWORD *)(a3 + 36) )
              {
                while ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 4 * v12), 0) )
                {
                  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          *(unsigned int *)(v11 + 4 * v12),
                          &v17);
                  if ( !v13 )
                    break;
                  v6 = CmpMarkValueDataDirty(BugCheckParameter2, v13);
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
                  if ( v6 )
                  {
                    v12 = (unsigned int)(v12 + 1);
                    if ( (unsigned int)v12 < *(_DWORD *)(a3 + 36) )
                      continue;
                  }
                  goto LABEL_19;
                }
                v6 = 0;
              }
LABEL_19:
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
            }
            else
            {
              return 0;
            }
          }
          return v6;
        }
      }
    }
  }
  return 0;
}
