/*
 * XREFs of ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180027124
 * Callers:
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     InitDPI @ 0x18002D8B8 (InitDPI.c)
 */

int __fastcall ExperienceManagerUtils::ScaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  int v4; // esi
  int v5; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (int)this;
  InitDPI(this, a2, a3);
  v5 = dword_18004C308;
  if ( a2 && (int)GetDpiForMonitor(a2, 0LL, &v7, &v8) >= 0 )
    v5 = v7;
  return MulDiv(v4, v5, 96);
}
