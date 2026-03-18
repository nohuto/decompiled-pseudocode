/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E39C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C454 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18004C500 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18004E468 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18004E838 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18004EA5C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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
  int v14; // eax

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
    goto LABEL_2;
  if ( a5 != v10 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x47u);
    goto LABEL_11;
  }
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 112));
  *((_BYTE *)this + 192) = 0;
  v12 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 112), a4, a5);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x50u);
  }
  else
  {
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Handles, 0x56u);
    }
    else
    {
      v14 = CRenderData::CheckPrimitiveCount(this);
      v9 = v14;
      if ( v14 >= 0 )
      {
LABEL_2:
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x59u);
    }
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_11:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
