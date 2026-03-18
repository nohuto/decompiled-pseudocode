/*
 * XREFs of GreDwmHasSoftwareCursor @ 0x1400F6CF4
 * Callers:
 *     DwmDestroyDeviceSpecificResources @ 0x1400F6C40 (DwmDestroyDeviceSpecificResources.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmHasSoftwareCursor(Gre::Base *a1, int a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rsi
  Gre::Base *v6; // rcx
  __int64 v7; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (__int64 *)Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v9, v5, (__int64)a1, 0);
  if ( IsDwmActive(v6) )
  {
    v7 = v5[28];
    if ( (*(_DWORD *)(v7 + 100) || a2)
      && *(_DWORD *)(v7 + 160)
      && (*(_QWORD *)(v9[0] + 3520LL) != v9[0] + 3520LL || (*(_DWORD *)(v9[0] + 40LL) & 0x20000) != 0) )
    {
      v4 = 1;
    }
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v9);
  return v4;
}
