/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C0018954
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C0003658 (VidSchiClearFlipDevice.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001B530 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013A50 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  struct _VIDSCH_CONTEXT *v6; // rcx

  v2 = 0;
  v3 = (__int64 **)(a2 + 41744);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    v6 = (struct _VIDSCH_CONTEXT *)(v4 - 5);
    *(_QWORD *)(v5 + 8) = v3;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    v2 |= VidSchiUpdateFlipContextStatus(v6);
  }
  return v2;
}
