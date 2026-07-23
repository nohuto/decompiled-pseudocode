/*
 * XREFs of MiSetPfnSlist @ 0x1401F2E24
 * Callers:
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetPfnSlist(__int64 a1, __int16 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 DemandZeroPte; // rax
  char v6; // dl
  __int64 result; // rax
  __int64 v8; // r8

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = v3 ^ (unsigned __int16)(v3 ^ (a2 << 12)) & 0xF000;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v4 = ((unsigned __int64)(v6 & 0xF) << 12) | DemandZeroPte & 0xFFFFFFFFFFFF0FFFuLL;
  }
  *(_QWORD *)(v2 + 16) = v4;
  result = MiUpdatePageFileHighInPte(v4, 4294967294LL);
  *(_QWORD *)(v8 + 16) = result;
  return result;
}
