/*
 * XREFs of WriteBuffField @ 0x1C001DF54
 * Callers:
 *     WriteFieldObj @ 0x1C001AB70 (WriteFieldObj.c)
 * Callees:
 *     WriteSystemMem @ 0x1C001DFF0 (WriteSystemMem.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rdx

  v4 = 0;
  v5 = a3[3] & 0xF;
  v8 = 1;
  if ( (unsigned int)(v5 - 1) <= 3 )
    v8 = 1 << (v5 - 1);
  v9 = *a3;
  if ( (unsigned int)v9 + v8 > *(_DWORD *)(a2 + 8) )
  {
    LogError(3222536196LL);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(211, *a3, *(_DWORD *)(a2 + 8), v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + v9), v8);
  }
  return v4;
}
