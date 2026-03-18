/*
 * XREFs of ExHandleLogBadReference @ 0x14022CA54
 * Callers:
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointerEx @ 0x1404A3D90 (ExMapHandleToPointerEx.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     ObpCloseHandle @ 0x14050C774 (ObpCloseHandle.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 * Callees:
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401D3828 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x1406AD814 (ExpUpdateDebugInfo.c)
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
