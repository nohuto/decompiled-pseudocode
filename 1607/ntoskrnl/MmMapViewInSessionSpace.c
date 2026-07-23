/*
 * XREFs of MmMapViewInSessionSpace @ 0x1404C3098
 * Callers:
 *     <none>
 * Callees:
 *     MmMapViewInSessionSpaceEx @ 0x1404C30BC (MmMapViewInSessionSpaceEx.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = 0;
  v5 = 0;
  return MmMapViewInSessionSpaceEx((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL);
}
