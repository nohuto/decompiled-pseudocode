/*
 * XREFs of ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x18013AD44
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800BA588 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DModuleLoaderInternal::CleanupD3DReferences(CD3DModuleLoaderInternal *this)
{
  if ( dword_1801A3AE0 >= 0 )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
    dword_1801A3AE0 = -2003292404;
  }
}
