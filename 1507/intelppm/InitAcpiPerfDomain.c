/*
 * XREFs of InitAcpiPerfDomain @ 0x1C001301C
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0012E40 (InitAcpiProcessorDomains.c)
 * Callees:
 *     ValidateAcpi_PSD_TSD @ 0x1C0013064 (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0013644 (AcpiEval_PSD_TSD.c)
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x200u);
      v3 = v4;
    }
    else
    {
      result = 0LL;
    }
  }
  *(_QWORD *)(a1 + 416) = v3;
  return result;
}
