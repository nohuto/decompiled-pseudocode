/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1400DD150
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14014D5A8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = v2 + a2 - 1;
      if ( a2 <= (unsigned __int64)MmHighestUserAddress && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}
