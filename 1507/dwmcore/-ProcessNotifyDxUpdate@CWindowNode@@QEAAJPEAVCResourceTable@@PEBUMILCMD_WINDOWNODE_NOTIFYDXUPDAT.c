/*
 * XREFs of ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF8C (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x1800F0028 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180104CB0 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180104E38 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     Template_xxxn @ 0x180106C8C (Template_xxxn.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x18010A06C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180121A94 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x180121C34 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
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
  int v10; // r8d
  __int64 v11; // rdi
  char v12; // r12
  CDxAccumulationContext **v13; // r14
  bool v14; // dl
  int updated; // eax
  __int64 v16; // rax
  union _ULARGE_INTEGER v17; // rdx
  char *Element; // r15
  _QWORD *v19; // r14
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // edi
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // eax
  __int64 v26; // rdx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-B9h]
  unsigned int Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v31; // [rsp+48h] [rbp-91h]
  void *v32[4]; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v33[4]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v34; // [rsp+80h] [rbp-59h]
  __int128 v35; // [rsp+90h] [rbp-49h]
  __int128 v36; // [rsp+A0h] [rbp-39h]
  __int128 v37; // [rsp+B0h] [rbp-29h]
  __int64 v38; // [rsp+C0h] [rbp-19h]
  int v39; // [rsp+D0h] [rbp-9h]
  int v40; // [rsp+D4h] [rbp-5h]
  int v41; // [rsp+D8h] [rbp-1h]
  int v42; // [rsp+DCh] [rbp+3h]
  __int128 v43; // [rsp+E0h] [rbp+7h] BYREF

  v6 = 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)&v43);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v7, 78LL);
    if ( Resource )
      v11 = Resource - 16;
    else
      v11 = 0LL;
    v12 = 0;
    v13 = (CDxAccumulationContext **)((char *)this + 1248);
    v14 = 0;
    if ( !*((_QWORD *)this + 156) )
    {
      updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 156);
      v6 = updated;
      if ( updated < 0 )
      {
        v29 = 941;
LABEL_10:
        v8 = updated;
        goto LABEL_3;
      }
      v14 = 1;
    }
    if ( *v13 )
    {
      updated = CDxAccumulationContext::UpdateDxClipShape(*v13, v14);
      v6 = updated;
      if ( updated < 0 )
      {
        v29 = 950;
        goto LABEL_10;
      }
    }
    if ( !v11 )
      return v6;
    v16 = *(_QWORD *)((char *)a3 + 20);
    v17 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    *((_QWORD *)&v36 + 1) = 0LL;
    v37 = 0uLL;
    LODWORD(v38) = 0;
    *(_QWORD *)&v34 = v16;
    *((_QWORD *)&v34 + 1) = *(_QWORD *)((char *)a3 + 12);
    LODWORD(v36) = *((_DWORD *)a3 + 15);
    LOBYTE(v33[0]) = 0;
    v35 = v43;
    *(union _ULARGE_INTEGER *)&v33[2] = v17;
    CFlipChain::UpdatePending((CFlipChain *)v11, v17, v10);
    Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                        (struct _RTL_GENERIC_TABLE *)((char *)this + 968),
                        v33[3]);
    if ( !Element )
    {
      memset_0(&Buffer, 0, 0x30uLL);
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v11 + 16));
      Buffer = v33[3];
      v31 = v11;
      Element = (char *)RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 968), &Buffer, 0x30u, 0LL);
      if ( !Element )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3D4u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v32);
LABEL_30:
        CWindowNode::PendingDxUpdate::~PendingDxUpdate((void **)v33);
        return v6;
      }
      v12 = 1;
      DynArrayImpl<1>::~DynArrayImpl<1>(v32);
    }
    v19 = Element + 16;
    v20 = *((unsigned int *)Element + 10);
    v21 = v20 + 1;
    if ( (int)v20 + 1 < (unsigned int)v20 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_35:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x3D8u);
      goto LABEL_30;
    }
    v6 = 0;
    if ( v21 > *((_DWORD *)Element + 9) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 16), 0x58u, 1, v33);
      v22 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      v6 = v22;
      if ( v22 < 0 )
        goto LABEL_35;
    }
    else
    {
      v23 = *v19 + 88 * v20;
      *(_OWORD *)v23 = *(_OWORD *)v33;
      *(_OWORD *)(v23 + 16) = v34;
      *(_OWORD *)(v23 + 32) = v35;
      *(_OWORD *)(v23 + 48) = v36;
      *(_OWORD *)(v23 + 64) = v37;
      *(_QWORD *)(v23 + 80) = v38;
      *((_DWORD *)Element + 10) = v21;
    }
    v24 = v33[3];
    *((_DWORD *)this + 310) = v33[3];
    if ( v12
      && (int)CLegacySurfaceManager::RegisterForDxUpdates(
                (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL),
                this,
                v24) < 0 )
    {
      CWindowNode::FlushVistaBltTokens(this);
    }
    v25 = *((_DWORD *)Element + 10);
    if ( v25 )
    {
      v26 = 88LL * (unsigned int)(v25 - 1);
      v39 = (int)*(float *)(*v19 + v26 + 32);
      v40 = (int)*(float *)(*v19 + v26 + 36);
      v41 = (int)*(float *)(*v19 + v26 + 40);
      v42 = (int)*(float *)(*v19 + v26 + 44);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxn(
          *(_DWORD *)(*v19 + v26 + 8),
          (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Pending,
          *(_DWORD *)(*v19 + v26 + 12),
          *((_QWORD *)this + 109),
          *(_DWORD *)(*v19 + v26 + 8));
    }
    goto LABEL_30;
  }
  v6 = -2147024809;
  v29 = 929;
  v8 = -2147024809;
LABEL_3:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v29);
  return v6;
}
