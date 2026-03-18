/*
 * XREFs of ?VidMmCreateCompanionContext@VIDMM_GLOBAL@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@PEAVVIDMM_DEVICE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00551F0
 * Callers:
 *     VidMmCreateCompanionContext @ 0x1C000E530 (VidMmCreateCompanionContext.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall VIDMM_GLOBAL::VidMmCreateCompanionContext(
        VIDMM_GLOBAL *this,
        VIDMM_PROCESS **a2,
        struct _VIDSCH_CONTEXT *a3)
{
  char *v6; // rax
  char *v7; // rbx

  v6 = (char *)operator new(0x40uLL, 0x39346956u, (POOL_TYPE)512);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    KeInitializeSemaphore((PRKSEMAPHORE)(v7 + 24), 128, 128);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((_QWORD *)v7 + 1) = a3;
    *(_QWORD *)v7 = VIDMM_PROCESS::GetVirtualAddressAllocator(
                      a2[1],
                      *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                      0xFFFFFFFF);
    *((_QWORD *)v7 + 2) = a2;
  }
  return (struct VIDMM_COMPANION_CONTEXT *)v7;
}
