/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x1800BA48C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x1800BFAC0 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  if ( qword_1801A39E0 )
    (*(void (__fastcall **)(CRemoteApplicationWindowSet *))(*(_QWORD *)qword_1801A39E0 + 8LL))(qword_1801A39E0);
  CCriticalSection::DeInit(&g_DisplayManager);
}
