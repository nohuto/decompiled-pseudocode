/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x1403CD42C
 * Callers:
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiUnlockCodePage @ 0x1400A1DD0 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiFindDriverNonPagedSections @ 0x1403CD5D0 (MiFindDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x1403CE89C (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  unsigned __int64 v5; // rcx
  int v6; // ebx
  char v7; // r15
  char v8; // si
  unsigned __int64 v9; // rsi
  int v10; // r12d
  unsigned __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v5 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v5 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v5 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)MiGetPdeAddress(v5) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = 1;
  if ( a3 == 1 )
  {
    v8 = 2;
    if ( (dword_1403810E8 & 1) == 0 && (a2 & 2) == 0 )
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
      v12 = MiSnapDriverRange(a1, v10, 8, 0, (__int64)&v17, (__int64)v15);
      v13 = v17;
      v10 = v12;
      if ( !v17 )
        goto LABEL_20;
      if ( v11 )
      {
        if ( v17 == v11 )
          return (unsigned int)v6;
        MiUnlockCodePage(v17, v15[0]);
LABEL_20:
        if ( !v10 )
          return (unsigned int)v6;
      }
      else
      {
        v6 = MiLockCode(a1, v17, v15[0], v8);
        if ( v6 >= 0 )
          goto LABEL_20;
        v10 = 0;
        v11 = v13;
      }
    }
  }
  if ( (dword_1403810E8 & 1) != 0 )
  {
    do
    {
      v6 = MiSnapDriverRange(a1, v6, 8, 0, (__int64)&v17, (__int64)v15);
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
    if ( a3 == 1 )
    {
      v6 = MiLockCode(a1, v17, v15[0], v7);
      if ( v6 < 0 )
      {
        v9 = v17;
        a3 = 0;
        v16 = 0;
      }
    }
    else
    {
      if ( v17 == v9 )
        return (unsigned int)v6;
      MiUnlockCodePage(v17, v15[0]);
    }
  }
  return (unsigned int)v6;
}
