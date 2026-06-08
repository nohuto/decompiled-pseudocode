/*
 * XREFs of InitAcpiPerfDomain @ 0x1C0015764
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C001562C (InitAcpiProcessorDomains.c)
 * Callees:
 *     ValidateAcpi_PSD_TSD @ 0x1C00157AC (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0015D8C (AcpiEval_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  result = AcpiEval_PSD_TSD(a1, 1146310751LL, &v4);
  if ( (int)result < 0 )
  {
    v3 = 0LL;
  }
  else
  {
    result = ValidateAcpi_PSD_TSD(v4);
    if ( (int)result < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x200u);
      v3 = v4;
    }
    else
    {
      result = 0LL;
    }
  }
  *(_QWORD *)(a1 + 424) = v3;
  return result;
}
