/*
 * XREFs of CpcRegisterIsSupported @ 0x1C00032CC
 * Callers:
 *     InitAcpiCpc @ 0x1C00164AC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     ValidateAcpiCPC @ 0x1C001BA9C (ValidateAcpiCPC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcRegisterIsSupported(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1LL;
  return result;
}
