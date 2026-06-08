/*
 * XREFs of ValidateAcpi2PStates @ 0x1C0015928
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00157EC (InitAcpiPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     Validate_PCT_PTC @ 0x1C0015994 (Validate_PCT_PTC.c)
 *     ValidatePssCore @ 0x1C00159BC (ValidatePssCore.c)
 */

__int64 __fastcall ValidateAcpi2PStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = ValidatePssCore(a2);
  if ( (int)result < 0 )
  {
    *a3 |= 0x40u;
  }
  else
  {
    result = Validate_PCT_PTC(a1);
    if ( (int)result < 0 )
    {
      *a3 |= 0x20u;
    }
    else
    {
      if ( !qword_1C000EE40 )
        return 0LL;
      result = qword_1C000EE40(a1, a2, a3);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
