/*
 * XREFs of ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0018D2C
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReferenceDmaBuffer(
        VIDMM_EXPORT *this,
        struct _VIDMM_DMA_BUFFER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  struct _KTHREAD **Current; // rax
  __int64 v17; // r9
  char v19; // [rsp+80h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v19, Current);
  LOBYTE(v17) = a5;
  LODWORD(this) = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, struct _D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, int, unsigned int *, union _LARGE_INTEGER *, unsigned __int64 *, char *, struct VIDMM_ALLOC **, struct _VIDMM_PRIMARIES_REFERENCES *, struct DXGALLOCATION **))(*((_QWORD *)this + 1) + 552LL))(
                    a2,
                    a3,
                    a4,
                    v17,
                    a6,
                    a7,
                    a8,
                    a9,
                    &v19,
                    a10,
                    a11,
                    a12);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v19);
  return (unsigned int)this;
}
