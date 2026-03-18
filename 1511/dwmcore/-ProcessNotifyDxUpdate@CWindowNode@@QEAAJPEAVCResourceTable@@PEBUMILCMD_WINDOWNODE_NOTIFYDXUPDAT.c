/*
 * XREFs of ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B3A8 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180069274 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AE51C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x1800FC4B8 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180109D70 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 *     Template_xxxn @ 0x180124790 (Template_xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x1801373DC (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  int v8; // r9d
  __int64 Resource; // rax
  __int64 v10; // rdi
  char v11; // r12
  CDxAccumulationContext **v12; // r14
  bool v13; // dl
  int updated; // eax
  __int64 v15; // rax
  union _ULARGE_INTEGER v16; // rdx
  char *Element; // r15
  _QWORD *v18; // r14
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // edi
  __int64 v22; // rcx
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v25; // rdx
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-B9h]
  unsigned int Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v30; // [rsp+48h] [rbp-91h]
  void *v31[4]; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v32[4]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v33; // [rsp+80h] [rbp-59h]
  __int128 v34; // [rsp+90h] [rbp-49h]
  __int128 v35; // [rsp+A0h] [rbp-39h]
  __int128 v36; // [rsp+B0h] [rbp-29h]
  __int64 v37; // [rsp+C0h] [rbp-19h]
  int v38; // [rsp+D0h] [rbp-9h]
  int v39; // [rsp+D4h] [rbp-5h]
  int v40; // [rsp+D8h] [rbp-1h]
  int v41; // [rsp+DCh] [rbp+3h]
  __int128 v42; // [rsp+E0h] [rbp+7h] BYREF

  v6 = 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)&v42);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v7, 0x56u);
    if ( Resource )
      v10 = Resource - 16;
    else
      v10 = 0LL;
    v11 = 0;
    v12 = (CDxAccumulationContext **)((char *)this + 1200);
    v13 = 0;
    if ( !*((_QWORD *)this + 150) )
    {
      updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 150);
      v6 = updated;
      if ( updated < 0 )
      {
        v28 = 942;
LABEL_10:
        v8 = updated;
        goto LABEL_3;
      }
      v13 = 1;
    }
    if ( *v12 )
    {
      updated = CDxAccumulationContext::UpdateDxClipShape(*v12, v13);
      v6 = updated;
      if ( updated < 0 )
      {
        v28 = 951;
        goto LABEL_10;
      }
    }
    if ( !v10 )
      return v6;
    v15 = *(_QWORD *)((char *)a3 + 20);
    v16 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    *((_QWORD *)&v35 + 1) = 0LL;
    v36 = 0uLL;
    LODWORD(v37) = 0;
    *(_QWORD *)&v33 = v15;
    *((_QWORD *)&v33 + 1) = *(_QWORD *)((char *)a3 + 12);
    LODWORD(v35) = *((_DWORD *)a3 + 15);
    LOBYTE(v32[0]) = 0;
    v34 = v42;
    *(union _ULARGE_INTEGER *)&v32[2] = v16;
    CFlipChain::UpdatePending((CFlipChain *)v10, v16);
    Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                        (char *)this + 920,
                        v32[3]);
    if ( !Element )
    {
      memset_0(&Buffer, 0, 0x30uLL);
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v10 + 16));
      Buffer = v32[3];
      v30 = v10;
      Element = (char *)RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 920), &Buffer, 0x30u, 0LL);
      if ( !Element )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3D5u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v31);
LABEL_30:
        CWindowNode::PendingDxUpdate::~PendingDxUpdate((CWindowNode::PendingDxUpdate *)v32);
        return v6;
      }
      v11 = 1;
      DynArrayImpl<1>::~DynArrayImpl<1>(v31);
    }
    v18 = Element + 16;
    v19 = *((unsigned int *)Element + 10);
    v20 = v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_35:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x3D9u);
      goto LABEL_30;
    }
    v6 = 0;
    if ( v20 > *((_DWORD *)Element + 9) )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 16), 88, 1, v32);
      v21 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      v6 = v21;
      if ( v21 < 0 )
        goto LABEL_35;
    }
    else
    {
      v22 = *v18 + 88 * v19;
      *(_OWORD *)v22 = *(_OWORD *)v32;
      *(_OWORD *)(v22 + 16) = v33;
      *(_OWORD *)(v22 + 32) = v34;
      *(_OWORD *)(v22 + 48) = v35;
      *(_OWORD *)(v22 + 64) = v36;
      *(_QWORD *)(v22 + 80) = v37;
      *((_DWORD *)Element + 10) = v20;
    }
    v23 = v32[3];
    *((_DWORD *)this + 298) = v32[3];
    if ( v11
      && (int)CLegacySurfaceManager::RegisterForDxUpdates(
                (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL),
                this,
                v23) < 0 )
    {
      CWindowNode::FlushVistaBltTokens(this);
    }
    v24 = *((_DWORD *)Element + 10);
    if ( v24 )
    {
      v25 = 88LL * (unsigned int)(v24 - 1);
      v38 = (int)*(float *)(*v18 + v25 + 32);
      v39 = (int)*(float *)(*v18 + v25 + 36);
      v40 = (int)*(float *)(*v18 + v25 + 40);
      v41 = (int)*(float *)(*v18 + v25 + 44);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxn(
          *(_DWORD *)(*v18 + v25 + 8),
          (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Pending,
          *(_DWORD *)(*v18 + v25 + 12),
          *((_QWORD *)this + 103),
          *(_DWORD *)(*v18 + v25 + 8));
    }
    goto LABEL_30;
  }
  v6 = -2147024809;
  v28 = 930;
  v8 = -2147024809;
LABEL_3:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v28);
  return v6;
}
