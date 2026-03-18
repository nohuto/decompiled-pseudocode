/*
 * XREFs of ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029868 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AA77C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x1800B3754 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800BAACC (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180111584 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180120470 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x18013FE84 (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 *     Template_xxxn @ 0x180140FCC (Template_xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18015D418 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 Resource; // rax
  __int64 v9; // rsi
  char v10; // r15
  CDxAccumulationContext **v11; // r14
  bool v12; // dl
  int updated; // eax
  __int64 v14; // rax
  union _ULARGE_INTEGER v15; // rdx
  char *Element; // r14
  _QWORD *v17; // rsi
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-B9h]
  unsigned int Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h]
  _BYTE v26[32]; // [rsp+50h] [rbp-89h] BYREF
  char v27[8]; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v28[2]; // [rsp+78h] [rbp-61h]
  __int64 v29; // [rsp+80h] [rbp-59h]
  __int64 v30; // [rsp+88h] [rbp-51h]
  __int128 v31; // [rsp+90h] [rbp-49h]
  int v32; // [rsp+A0h] [rbp-39h]
  __int64 v33; // [rsp+A8h] [rbp-31h]
  __int64 v34; // [rsp+B0h] [rbp-29h]
  int v35; // [rsp+B8h] [rbp-21h]
  int v36; // [rsp+BCh] [rbp-1Dh]
  int v37; // [rsp+C0h] [rbp-19h]
  int v38; // [rsp+D0h] [rbp-9h]
  int v39; // [rsp+D4h] [rbp-5h]
  int v40; // [rsp+D8h] [rbp-1h]
  int v41; // [rsp+DCh] [rbp+3h]
  __int128 v42; // [rsp+E0h] [rbp+7h] BYREF

  v6 = 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)&v42);
  v7 = *((_DWORD *)a3 + 2);
  if ( !v7 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x3A2u);
    return v6;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v7, 0x5Bu);
  if ( Resource )
    v9 = Resource - 16;
  else
    v9 = 0LL;
  v10 = 0;
  v11 = (CDxAccumulationContext **)((char *)this + 1008);
  v12 = 0;
  if ( !*((_QWORD *)this + 126) )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 126);
    v6 = updated;
    if ( updated < 0 )
    {
      v23 = 942;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v23);
      return v6;
    }
    v12 = 1;
  }
  if ( *v11 )
  {
    updated = CDxAccumulationContext::UpdateDxClipShape(*v11, v12);
    v6 = updated;
    if ( updated < 0 )
    {
      v23 = 951;
      goto LABEL_21;
    }
  }
  if ( v9 )
  {
    v14 = *(_QWORD *)((char *)a3 + 20);
    v15 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v29 = v14;
    v30 = *(_QWORD *)((char *)a3 + 12);
    v32 = *((_DWORD *)a3 + 15);
    v27[0] = 0;
    v31 = v42;
    *(union _ULARGE_INTEGER *)v28 = v15;
    CFlipChain::UpdatePending((CFlipChain *)v9, v15);
    Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                        (char *)this + 728,
                        v28[1]);
    if ( !Element )
    {
      memset_0(&Buffer, 0, 0x30uLL);
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v9 + 16));
      Buffer = v28[1];
      v25 = v9;
      Element = (char *)RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 728), &Buffer, 0x30u, 0LL);
      if ( !Element )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3D5u);
        DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v26);
LABEL_17:
        CWindowNode::PendingDxUpdate::~PendingDxUpdate((CWindowNode::PendingDxUpdate *)v27);
        return v6;
      }
      v10 = 1;
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v26);
    }
    v17 = Element + 16;
    v18 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet(Element + 16, v27);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x3D9u);
    }
    else
    {
      v19 = v28[1];
      *((_DWORD *)this + 250) = v28[1];
      if ( v10
        && (int)CLegacySurfaceManager::RegisterForDxUpdates(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL),
                  this,
                  v19) < 0 )
      {
        CWindowNode::FlushVistaBltTokens(this);
      }
      v22 = *((_DWORD *)Element + 10);
      if ( v22 )
      {
        v20 = 88LL * (unsigned int)(v22 - 1);
        v38 = (int)*(float *)(v20 + *v17 + 32);
        v39 = (int)*(float *)(v20 + *v17 + 36);
        v40 = (int)*(float *)(v20 + *v17 + 40);
        v41 = (int)*(float *)(v20 + *v17 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxn(
            *(_DWORD *)(v20 + *v17 + 8),
            (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Pending,
            *(_DWORD *)(v20 + *v17 + 12),
            *((_QWORD *)this + 79),
            *(_DWORD *)(v20 + *v17 + 8));
      }
    }
    goto LABEL_17;
  }
  return v6;
}
