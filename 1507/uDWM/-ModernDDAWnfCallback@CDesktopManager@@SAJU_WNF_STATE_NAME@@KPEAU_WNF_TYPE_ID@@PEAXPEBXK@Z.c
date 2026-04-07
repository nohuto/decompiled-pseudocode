/*
 * XREFs of ?ModernDDAWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800482D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ModernDDAWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall ***a4)(_QWORD, __int64, char *, _QWORD),
        char *a5,
        unsigned int a6)
{
  if ( a6 == 24 && a4 )
  {
    LOBYTE(a2) = *((_DWORD *)a5 + 5) != 0;
    (**a4)(a4, a2, a5 + 8, *((unsigned int *)a5 + 4));
  }
  return 0LL;
}
