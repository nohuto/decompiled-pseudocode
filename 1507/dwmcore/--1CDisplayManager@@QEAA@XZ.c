/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x180097834
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x18009C6C0 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  if ( qword_1801930E0 )
    (*(void (__fastcall **)(CRemoteApplicationWindowSet *))(*(_QWORD *)qword_1801930E0 + 8LL))(qword_1801930E0);
  CCriticalSection::DeInit(&g_DisplayManager);
}
