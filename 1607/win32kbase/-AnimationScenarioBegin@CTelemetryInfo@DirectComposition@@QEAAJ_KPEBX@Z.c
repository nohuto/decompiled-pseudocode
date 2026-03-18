/*
 * XREFs of ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0075338
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0078A10 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioBegin(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // esi
  __int64 v7; // rbx
  int v8; // edi
  DirectComposition::CTelemetryInfo **v9; // rcx

  v6 = (a2 + 11) & 0xFFFFFFFC;
  v7 = Win32AllocPoolWithQuota();
  v8 = 0;
  if ( !v7 )
    v8 = -1073741801;
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v7 + 16) = v6;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = 13;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v7 + 28), a3, a2);
    v9 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 7);
    if ( *v9 != (DirectComposition::CTelemetryInfo *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 48;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = (DirectComposition::CTelemetryInfo *)v7;
    *((_QWORD *)this + 7) = v7;
    v7 = 0LL;
  }
  if ( v7 )
    Win32FreePool();
  return (unsigned int)v8;
}
