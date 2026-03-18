/*
 * XREFs of SetLastNtError @ 0x1C02D812C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
