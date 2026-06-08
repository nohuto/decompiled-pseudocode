/*
 * XREFs of InitAcpiThrottleDomain @ 0x1C001F350
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C001562C (InitAcpiProcessorDomains.c)
 * Callees:
 *     ValidateAcpi_PSD_TSD @ 0x1C00157AC (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0015D8C (AcpiEval_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  _DWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  result = AcpiEval_PSD_TSD(a1, 1146311775, &v4);
  if ( (int)result >= 0 )
  {
    result = ValidateAcpi_PSD_TSD(v4);
    if ( (int)result >= 0 )
    {
      result = 0LL;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x2000u);
      v3 = v4;
    }
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 472) = v3;
  return result;
}
