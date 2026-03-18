/*
 * XREFs of ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1800F6F88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B3A8 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800A9D14 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AE51C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xxxn @ 0x180124790 (Template_xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x1801373DC (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
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
  const struct CWindowNode ***v13; // rbx
  char v14; // al
  int updated; // eax
  char v16; // dl
  union _ULARGE_INTEGER v17; // rbx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  _DWORD v20[4]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0LL;
  v6 = (*((_DWORD *)a3 + 9) & 0x20) != 0;
  v8 = 0;
  v9 = (*((_DWORD *)a3 + 9) & 0x40) != 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)v20);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x41Fu);
    return v8;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v10, 0x56u);
  v12 = (CFlipChain *)(Resource - 16);
  if ( !Resource )
    v12 = 0LL;
  v13 = (const struct CWindowNode ***)((char *)this + 1200);
  v14 = 0;
  if ( *((_QWORD *)this + 150) )
    goto LABEL_31;
  if ( !v9 )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 150);
    v8 = updated;
    if ( updated < 0 )
    {
      v19 = 1067;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v19);
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
      v19 = 1076;
      goto LABEL_16;
    }
  }
  if ( v6 )
  {
    if ( *v13 )
    {
      CDxAccumulationContext::ValidateContent((CDxAccumulationContext *)*v13);
    }
    else
    {
      if ( !v12 )
        return v8;
      *((_BYTE *)this + 1224) = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    }
    if ( v12 )
    {
      v17 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
      CFlipChain::UpdatePending(v12, v17);
      CFlipChain::ProcessVistaBltToken(v12, v17.QuadPart, *(_QWORD *)((char *)a3 + 12), (__int64)v20);
      do
      {
        v21[v5] = (int)*(float *)&v20[v5];
        ++v5;
      }
      while ( v5 < 4 );
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxn(
          (unsigned int)v21,
          (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Dirty,
          v17.HighPart,
          *((_QWORD *)this + 103),
          v17.LowPart);
    }
  }
  return v8;
}
