/*
 * XREFs of VidMmCreateDevice @ 0x1C0004B30
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0037C64 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmCreateDevice(struct VIDMM_GLOBAL *a1, struct DXGDEVICE *a2)
{
  VIDMM_DEVICE *v4; // rcx
  VIDMM_DEVICE *result; // rax

  v4 = (VIDMM_DEVICE *)operator new(0xF8uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  result = 0LL;
  if ( v4 )
    return VIDMM_DEVICE::VIDMM_DEVICE(v4, a1, a2);
  return result;
}
