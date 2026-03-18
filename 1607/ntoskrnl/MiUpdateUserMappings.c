/*
 * XREFs of MiUpdateUserMappings @ 0x1403C96BC
 * Callers:
 *     MmUpdateHiberMappings @ 0x1403C9630 (MmUpdateHiberMappings.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiMakeQuasiPte @ 0x1401718C0 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x1401718D0 (MiRevertQuasiPte.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  unsigned __int64 v0; // r9
  unsigned __int64 v1; // r10
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 QuasiPte; // rax
  unsigned __int64 *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  v0 = 0LL;
  do
  {
    MiGetPteAddress(v0);
    result = MiGetPteAddress(v1);
  }
  while ( v3 != 1 );
  if ( v0 <= result )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(v0);
      if ( (result & 1) != 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        QuasiPte = MiRevertQuasiPte(result);
LABEL_8:
        *v7 = QuasiPte;
        result = MiPteInShadowRange((unsigned __int64)v7);
        if ( (_DWORD)result )
          result = (unsigned __int64)MiWritePteShadow(v9, v8);
      }
      v0 = v4 + 8;
      if ( v0 > v5 )
        return result;
    }
    QuasiPte = MiMakeQuasiPte(result);
    goto LABEL_8;
  }
  return result;
}
