/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x1800BD13C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x1800C2EF0 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  if ( qword_1801EFD20 )
    (*(void (__fastcall **)(CRemoteApplicationWindowSet *))(*(_QWORD *)qword_1801EFD20 + 8LL))(qword_1801EFD20);
  CCriticalSection::DeInit(&g_DisplayManager);
}
