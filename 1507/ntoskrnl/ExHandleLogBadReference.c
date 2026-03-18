/*
 * XREFs of ExHandleLogBadReference @ 0x1402631AC
 * Callers:
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x14050538C (ExMapHandleToPointerEx.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402008EC (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].ActiveProcessors.Bitmap[5] )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          return (struct _KTHREAD *)KeRaiseUserException(0xC0000008);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
