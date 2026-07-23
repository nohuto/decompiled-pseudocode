/*
 * XREFs of MiUnloadApproved @ 0x140453114
 * Callers:
 *     MiDereferenceImports @ 0x140453090 (MiDereferenceImports.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     RtlFindExportedRoutineByName @ 0x140541BB0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  void *v1; // rbx
  __int16 v2; // ax
  _QWORD *v4; // rax
  int v5; // ecx
  int (*ExportedRoutineByName)(void); // rax
  unsigned int v7; // ebx

  if ( *(_QWORD *)(a1 + 136) == 1LL )
    return 0LL;
  v1 = *(void **)(a1 + 48);
  if ( (unsigned __int64)v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
  {
    v4 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
    v5 = *((_DWORD *)v4 + 15);
    if ( v5 != 1 )
    {
      *((_DWORD *)v4 + 15) = v5 - 1;
      return 0LL;
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 108);
    if ( v2 != 1 )
    {
      *(_WORD *)(a1 + 108) = v2 - 1;
      return 0LL;
    }
  }
  ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v1, "DllUnload");
  v7 = 0;
  if ( !ExportedRoutineByName )
    return 0LL;
  LOBYTE(v7) = ExportedRoutineByName() >= 0;
  return v7;
}
