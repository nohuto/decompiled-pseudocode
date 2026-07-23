/*
 * XREFs of CmpInsertSecurityCellList @ 0x1404C84F8
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     CmpAddSecurityCellToCache @ 0x1403FA268 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpInsertSecurityCellList(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  char v15; // [rsp+20h] [rbp-30h]
  _DWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-8h] BYREF
  char v21; // [rsp+90h] [rbp+40h]

  v16[1] = 0;
  v16[0] = -1;
  v17[0] = -1;
  v20[0] = -1;
  v6 = 0LL;
  v19[0] = -1;
  v7 = 0LL;
  v18[0] = -1;
  v8 = 0LL;
  v17[1] = 0;
  v9 = 0LL;
  v20[1] = 0;
  v19[1] = 0;
  v18[1] = 0;
  v21 = 0;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)a3,
          v20);
  v11 = v10;
  if ( v10 )
  {
    v15 = 1;
    if ( a3 < 0 )
    {
      *(_DWORD *)(v10 + 8) = a3;
      *(_DWORD *)(v10 + 4) = a3;
      goto LABEL_12;
    }
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v19);
    v8 = v12;
    if ( !v12 )
    {
LABEL_39:
      v15 = 0;
LABEL_22:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
      LOBYTE(v10) = v15;
      return v10;
    }
    if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
    {
      if ( !a4 )
      {
        *(_DWORD *)(v11 + 8) = a3;
        *(_DWORD *)(v11 + 4) = a3;
        goto LABEL_12;
      }
    }
    else if ( !a4 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             *(unsigned int *)(v12 + 16),
             v18);
      if ( !v9 )
      {
LABEL_37:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
        goto LABEL_39;
      }
      goto LABEL_7;
    }
    v9 = v12;
LABEL_7:
    v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 44),
            v17);
    v7 = v13;
    if ( !v13 )
    {
LABEL_34:
      if ( v9 && v9 != v8 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
      goto LABEL_37;
    }
    v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v13 + 4),
           v16);
    if ( !v6 )
    {
LABEL_32:
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
      goto LABEL_34;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 44))
      || !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v7 + 4)) )
    {
LABEL_30:
      if ( v6 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
      goto LABEL_32;
    }
    *(_DWORD *)(v11 + 4) = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v11 + 8) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v7 + 4) = a3;
    *(_DWORD *)(v6 + 8) = a3;
    v21 = 1;
LABEL_12:
    if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, (unsigned int)a3, 0) >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
      if ( v9 && v9 != v8 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
      goto LABEL_22;
    }
    if ( v21 )
    {
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v11 + 8);
    }
    goto LABEL_30;
  }
  return v10;
}
