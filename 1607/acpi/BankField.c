/*
 * XREFs of BankField @ 0x1C005CE00
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall BankField(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 72LL));
    if ( !NameSpaceObject )
    {
      NameSpaceObject = -1072431095;
      if ( MEMORY[0x42] == 10 )
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 72LL), 0LL, 0LL, 0LL);
      }
      else
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
