/*
 * XREFs of ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180105820
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF8C (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     Template_xxxn @ 0x180106C8C (Template_xxxn.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010982C (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x18010A06C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180121A94 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x180121C34 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x180121E3C (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxImmediateUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE *a3)
{
  __int64 v5; // rdi
  bool v6; // r15
  unsigned int v8; // esi
  bool v9; // r12
  unsigned int v10; // edx
  __int64 Resource; // rax
  CFlipChain *v12; // rbp
  CDxAccumulationContext **v13; // rbx
  char v14; // al
  int updated; // eax
  bool v16; // dl
  int v17; // r8d
  union _ULARGE_INTEGER v18; // rbx
  unsigned int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+28h] [rbp-80h]
  _DWORD v22[4]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v23[4]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0LL;
  v6 = (*((_DWORD *)a3 + 9) & 0x20) != 0;
  v8 = 0;
  v9 = (*((_DWORD *)a3 + 9) & 0x40) != 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)v22);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x41Eu);
    return v8;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v10, 78LL);
  v12 = (CFlipChain *)(Resource - 16);
  if ( !Resource )
    v12 = 0LL;
  v13 = (CDxAccumulationContext **)((char *)this + 1248);
  v14 = 0;
  if ( *((_QWORD *)this + 156) )
    goto LABEL_31;
  if ( !v9 )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 156);
    v8 = updated;
    if ( updated < 0 )
    {
      v20 = 1066;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v20);
      return v8;
    }
    v14 = 1;
  }
  if ( *v13 )
  {
LABEL_31:
    if ( v6 || (v16 = 0, v14) )
      v16 = 1;
    updated = CDxAccumulationContext::UpdateDxClipShape(*v13, v16);
    v8 = updated;
    if ( updated < 0 )
    {
      v20 = 1075;
      goto LABEL_16;
    }
  }
  if ( v6 )
  {
    if ( *v13 )
    {
      CDxAccumulationContext::ValidateContent(*v13);
    }
    else
    {
      if ( !v12 )
        return v8;
      *((_BYTE *)this + 1272) = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    }
    if ( v12 )
    {
      v18 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
      CFlipChain::UpdatePending(v12, v18, v17);
      CFlipChain::ProcessVistaBltToken(v12);
      do
      {
        v23[v5] = (int)*(float *)&v22[v5];
        ++v5;
      }
      while ( v5 < 4 );
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxn(
          (unsigned int)v23,
          (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Dirty,
          v18.HighPart,
          *((_QWORD *)this + 109),
          v18.LowPart,
          v21,
          (__int64)v23);
    }
  }
  return v8;
}
