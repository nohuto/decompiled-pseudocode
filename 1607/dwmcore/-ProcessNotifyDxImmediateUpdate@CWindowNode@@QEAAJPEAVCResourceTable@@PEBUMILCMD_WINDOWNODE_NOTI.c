/*
 * XREFs of ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1801091A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029868 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AA77C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA7E4 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800B7A24 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800BAACC (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_xxxn @ 0x180140FCC (Template_xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18015D418 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
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
  int v11; // r9d
  __int64 Resource; // rax
  CFlipChain *v13; // rbp
  const struct CWindowNode ***v14; // rbx
  char v15; // al
  int updated; // eax
  char v17; // dl
  union _ULARGE_INTEGER v18; // rbx
  unsigned int v20; // [rsp+20h] [rbp-88h]
  float v21[4]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0LL;
  v6 = (*((_DWORD *)a3 + 9) & 0x20) != 0;
  v8 = 0;
  v9 = (*((_DWORD *)a3 + 9) & 0x40) != 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)v21);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
  {
    v8 = -2147024809;
    v20 = 1055;
    v11 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v20);
    return v8;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v10, 0x5Bu);
  v13 = (CFlipChain *)(Resource - 16);
  if ( !Resource )
    v13 = 0LL;
  v14 = (const struct CWindowNode ***)((char *)this + 1008);
  v15 = 0;
  if ( *((_QWORD *)this + 126) )
    goto LABEL_31;
  if ( !v9 )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 126);
    v8 = updated;
    if ( updated < 0 )
    {
      v20 = 1067;
      goto LABEL_17;
    }
    v15 = 1;
  }
  if ( *v14 )
  {
LABEL_31:
    if ( v6 || (v17 = 0, v15) )
      v17 = 1;
    updated = CDxAccumulationContext::UpdateDxClipShape(*v14, v17);
    v8 = updated;
    if ( updated < 0 )
    {
      v20 = 1076;
LABEL_17:
      v11 = updated;
      goto LABEL_3;
    }
  }
  if ( v6 )
  {
    if ( *v14 )
    {
      CDxAccumulationContext::ValidateContent((CDxAccumulationContext *)*v14);
    }
    else
    {
      if ( !v13 )
        return v8;
      *((_BYTE *)this + 1032) = 1;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    }
    if ( v13 )
    {
      v18 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
      CFlipChain::UpdatePending(v13, v18);
      CFlipChain::ProcessVistaBltToken(v13, v18.QuadPart, *(_QWORD *)((char *)a3 + 12), v21);
      do
      {
        v22[v5] = (int)v21[v5];
        ++v5;
      }
      while ( v5 < 4 );
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxn(
          (unsigned int)v22,
          (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Dirty,
          v18.HighPart,
          *((_QWORD *)this + 79),
          v18.LowPart);
    }
  }
  return v8;
}
