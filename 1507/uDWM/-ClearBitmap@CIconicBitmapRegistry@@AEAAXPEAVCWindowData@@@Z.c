/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A920 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180030C8C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18006DC88 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003A0A8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FA84 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, CWindowIconic **a2)
{
  CWindowIconic *v3; // rdi
  __int64 v4; // rcx
  struct CWindowData *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (struct CWindowData *)a2;
  if ( a2 == (CWindowIconic **)-1LL )
  {
    v3 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
  }
  else
  {
    if ( !a2[45] )
      return;
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, (__int64 *)&v5);
    CWindowData::SetIconicBitmap((CWindowData *)a2, 0LL);
    v3 = a2[49];
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v4, &UdwmManageIconicThumbnail_Info, 2LL);
  }
  if ( v3 )
    CWindowIconic::SetBitmap(v3, 0LL, 0, 1);
}
