/*
 * XREFs of MiUnloadApproved @ 0x1403CC00C
 * Callers:
 *     MiDereferenceImports @ 0x1403CBF88 (MiDereferenceImports.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 *     RtlFindExportedRoutineByName @ 0x1403B7EA0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  char *v1; // r8
  __int16 v2; // ax
  _QWORD *v4; // rax
  int v5; // ecx
  int v6; // r9d
  char *ExportedRoutineByName; // rax
  unsigned int v8; // ebx

  if ( *(_QWORD *)(a1 + 136) == 1LL )
    return 0LL;
  v1 = *(char **)(a1 + 48);
  if ( (unsigned __int64)(v1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
  {
    v4 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
    v5 = *((_DWORD *)v4 + 15);
    if ( v5 != v6 )
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
  ExportedRoutineByName = RtlFindExportedRoutineByName(v1, "DllUnload");
  v8 = 0;
  if ( !ExportedRoutineByName )
    return 0LL;
  LOBYTE(v8) = ((int (*)(void))ExportedRoutineByName)() >= 0;
  return v8;
}
