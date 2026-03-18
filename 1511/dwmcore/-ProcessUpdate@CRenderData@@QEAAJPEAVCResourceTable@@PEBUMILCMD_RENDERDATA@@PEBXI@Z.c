/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009E610
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009E728 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009EC3C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18009F93C (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009F970 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // eax
  int v12; // eax
  int Handles; // eax

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
    goto LABEL_2;
  if ( a5 != v10 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x4Cu);
    goto LABEL_10;
  }
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 40));
  *((_BYTE *)this + 120) = 0;
  v12 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 40), a4, a5);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x55u);
  }
  else
  {
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles >= 0 )
    {
LABEL_2:
      CResource::NotifyOnChanged(this, 0, 0LL);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Handles, 0x5Bu);
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_10:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
