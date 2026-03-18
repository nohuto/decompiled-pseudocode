/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180029C9C
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029868 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800B1A2C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_xnn @ 0x180140F50 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6)
{
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // edi
  int v12; // esi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-50h]
  _BYTE v16[16]; // [rsp+40h] [rbp-38h] BYREF

  if ( *((char *)this + 153) < 0 )
  {
    *((_DWORD *)this + 154) = 0;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 155) = 1;
    *((_BYTE *)this + 153) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1056));
  }
  if ( *((_BYTE *)this + 1004) )
    *((_BYTE *)this + 1005) = 0;
  v9 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x291u);
  }
  else
  {
    v12 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xnn(
            (_DWORD)a2 + 16 * v12,
            (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
            *((_QWORD *)this + 79),
            v10,
            (__int64)&a2[v12],
            v15,
            (__int64)this + 712);
        if ( !*((_BYTE *)this + 1004) && CWindowNode::ClipToNode((__int64)this, &a2[v12], (__int64)v16) )
        {
          v13 = CWindowNode::AddLocalDirtyRect(this, (struct MilRectF *)v16, a6);
          v11 = v13;
          if ( v13 < 0 )
            break;
        }
        if ( ++v12 >= a3 )
          goto LABEL_13;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2A9u);
    }
    else
    {
LABEL_13:
      CVisual::PropagateFlags(this, a5, 0, 1, 0, 0, 0);
    }
  }
  return v11;
}
