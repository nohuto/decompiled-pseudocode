/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C0002458
 * Callers:
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C00023C8 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiClearFlipDevice @ 0x1C0010990 (VidSchiClearFlipDevice.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 **v3; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  struct _VIDSCH_CONTEXT *v7; // rcx

  v2 = 0;
  v3 = (__int64 **)(a2 + 42800);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    v7 = (struct _VIDSCH_CONTEXT *)(v5 - 5);
    *(_QWORD *)(v6 + 8) = v3;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    v2 |= VidSchiUpdateFlipContextStatus(v7);
  }
  return v2;
}
