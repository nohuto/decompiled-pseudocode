/*
 * XREFs of ExHandleLogBadReference @ 0x140213858
 * Callers:
 *     ExMapHandleToPointerEx @ 0x1403F2EDC (ExMapHandleToPointerEx.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401C4670 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 */

void __fastcall ExHandleLogBadReference(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      ExpUpdateDebugInfo(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      if ( !KeIsAttachedProcess()
        && BugCheckParameter2 == KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] )
      {
        if ( (NtGlobalFlag & 0x100) != 0 )
          DbgPrintEx(
            0x5Du,
            0,
            "AVRF: Invalid handle %p in process %p \n",
            (const void *)BugCheckParameter1,
            KeGetCurrentThread()->ApcState.Process);
        KeRaiseUserException(0xC0000008);
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
}
