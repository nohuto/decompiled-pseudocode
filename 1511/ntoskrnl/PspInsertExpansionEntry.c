/*
 * XREFs of PspInsertExpansionEntry @ 0x140140B78
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140547554 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x140012F88 (PspLockQuotaExpansion.c)
 */

void __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  KIRQL v7; // dl
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  PspLockQuotaExpansion(a1, &v8, a3);
  v5 = (_QWORD *)(a2 + 80);
  v6 = *(_QWORD **)(a1 + 48);
  *v5 = a1 + 40;
  v5[1] = v6;
  if ( *v6 != a1 + 40 )
    __fastfail(3u);
  v7 = v8;
  *v6 = v5;
  *(_QWORD *)(a1 + 48) = v5;
  PspUnlockQuotaExpansion(a1, v7);
}
