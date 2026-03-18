/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x14057516C
 * Callers:
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     MiDisablePagingOfDriver @ 0x140573F50 (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 *     MiFindDriverNonPagedSections @ 0x14057531C (MiFindDriverNonPagedSections.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  unsigned __int64 v3; // r9
  int v5; // edi
  unsigned int v6; // ebx
  char v7; // r15
  char v8; // si
  ULONG_PTR *v9; // rsi
  unsigned int v10; // r12d
  ULONG_PTR *v11; // r15
  unsigned int v12; // eax
  ULONG_PTR *v13; // rdi
  unsigned __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR *v17; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = a3;
  if ( (*(_BYTE *)(8 * ((v3 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v3 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = 1;
  if ( a3 == 1 )
  {
    v8 = 2;
    if ( (dword_1403D00D8 & 1) == 0 && (a2 & 2) == 0 )
    {
      if ( (a2 & 1) == 0 )
      {
        MiDisablePagingOfDriver(a1);
        v7 = 2;
      }
      goto LABEL_9;
    }
    if ( (a2 & 1) != 0 )
      v8 = 1;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = MiSnapDriverRange(a1, v10, 8, 0LL, (unsigned __int64 *)&v17, v15);
      v13 = v17;
      v10 = v12;
      if ( !v17 )
        goto LABEL_20;
      if ( v11 )
      {
        if ( v17 == v11 )
          return v6;
        MiUnlockCodePage(v17, v15[0]);
LABEL_20:
        if ( !v10 )
          return v6;
      }
      else
      {
        v6 = MiLockCode(a1, v17, v15[0], v8);
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_20;
        v10 = 0;
        v11 = v13;
      }
    }
  }
  if ( (dword_1403D00D8 & 1) != 0 )
  {
    do
    {
      v6 = MiSnapDriverRange(a1, v6, 8, 0LL, (unsigned __int64 *)&v17, v15);
      if ( v17 )
        MiUnlockCodePage(v17, v15[0]);
    }
    while ( v6 );
    return 0LL;
  }
LABEL_9:
  v16 = 0;
  v9 = 0LL;
  v17 = 0LL;
  while ( (int)MiFindDriverNonPagedSections(a1, &v16, &v17, v15) >= 0 )
  {
    if ( v5 == 1 )
    {
      v6 = MiLockCode(a1, v17, v15[0], v7);
      if ( (v6 & 0x80000000) != 0 )
      {
        v9 = v17;
        v5 = 0;
        v16 = 0;
      }
    }
    else
    {
      if ( v17 == v9 )
        return v6;
      MiUnlockCodePage(v17, v15[0]);
    }
  }
  return v6;
}
