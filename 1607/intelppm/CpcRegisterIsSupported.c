/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0004900
 * Callers:
 *     InitAcpiCpc @ 0x1C0015588 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C001C820 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
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
