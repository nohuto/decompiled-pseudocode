/*
 * XREFs of PspInsertExpansionEntry @ 0x14016E910
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1405BE3DC (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14012574C (PspLockQuotaExpansion.c)
 */

void __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  PspLockQuotaExpansion((_DWORD *)a1, &v9, a3, a4);
  v6 = (_QWORD *)(a2 + 80);
  v7 = *(_QWORD **)(a1 + 48);
  *v6 = a1 + 40;
  v6[1] = v7;
  if ( *v7 != a1 + 40 )
    __fastfail(3u);
  v8 = v9;
  *v7 = v6;
  *(_QWORD *)(a1 + 48) = v6;
  PspUnlockQuotaExpansion(a1, v8);
}
