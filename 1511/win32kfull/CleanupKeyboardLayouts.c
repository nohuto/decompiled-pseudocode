/*
 * XREFs of CleanupKeyboardLayouts @ 0x1C0113870
 * Callers:
 *     <none>
 * Callees:
 *     DestroyKL @ 0x1C0112E20 (DestroyKL.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CleanupKeyboardLayouts()
{
  _QWORD *v0; // rdx
  __int64 v1; // rdi
  __int64 v2; // rbx

  v0 = (_QWORD *)gspklBaseLayout;
  if ( gspklBaseLayout )
  {
    if ( gspklGlobalActive )
    {
      HMAssignmentUnlock(gspklGlobalActive);
      v0 = (_QWORD *)gspklBaseLayout;
    }
    v1 = *(_QWORD *)(*v0 + 16LL);
    if ( *(_QWORD *)(v1 + 16) != v1 )
    {
      do
      {
        v2 = *(_QWORD *)(v1 + 16);
        DestroyKL(v1);
        v1 = v2;
      }
      while ( *(_QWORD *)(v2 + 16) != v2 );
      v0 = (_QWORD *)gspklBaseLayout;
    }
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)*v0 + gSharedInfo[1] + 17LL) & 1) == 0 )
      HMMarkObjectDestroy(*v0);
    gdwHydraHint |= 0x8000u;
    if ( HMAssignmentUnlock(gspklBaseLayout) )
      DestroyKL(v1);
  }
}
