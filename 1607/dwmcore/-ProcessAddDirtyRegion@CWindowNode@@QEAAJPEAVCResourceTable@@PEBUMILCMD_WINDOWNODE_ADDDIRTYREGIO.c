/*
 * XREFs of ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x180108E98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029868 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x10uLL) )
  {
    v8 = -2147024362;
    v14 = 1234;
LABEL_3:
    v9 = v8;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v14);
    return v8;
  }
  if ( 16LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v14 = 1238;
    goto LABEL_3;
  }
  v10 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    v14 = 1244;
LABEL_19:
    v9 = v10;
    goto LABEL_20;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 100);
        if ( v12 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, const RECT *))(*(_QWORD *)v12 + 272LL))(v12, a4);
          v8 = v10;
          if ( v10 < 0 )
          {
            v14 = 1256;
            goto LABEL_19;
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
          goto LABEL_14;
      }
      v14 = 1263;
      goto LABEL_19;
    }
  }
LABEL_14:
  CVisual::PropagateFlags(this, 0, 0, 1, 0, 0, 0);
  if ( *((_BYTE *)this + 1004) )
    *((_BYTE *)this + 1005) = 0;
  return v8;
}
