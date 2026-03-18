/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x18007D784
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF8C (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D808 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     Template_xnn @ 0x180106B90 (Template_xnn.c)
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

  if ( (*((_BYTE *)this + 90) & 2) != 0 )
  {
    *((_DWORD *)this + 214) = 0;
    *((_DWORD *)this + 216) = 0;
    *((_DWORD *)this + 215) = 1;
    *((_BYTE *)this + 90) &= ~2u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1296));
  }
  if ( *((_BYTE *)this + 1244) )
    *((_BYTE *)this + 1245) = 0;
  v9 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x290u);
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
            *((_QWORD *)this + 109),
            v10,
            (__int64)&a2[v12],
            v15,
            (__int64)this + 952);
        if ( !*((_BYTE *)this + 1244) && CWindowNode::ClipToNode((__int64)this, &a2[v12], (__int64)v16) )
        {
          v13 = CWindowNode::AddLocalDirtyRect(this, (struct MilRectF *)v16, a6);
          v11 = v13;
          if ( v13 < 0 )
            break;
        }
        if ( ++v12 >= a3 )
          goto LABEL_13;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2A8u);
    }
    else
    {
LABEL_13:
      CVisual::PropagateFlags(this, a5, 0, 1, 0, 0, 0);
    }
  }
  return v11;
}
