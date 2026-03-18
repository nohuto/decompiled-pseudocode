/*
 * XREFs of ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C0076720 (DxgkReclaimAllocations2.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00B7890 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00C97F0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGPAGINGQUEUEBYHANDLE *__fastcall DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)a3 + 58)
    && (v9 = *((_QWORD *)a3 + 27),
        v10 = *(_DWORD *)(v9 + 16LL * (unsigned int)v8 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * (unsigned int)v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (v11 = 2 * v8, (*(_BYTE *)(v9 + 8 * v11 + 8) & 0xF) == 0xA) )
  {
    v12 = *(_QWORD *)(v9 + 8 * v11);
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)this = v12;
  if ( v12 )
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + 48));
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return this;
}
