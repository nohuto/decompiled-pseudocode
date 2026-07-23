/*
 * XREFs of RtlFreeOemString @ 0x180077290
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    NtdllpFreeStringRoutine(Buffer);
}
