/*
 * XREFs of CmpMarkKeyValuesDirty @ 0x140608E88
 * Callers:
 *     CmpFreeKeyValues @ 0x140608CBC (CmpFreeKeyValues.c)
 * Callees:
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  char v6; // di
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+40h] BYREF
  int v18; // [rsp+74h] [rbp+44h]
  int v19; // [rsp+78h] [rbp+48h] BYREF
  int v20; // [rsp+7Ch] [rbp+4Ch]

  v16[0] = -1;
  v3 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v16[1] = 0;
  v17 = -1;
  v6 = 1;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  if ( !v3 )
    return 1;
  if ( !HvpMarkCellDirty(BugCheckParameter2, a2, 0) )
    return 0;
  v8 = *(unsigned int *)(a3 + 48);
  if ( (_DWORD)v8 != -1 && !HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
    return 0;
  v9 = *(unsigned int *)(a3 + 44);
  if ( (_DWORD)v9 == -1 )
    goto LABEL_14;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
    return 0;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(a3 + 44),
          &v17);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v10 + 4), 0)
    || (v12 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 8), 0), v6 = 1, !v12) )
  {
    v6 = 0;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  if ( v6 )
  {
LABEL_14:
    if ( *(_DWORD *)(a3 + 36) )
    {
      if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a3 + 40), 0)
        && (v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    *(unsigned int *)(a3 + 40),
                    v16)) != 0 )
      {
        v14 = 0;
        if ( *(_DWORD *)(a3 + 36) )
        {
          while ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v13 + 4LL * v14), 0) )
          {
            v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    *(unsigned int *)(v13 + 4LL * v14),
                    &v19);
            if ( !v15 )
              break;
            v6 = CmpMarkValueDataDirty(BugCheckParameter2, v15);
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
            if ( v6 )
            {
              if ( ++v14 < *(_DWORD *)(a3 + 36) )
                continue;
            }
            goto LABEL_25;
          }
          v6 = 0;
        }
LABEL_25:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
      }
      else
      {
        return 0;
      }
    }
  }
  return v6;
}
