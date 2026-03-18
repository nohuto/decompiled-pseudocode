/*
 * XREFs of ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0004508
 * Callers:
 *     DxgCreateContextAllocationCB @ 0x1C008D660 (DxgCreateContextAllocationCB.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmCreateContextAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  struct DXGPROCESS *Current; // rax
  char v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+20h]

  v21 = a4;
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v20, Current);
  LODWORD(a1) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, int, int, int, int, int, int, __int64))(*(_QWORD *)(a1 + 8) + 632LL))(
                  a2,
                  a3,
                  v21,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11,
                  a12,
                  a13,
                  a14,
                  a15);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v20);
  return (unsigned int)a1;
}
