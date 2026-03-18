/*
 * XREFs of RtlFreeOemString @ 0x1404C66D4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
