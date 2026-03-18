/*
 * XREFs of ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0003BAC
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0003ED0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionBeginInfo(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // r14d
  __int64 v7; // rbx
  int v8; // esi
  DirectComposition::CTelemetryInfo **v9; // rax

  v6 = (a2 + 11) & 0xFFFFFFFC;
  v7 = Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 1869890372LL);
  v8 = 0;
  if ( !v7 )
    v8 = -1073741801;
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v7 + 16) = v6;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = 7;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v7 + 28), a3, a2);
    v9 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 1);
    *(_QWORD *)v7 = this;
    *(_QWORD *)(v7 + 8) = v9;
    if ( *v9 != this )
      __fastfail(3u);
    *v9 = (DirectComposition::CTelemetryInfo *)v7;
    *((_QWORD *)this + 1) = v7;
    v7 = 0LL;
  }
  if ( v7 )
    Win32FreePool(v7);
  return (unsigned int)v8;
}
