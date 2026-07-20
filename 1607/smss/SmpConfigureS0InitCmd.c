/*
 * XREFs of SmpConfigureS0InitCmd @ 0x1400122D0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x14000CC54 (memcpy_0.c)
 */

NTSTATUS __fastcall SmpConfigureS0InitCmd(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  WCHAR *Heap; // rax

  if ( a3 )
  {
    result = RtlInitUnicodeStringEx(&SmpS0InitCmd, a3);
    if ( result < 0 )
      return result;
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      SmBaseTag,
                      SmpS0InitCmd.MaximumLength);
    SmpS0InitCmd.Buffer = Heap;
    if ( !Heap )
      return -1073741801;
    memcpy_0(Heap, a3, SmpS0InitCmd.MaximumLength);
    SmpS0CommandOverride = 1;
  }
  else
  {
    SmpS0CommandOverride = 0;
  }
  return 0;
}
