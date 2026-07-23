/*
 * XREFs of MiGetSmallZeroPtes @ 0x14008A774
 * Callers:
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 *__fastcall MiGetSmallZeroPtes(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 PteTimeStamp; // rax
  __int64 v8; // r9
  __int64 updated; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+24h] [rbp-D4h]
  int v16; // [rsp+28h] [rbp-D0h]
  int v17; // [rsp+2Ch] [rbp-CCh]
  __int64 v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C0h]

  v2 = *(__int64 **)(a1 + 136);
  v4 = MI_READ_PTE_LOCK_FREE(v2);
  PteTimeStamp = MiGetPteTimeStamp(v4, v5, v6);
  v8 = PteTimeStamp;
  if ( a2 > PteTimeStamp )
  {
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v16 = 20;
    MiInsertTbFlushEntry(
      &v14,
      (__int64)((PteTimeStamp << 28) + ((_QWORD)v2 << 25)) >> 16,
      (unsigned int)(256 - PteTimeStamp));
    MiFlushTbList(&v14);
    v8 = 256LL;
  }
  updated = MiUpdatePageFileHighInPte(v4, v8 - a2);
  *v2 = updated;
  if ( (unsigned int)MiPteInShadowRange(v2, updated) )
    MiWritePteShadow(v11, v10);
  return &v2[v12];
}
