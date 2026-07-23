/*
 * XREFs of PspInsertExpansionEntry @ 0x14014AD68
 * Callers:
 *     PspInitializeQuotaBlock @ 0x14057CC48 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1400C486C (PspLockQuotaExpansion.c)
 */

void __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  KIRQL v6; // dl
  KIRQL v7; // [rsp+30h] [rbp+8h] BYREF

  PspLockQuotaExpansion(a1, &v7);
  v4 = (_QWORD *)(a2 + 80);
  v5 = *(_QWORD **)(a1 + 48);
  if ( *v5 != a1 + 40 )
    __fastfail(3u);
  v4[1] = v5;
  *v4 = a1 + 40;
  *v5 = v4;
  v6 = v7;
  *(_QWORD *)(a1 + 48) = v4;
  PspUnlockQuotaExpansion(a1, v6);
}
