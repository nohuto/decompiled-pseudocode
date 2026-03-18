/*
 * XREFs of BankField @ 0x1C0045CD0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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
