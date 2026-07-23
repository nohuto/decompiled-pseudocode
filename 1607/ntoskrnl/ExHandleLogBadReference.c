/*
 * XREFs of ExHandleLogBadReference @ 0x14022C880
 * Callers:
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     ExMapHandleToPointerEx @ 0x14051C190 (ExMapHandleToPointerEx.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401D3654 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
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
