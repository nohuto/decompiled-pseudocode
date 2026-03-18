/*
 * XREFs of GreDwmEnableSoftwareCursorRendering @ 0x140245370
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

void __fastcall GreDwmEnableSoftwareCursorRendering(Gre::Base *a1, int a2)
{
  __int64 *v4; // rdi
  Gre::Base *v5; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64 *)Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v6, v4, (__int64)a1, 0);
  if ( IsDwmActive(v5) )
    *(_DWORD *)(v4[28] + 100) = a2;
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v6);
}
