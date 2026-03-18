/*
 * XREFs of ExFreePoolSanityChecks @ 0x1406D5158
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x1406B6590 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1400794DC (MmDeterminePoolType.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KevSkipVerification @ 0x1402228A0 (KevSkipVerification.c)
 */

__int64 ExFreePoolSanityChecks()
{
  __int64 result; // rax
  ULONG_PTR v1; // r10
  ULONG_PTR v2; // r11
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v4; // r9
  unsigned int *v5; // r9
  char v6; // cl

  result = KevSkipVerification();
  v2 = 0LL;
  if ( !(_DWORD)result )
  {
    if ( v1 <= (unsigned __int64)MmHighestUserAddress )
      KeBugCheckEx(0xC4u, 0x10uLL, v1, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = MmIsSpecialPoolAddress(v1), !(_DWORD)result) )
    {
      if ( (v1 & 0xFFF) != 0 )
      {
        if ( (v1 & 0xF) != 0 )
          KeBugCheckEx(0xC4u, 0x16uLL, 0x1E60uLL, v1, v2);
        v5 = (unsigned int *)(v1 - 16);
        v6 = *(_BYTE *)(v1 - 16 + 3);
        if ( (v6 & 3) == 0 )
          KeBugCheckEx(0xC4u, 0x13uLL, 0x1E6AuLL, (ULONG_PTR)v5, *v5);
        result = KeGetCurrentIrql();
        if ( (v6 & 1) != 0 )
        {
          if ( (unsigned __int8)result > 1u )
            KeBugCheckEx(0xC4u, 0x11uLL, KeGetCurrentIrql(), v6 & 3, v1);
        }
        else if ( (unsigned __int8)result > 2u )
        {
          KeBugCheckEx(0xC4u, 0x12uLL, KeGetCurrentIrql(), v6 & 3, v1);
        }
        if ( (v6 & 2) == 0 )
          KeBugCheckEx(0xC4u, 0x14uLL, 0x1E87uLL, (ULONG_PTR)v5, v2);
      }
      else
      {
        result = MmDeterminePoolType(v1);
        v4 = (int)result;
        if ( (result & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result > 1u )
            KeBugCheckEx(0xC4u, 0x11uLL, KeGetCurrentIrql(), v4, BugCheckParameter4);
        }
        else if ( KeGetCurrentIrql() > 2u )
        {
          KeBugCheckEx(0xC4u, 0x12uLL, KeGetCurrentIrql(), (int)result, BugCheckParameter4);
        }
      }
    }
  }
  return result;
}
