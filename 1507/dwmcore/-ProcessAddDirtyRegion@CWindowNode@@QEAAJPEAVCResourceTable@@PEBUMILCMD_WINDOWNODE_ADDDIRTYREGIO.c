/*
 * XREFs of ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1801056A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF8C (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::ProcessAddDirtyRegion(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_ADDDIRTYREGION *a3,
        const RECT *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // eax
  int v11; // ebp
  __int64 v12; // r14
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x10uLL) )
  {
    v8 = -2147024362;
    v14 = 1233;
LABEL_3:
    v9 = v8;
LABEL_4:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v14);
    return v8;
  }
  if ( 16LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v14 = 1237;
    goto LABEL_3;
  }
  v10 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    v14 = 1243;
LABEL_9:
    v9 = v10;
    goto LABEL_4;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 130);
        if ( v12 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, const RECT *))(*(_QWORD *)v12 + 360LL))(*((_QWORD *)this + 130), a4);
          v8 = v10;
          if ( v10 < 0 )
          {
            v14 = 1255;
            goto LABEL_9;
          }
        }
        if ( CWindowNode::ClipToNode((__int64)this, a4, (__int64)v15) )
        {
          v10 = CWindowNode::AddLocalDirtyRect(this, (struct MilRectF *)v15, 0);
          v8 = v10;
          if ( v10 < 0 )
            break;
        }
        ++a4;
        if ( (unsigned int)++v11 >= *((_DWORD *)a3 + 2) )
          goto LABEL_17;
      }
      v14 = 1262;
      goto LABEL_9;
    }
  }
LABEL_17:
  CVisual::PropagateFlags(this, 0, 0, 1, 0, 0, 0);
  if ( *((_BYTE *)this + 1244) )
    *((_BYTE *)this + 1245) = 0;
  return v8;
}
