/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z @ 0x18006CE60
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800680F0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(CResourceTable *this, CRenderTargetManager **a2)
{
  char v2; // r8
  unsigned int i; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct CResource *v9; // r9

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    if ( i && i < *((_DWORD *)this + 7) && (v6 = *((_QWORD *)this + 5), *(_DWORD *)(i * *((_DWORD *)this + 6) + v6)) )
      v7 = v6 + i * *((_DWORD *)this + 6);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v9 = *(struct CResource **)(v7 + 8);
      if ( v9 )
      {
        CComposition::ReleaseResource(a2, this, i, v9, 1);
        v2 = 1;
      }
    }
  }
  return v2;
}
