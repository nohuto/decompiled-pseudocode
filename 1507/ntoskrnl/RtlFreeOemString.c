/*
 * XREFs of RtlFreeOemString @ 0x14055A640
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
