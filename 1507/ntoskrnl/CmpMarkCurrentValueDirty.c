/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x1405989E8
 * Callers:
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 * Callees:
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rax
  unsigned int ValueByName; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = -1;
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v6);
  if ( v3 )
  {
    CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v3, (unsigned __int16 *)&CmpSelectString, &v7);
    LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
    if ( v7 != -1 )
    {
      v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v7, &v6);
      if ( v3 )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter2, v3, (int)&CmpCurrentString);
        LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
        if ( ValueByName != -1 )
          LOBYTE(v3) = HvpMarkCellDirty(BugCheckParameter2, ValueByName, 0, 0LL);
      }
    }
  }
  return v3;
}
