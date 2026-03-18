/*
 * XREFs of MiUpdateUserMappings @ 0x14039DFB8
 * Callers:
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  __int64 *v0; // rsi
  __int64 *PteAddress; // rdi
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbx

  v0 = (__int64 *)MmHighestUserAddress;
  PteAddress = 0LL;
  v2 = 4LL;
  do
  {
    PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)PteAddress);
    result = MiGetPteAddress((unsigned __int64)v0);
    v0 = (__int64 *)result;
    --v2;
  }
  while ( v2 );
  if ( (unsigned __int64)PteAddress <= result )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(PteAddress);
      if ( (result & 1) != 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        v4 = result & 0xFFFFFFFFFFFFFBFEuLL | 1;
LABEL_8:
        *PteAddress = v4;
        result = MiPteInShadowRange((__int64)PteAddress);
        if ( (_DWORD)result )
          result = (unsigned __int64)MiWritePteShadow((__int64)PteAddress, v4);
      }
      if ( ++PteAddress > v0 )
        return result;
    }
    v4 = result & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    goto LABEL_8;
  }
  return result;
}
