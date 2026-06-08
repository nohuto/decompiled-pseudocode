/*
 * XREFs of InitAcpiThrottleDomain @ 0x1C001DE50
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0012E40 (InitAcpiProcessorDomains.c)
 * Callees:
 *     ValidateAcpi_PSD_TSD @ 0x1C0013064 (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0013644 (AcpiEval_PSD_TSD.c)
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x2000u);
      v3 = v4;
    }
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 464) = v3;
  return result;
}
