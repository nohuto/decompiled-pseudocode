/*
 * XREFs of ?SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0022124
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATIONREFERENCE *a3)
{
  __int64 v3; // rbx
  int v6; // edx
  char *v7; // r9
  __int64 v8; // rcx
  bool v9; // zf
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, this + 26);
  v6 = 0;
  v7 = (char *)this + ((unsigned __int64)(unsigned int)v3 << 6) - (_QWORD)a3;
  v8 = 8LL;
  do
  {
    *(_QWORD *)((char *)a3 + (_QWORD)v7 + 17168) = *(_QWORD *)a3;
    v9 = *(_QWORD *)a3 == 0LL;
    a3 = (const struct DXGALLOCATIONREFERENCE *)((char *)a3 + 8);
    v6 += !v9;
    --v8;
  }
  while ( v8 );
  *((_DWORD *)this + v3 + 4548) = v6;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
