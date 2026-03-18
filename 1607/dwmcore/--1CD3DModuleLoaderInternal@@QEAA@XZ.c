/*
 * XREFs of ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800BD228
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DModuleLoader__ @ 0x1800C2F10 (_dynamic_atexit_destructor_for__g_D3DModuleLoader__.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x180164C68 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

void __fastcall CD3DModuleLoaderInternal::~CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal::CleanupD3DReferences(this);
  CCriticalSection::DeInit(&stru_1801EFD50);
  CCriticalSection::DeInit(&stru_1801EFD50);
}
