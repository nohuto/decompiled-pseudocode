/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180063E6C
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B3A8 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180064A40 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xnn @ 0x180124694 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        __int64 a4,
        bool a5,
        char a6)
{
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // edi
  int v12; // esi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-50h]
  _BYTE v16[16]; // [rsp+40h] [rbp-38h] BYREF

  if ( *((char *)this + 73) < 0 )
  {
    *((_DWORD *)this + 202) = 0;
    *((_DWORD *)this + 204) = 0;
    *((_DWORD *)this + 203) = 1;
    *((_BYTE *)this + 73) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1248));
  }
  if ( *((_BYTE *)this + 1196) )
    *((_BYTE *)this + 1197) = 0;
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
            *((_QWORD *)this + 103),
            v10,
            (__int64)&a2[v12],
            v15,
            (__int64)this + 904);
        if ( !*((_BYTE *)this + 1196) && CWindowNode::ClipToNode((__int64)this, &a2[v12], (__int64)v16) )
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
