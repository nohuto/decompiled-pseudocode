/*
 * XREFs of ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C001BF00
 * Callers:
 *     DxgkMapGpuVirtualAddress @ 0x1C012EF70 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C012F8C0 (DxgkReclaimAllocations2.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C012FB60 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGPAGINGQUEUEBYHANDLE *__fastcall DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4)
{
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)a3 + 58)
    && (v9 = *((_QWORD *)a3 + 27),
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 0xA )
  {
    v11 = *(_QWORD *)(v9 + 16LL * v8);
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _m_prefetchw((const void *)(v11 + 48));
    v12 = *(_QWORD *)(v11 + 48);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 48), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_13;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_13:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return this;
}
