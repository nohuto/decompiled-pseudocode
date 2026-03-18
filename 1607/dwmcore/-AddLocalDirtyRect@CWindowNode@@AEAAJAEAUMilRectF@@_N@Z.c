/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718
 * Callers:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180029B84 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180029C9C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x180108E98 (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CD5C (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800B1A2C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801303E0 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x180130C0C (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, struct MilRectF *a2, char a3)
{
  bool v6; // zf
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  CDwmMetaRegion *v14; // rcx
  struct tagRECT v15; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v16[4]; // [rsp+30h] [rbp-68h] BYREF

  v6 = *((_BYTE *)this + 153) >= 0;
  v7 = (float)(*((_DWORD *)this + 163) - *((_DWORD *)this + 179));
  v8 = *((float *)a2 + 1) + v7;
  v9 = (float)(*((_DWORD *)this + 162) - *((_DWORD *)this + 178));
  v10 = *((float *)a2 + 2) + v9;
  v11 = v9 + *(float *)a2;
  v12 = *((float *)a2 + 3) + v7;
  *(float *)&v16[1] = v8;
  *(float *)&v16[2] = v10;
  *(float *)v16 = v11;
  *(float *)&v16[3] = v12;
  if ( !v6 )
  {
    *((_DWORD *)this + 154) = 0;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 155) = 1;
    *((_BYTE *)this + 153) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1056));
  }
  if ( v10 > v11 && v12 > v8 )
  {
    if ( qword_1801EFD28 && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
    {
      v14 = (CWindowNode *)((char *)this + 1056);
      v15.left = (int)*(float *)a2;
      v15.right = (int)*((float *)a2 + 2);
      v15.top = (int)*((float *)a2 + 1);
      v15.bottom = (int)*((float *)a2 + 3);
      if ( a3 )
        CDwmMetaRegion::AddRegionRectangleContainingMove(v14, &v15);
      else
        CDwmMetaRegion::AddDirtyRectangle(v14, &v15);
    }
    CMergedRectBase<4>::Add((char *)this + 552, v16);
  }
  return 0LL;
}
