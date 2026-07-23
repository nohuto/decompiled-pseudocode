/*
 * XREFs of RtlFreeOemString @ 0x1405489A4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
