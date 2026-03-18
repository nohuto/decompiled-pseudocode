/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2@@YAEPEAX@Z @ 0x1C00127B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall **)(_QWORD, _DWORD *))DxgCoreInterface)[44](
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 1976LL),
              a1 + 2);
  return 1;
}
