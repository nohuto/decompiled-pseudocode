/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x1400AFEFC
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int16 v9; // [rsp+34h] [rbp+Ch]
  __int16 v10; // [rsp+36h] [rbp+Eh]

  v10 = 0;
  v8 = -1;
  v9 = 0;
  CmpLockHiveFlusherShared(a1);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v8);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 0xC) != 0xC )
    {
      if ( (unsigned __int8)HvMarkCellDirty(a1, a2, 0LL) )
        *(_WORD *)(v6 + 2) |= 0xCu;
      else
        v5 = -1073741670;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  }
  else
  {
    v5 = -1073741670;
  }
  CmpUnlockHiveFlusher(a1);
  return v5;
}
