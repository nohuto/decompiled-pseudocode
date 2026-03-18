/*
 * XREFs of CmpInsertSecurityCellList @ 0x1405554C0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpInsertSecurityCellList(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  __int64 v5; // rsi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  char v16; // [rsp+20h] [rbp-20h]
  int v17; // [rsp+24h] [rbp-1Ch] BYREF
  int v18; // [rsp+28h] [rbp-18h] BYREF
  int v19; // [rsp+2Ch] [rbp-14h] BYREF
  int v20; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v21[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v22; // [rsp+80h] [rbp+40h]

  v5 = 0LL;
  v17 = -1;
  v18 = -1;
  v21[0] = -1;
  v20 = -1;
  v7 = 0LL;
  v19 = -1;
  v8 = 0LL;
  v22 = 0;
  v9 = 0LL;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)a3,
          v21);
  v12 = v10;
  if ( v10 )
  {
    v16 = 1;
    if ( a3 < 0 )
    {
      *(_DWORD *)(v10 + 8) = a3;
      *(_DWORD *)(v10 + 4) = a3;
      goto LABEL_4;
    }
    v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v20);
    v5 = v13;
    if ( !v13 )
    {
LABEL_39:
      v16 = 0;
LABEL_12:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
      LOBYTE(v10) = v16;
      return v10;
    }
    if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
    {
      if ( !a4 )
      {
        *(_DWORD *)(v12 + 8) = a3;
        *(_DWORD *)(v12 + 4) = a3;
        goto LABEL_4;
      }
    }
    else if ( !a4 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             *(unsigned int *)(v13 + 16),
             &v19);
      if ( !v9 )
      {
LABEL_37:
        if ( v5 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
        goto LABEL_39;
      }
      goto LABEL_17;
    }
    v9 = v13;
LABEL_17:
    v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 44),
            &v18);
    v8 = v14;
    if ( !v14 )
    {
LABEL_34:
      if ( v9 && v9 != v5 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
      goto LABEL_37;
    }
    v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v14 + 4),
           &v17);
    if ( !v7 )
    {
LABEL_32:
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
      goto LABEL_34;
    }
    if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 44), 0, 0LL)
      || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v8 + 4), 0, 0LL) )
    {
LABEL_30:
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
      goto LABEL_32;
    }
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v8 + 4) = a3;
    *(_DWORD *)(v7 + 8) = a3;
    v22 = 1;
LABEL_4:
    if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, (unsigned int)a3, 0, v11) >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
      if ( v9 && v9 != v5 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
      if ( v5 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      goto LABEL_12;
    }
    if ( v22 )
    {
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(v12 + 4);
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(v12 + 8);
    }
    goto LABEL_30;
  }
  return v10;
}
