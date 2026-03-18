/*
 * XREFs of ?NeedsDisplaySetUpdate@CDisplayManager@@AEAA_NXZ @ 0x180038084
 * Callers:
 *     ?UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z @ 0x1800389C8 (-UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplayManager::NeedsDisplaySetUpdate(CDisplayManager *this)
{
  char v1; // bl
  __int64 v2; // rdi

  v1 = 0;
  if ( !*((_QWORD *)this + 8) )
    return 0;
  v2 = *((_QWORD *)this + 7);
  if ( !v2 || GdiEntry13() != *(_DWORD *)(v2 + 4) || *(_DWORD *)(v2 + 8) != dword_1801EFD4C )
    return 1;
  return v1;
}
