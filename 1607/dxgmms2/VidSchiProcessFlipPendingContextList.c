/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C00116F0
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0011664 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00116C4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 **v5; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  struct _VIDSCH_CONTEXT *v9; // rcx

  v4 = 0;
  v5 = (__int64 **)(a2 + 46896);
  while ( *v5 != (__int64 *)v5 )
  {
    v7 = *v5;
    v8 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v5 = (__int64 *)v8;
    v9 = (struct _VIDSCH_CONTEXT *)(v7 - 5);
    *(_QWORD *)(v8 + 8) = v5;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    v4 |= VidSchiUpdateFlipContextStatus(v9, a2, a3, a4);
  }
  return v4;
}
