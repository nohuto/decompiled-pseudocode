/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180063E6C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1800F6C5C (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064644 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180064A40 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801161AC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1801169D8 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, struct MilRectF *a2, char a3)
{
  bool v6; // zf
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // edx
  unsigned int v15; // r8d
  CDwmMetaRegion *v17; // rcx
  struct tagRECT v18; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v19[4]; // [rsp+30h] [rbp-20h] BYREF

  v6 = *((_BYTE *)this + 73) >= 0;
  v7 = (float)(*((_DWORD *)this + 211) - *((_DWORD *)this + 227));
  v8 = (float)(*((_DWORD *)this + 210) - *((_DWORD *)this + 226));
  v9 = *((float *)a2 + 2) + v8;
  v10 = v8 + *(float *)a2;
  v11 = *((float *)a2 + 3) + v7;
  *(float *)&v19[1] = *((float *)a2 + 1) + v7;
  *(float *)&v19[2] = v9;
  *(float *)v19 = v10;
  *(float *)&v19[3] = v11;
  if ( !v6 )
  {
    *((_DWORD *)this + 202) = 0;
    *((_DWORD *)this + 204) = 0;
    *((_DWORD *)this + 203) = 1;
    *((_BYTE *)this + 73) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1248));
  }
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v19) )
  {
    if ( qword_1801A39E8 )
    {
      v12 = 0LL;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v13 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v13 + 8 * v12)) )
        {
          v12 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v12 >= v15 )
            goto LABEL_9;
        }
        v17 = (CWindowNode *)((char *)this + 1248);
        v18.left = (int)*(float *)a2;
        v18.right = (int)*((float *)a2 + 2);
        v18.top = (int)*((float *)a2 + 1);
        v18.bottom = (int)*((float *)a2 + 3);
        if ( a3 )
          CDwmMetaRegion::AddRegionRectangleContainingMove(v17, &v18);
        else
          CDwmMetaRegion::AddDirtyRectangle(v17, &v18);
      }
    }
LABEL_9:
    CMergedRectBase<4>::Add((char *)this + 744, v19);
  }
  return 0LL;
}
