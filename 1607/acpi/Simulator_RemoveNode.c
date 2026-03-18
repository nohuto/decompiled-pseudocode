/*
 * XREFs of Simulator_RemoveNode @ 0x1C005A378
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)(a1 + 16), 1u) )
  {
    GetNameSpaceObject(DestinationString.Buffer);
    RtlFreeAnsiString(&DestinationString);
  }
  return 3221225473LL;
}
