/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18003AD28
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18003B930 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18003AA44 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18003B2C4 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  char v3; // r10
  unsigned int i; // ebx
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  CComposition *v8; // rcx
  struct CResource *v10; // r9

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    Entry = CResourceTable::GetEntry(this, i);
    if ( Entry )
    {
      v10 = (struct CResource *)*((_QWORD *)Entry + 1);
      if ( v10 )
      {
        CComposition::ReleaseResource(v8, a3, i, v10, 1);
        v3 = 1;
      }
    }
  }
  return v3;
}
