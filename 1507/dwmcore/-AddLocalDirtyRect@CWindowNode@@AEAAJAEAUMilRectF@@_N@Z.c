/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x18007D784 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1801056A4 (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180105F14 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438 (-Add@CMergedRect@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D808 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1800FD0E8 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1800FD914 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, struct MilRectF *a2, char a3)
{
  bool v6; // zf
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  CDwmMetaRegion *v13; // rcx
  struct tagRECT v14; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF

  v6 = (*((_BYTE *)this + 90) & 2) == 0;
  v7 = (float)(*((_DWORD *)this + 223) - *((_DWORD *)this + 239));
  v8 = (float)(*((_DWORD *)this + 222) - *((_DWORD *)this + 238));
  v9 = *((float *)a2 + 2) + v8;
  v10 = v8 + *(float *)a2;
  v11 = *((float *)a2 + 3) + v7;
  *(float *)&v15[1] = *((float *)a2 + 1) + v7;
  *(float *)&v15[2] = v9;
  *(float *)v15 = v10;
  *(float *)&v15[3] = v11;
  if ( !v6 )
  {
    *((_DWORD *)this + 214) = 0;
    *((_DWORD *)this + 216) = 0;
    *((_DWORD *)this + 215) = 1;
    *((_BYTE *)this + 90) &= ~2u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1296));
  }
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v15) )
  {
    if ( qword_1801930E8 && CDisplaySet::NeedsDesktopMoves(qword_1801930E8) )
    {
      v13 = (CWindowNode *)((char *)this + 1296);
      v14.left = (int)*(float *)a2;
      v14.right = (int)*((float *)a2 + 2);
      v14.top = (int)*((float *)a2 + 1);
      v14.bottom = (int)*((float *)a2 + 3);
      if ( a3 )
        CDwmMetaRegion::AddRegionRectangleContainingMove(v13, &v14);
      else
        CDwmMetaRegion::AddDirtyRectangle(v13, &v14);
    }
    CMergedRect::Add((char *)this + 792, v15);
  }
  return 0LL;
}
