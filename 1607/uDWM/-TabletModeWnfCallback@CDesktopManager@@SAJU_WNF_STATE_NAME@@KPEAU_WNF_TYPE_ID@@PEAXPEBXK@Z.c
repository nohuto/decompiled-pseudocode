/*
 * XREFs of ?TabletModeWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800422D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::TabletModeWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        DWORD *a4,
        int *a5,
        unsigned int a6)
{
  if ( a6 == 4 && a4 )
    PostThreadMessageW(*a4, 0x401u, *a5, 0LL);
  return 0LL;
}
