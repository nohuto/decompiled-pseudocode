/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0002E00
 * Callers:
 *     InitAcpiCpc @ 0x1C001552C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C00178AC (InitCpcStatesInternal.c)
 *     ValidateAcpiCPC @ 0x1C001C91C (ValidateAcpiCPC.c)
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
