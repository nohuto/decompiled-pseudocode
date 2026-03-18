/*
 * XREFs of ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00DB56C
 * Callers:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000D798 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0168A04 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C018D340 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION(AUTOEXPANDALLOCATION *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
}
