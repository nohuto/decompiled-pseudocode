/*
 * XREFs of ValidateXPssPStates @ 0x1C001B848
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 * Callees:
 *     ValidatePssCore @ 0x1C0013274 (ValidatePssCore.c)
 *     ValidateMsrGenAddr @ 0x1C001B69C (ValidateMsrGenAddr.c)
 */

__int64 __fastcall ValidateXPssPStates(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a3 = 0;
  result = ValidatePssCore(a2);
  if ( (int)result < 0 )
  {
    *a3 = 128;
    return result;
  }
  result = ValidateMsrGenAddr((_BYTE *)a1);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 4) )
    {
      if ( !*(_QWORD *)(a1 + 16) )
        return 0LL;
      result = ValidateMsrGenAddr((_BYTE *)(a1 + 12));
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      result = 3221225485LL;
    }
  }
  *a3 = 32;
  return result;
}
