/*
 * XREFs of RegEventHandler @ 0x1C0022ABC
 * Callers:
 *     AMLIRegEventHandler @ 0x1C00228D4 (AMLIRegEventHandler.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(3222536206LL);
    AcpiDiagTraceAmlError(0LL, 3222536206LL);
    PrintDebugMessage(165, 0, 0, 0, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
