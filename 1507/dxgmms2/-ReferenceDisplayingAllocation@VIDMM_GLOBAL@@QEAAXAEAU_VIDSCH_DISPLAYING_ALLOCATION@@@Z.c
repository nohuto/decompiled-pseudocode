/*
 * XREFs of ?ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z @ 0x1C000F204
 * Callers:
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReferenceDisplayingAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_DISPLAYING_ALLOCATION *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)a2;
  if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 12LL)) == 1 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 16) + 8LL), 1u);
}
