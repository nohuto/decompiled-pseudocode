/*
 * XREFs of DwmDestroyDeviceSpecificResources @ 0x1400F6C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14009CA18 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     GreDwmHasSoftwareCursor @ 0x1400F6CF4 (GreDwmHasSoftwareCursor.c)
 */

void __fastcall DwmDestroyDeviceSpecificResources(Gre::Base *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 *)Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v7, v2, (__int64)a1, 0);
  if ( (unsigned int)GreDwmHasSoftwareCursor(a1, 1LL) )
  {
    v3 = (_QWORD *)(v7[0] + 3520LL);
    v4 = *(_QWORD *)(v7[0] + 3520LL);
    if ( *(_QWORD *)(v4 + 8) != v7[0] + 3520LL || (v5 = *(_QWORD **)(v7[0] + 3528LL), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v3[1] = v3;
    *v3 = v3;
    v6 = v2[28];
    if ( *(_QWORD *)(v6 + 104) == v6 + 104 && *(_QWORD *)(v6 + 120) == v6 + 120 )
      vSpDwmDestroyCursorSprites(a1);
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v7);
}
