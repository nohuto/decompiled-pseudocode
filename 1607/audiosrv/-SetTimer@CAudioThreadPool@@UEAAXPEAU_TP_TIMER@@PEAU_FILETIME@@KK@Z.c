/*
 * XREFs of ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180016140
 * Callers:
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800137D8 (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetTimer(
        CAudioThreadPool *this,
        struct _TP_TIMER *a2,
        struct _FILETIME *a3,
        DWORD a4,
        DWORD a5)
{
  SetThreadpoolTimer(a2, a3, a4, a5);
}
