/*
 * XREFs of sub_140011B90 @ 0x140011B90
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x14000C480 (memcpy.c)
 */

NTSTATUS __fastcall sub_140011B90(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  WCHAR *Heap; // rax

  if ( a3 )
  {
    result = RtlInitUnicodeStringEx(&String1, a3);
    if ( result < 0 )
      return result;
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      Flags,
                      String1.MaximumLength);
    String1.Buffer = Heap;
    if ( !Heap )
      return -1073741801;
    memcpy(Heap, a3, String1.MaximumLength);
    dword_140020160 = 1;
  }
  else
  {
    dword_140020160 = 0;
  }
  return 0;
}
