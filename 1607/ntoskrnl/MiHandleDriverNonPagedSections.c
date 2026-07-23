/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x14047D840
 * Callers:
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x140081D40 (MiUnlockCodePage.c)
 *     MiDisablePagingOfDriver @ 0x14047C4D0 (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x14047C564 (MiSnapDriverRange.c)
 *     MiFindDriverNonPagedSections @ 0x14047D9A0 (MiFindDriverNonPagedSections.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, __int64 a2, int a3)
{
  char v5; // r10
  unsigned int v6; // ebx
  char v7; // r15
  char v8; // si
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return 0LL;
  v6 = 0;
  v7 = 1;
  if ( a3 == 1 )
  {
    v8 = 2;
    if ( (dword_1403A9134 & 1) == 0 && (v5 & 2) == 0 )
    {
      if ( (v5 & 1) == 0 )
      {
        MiDisablePagingOfDriver(a1);
        v7 = 2;
      }
      goto LABEL_7;
    }
    if ( (v5 & 1) != 0 )
      v8 = 1;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = MiSnapDriverRange(a1, v10, 8, 0LL, &v17, v15);
      v13 = v17;
      v10 = v12;
      if ( !v17 )
        goto LABEL_18;
      if ( v11 )
      {
        if ( v17 == v11 )
          return v6;
        MiUnlockCodePage(v17, v15[0]);
LABEL_18:
        if ( !v10 )
          return v6;
      }
      else
      {
        v6 = MiLockCode(a1, v17, v15[0], v8);
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_18;
        v10 = 0;
        v11 = v13;
      }
    }
  }
  if ( (dword_1403A9134 & 1) != 0 )
  {
    do
    {
      v6 = MiSnapDriverRange(a1, v6, 8, 0LL, &v17, v15);
      if ( v17 )
        MiUnlockCodePage(v17, v15[0]);
    }
    while ( v6 );
    return 0LL;
  }
LABEL_7:
  v16 = 0;
  v9 = 0LL;
  v17 = 0LL;
  while ( (int)MiFindDriverNonPagedSections(a1, &v16, &v17, v15) >= 0 )
  {
    if ( a3 == 1 )
    {
      v6 = MiLockCode(a1, v17, v15[0], v7);
      if ( (v6 & 0x80000000) != 0 )
      {
        v9 = v17;
        a3 = 0;
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
