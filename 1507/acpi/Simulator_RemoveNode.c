/*
 * XREFs of Simulator_RemoveNode @ 0x1C0043288
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C00429F0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
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
