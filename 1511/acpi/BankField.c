/*
 * XREFs of BankField @ 0x1C0045710
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
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
      if ( MEMORY[0x3A] == 10 )
      {
        LogError(-1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 72LL), 0LL, 0LL, 0LL);
      }
      else
      {
        LogError(-1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
