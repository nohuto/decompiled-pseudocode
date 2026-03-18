/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800434E4
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C (-DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18003B8E4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18004BC54 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x18004C570 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannelSameProcess(CComposition *this, const struct UCE_RDP_HEADER *a2)
{
  unsigned int v3; // edx
  CDataStreamWriter *v4; // rsi
  int AttachedChannel; // eax
  unsigned int v7; // edi
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int *(__fastcall *Blink)(CDataStreamBlock *__hidden); // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdi
  const void *(__fastcall *v12)(CDataStreamBlock *__hidden); // rax
  unsigned int *v13; // rax
  int v14; // eax
  struct _LIST_ENTRY *p_Blink; // rax
  struct _LIST_ENTRY *v17; // r14
  unsigned int v18; // edx
  struct CChannelContext *v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 4);
  v4 = 0LL;
  v19 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, v3, &v19);
  v7 = AttachedChannel;
  if ( AttachedChannel >= 0 )
  {
    v4 = (CDataStreamWriter *)*((_QWORD *)a2 + 3);
    v17 = CDataStreamWriter::FlushData(v4);
    Flink = v17->Flink;
    if ( v17->Flink != v17 )
    {
      if ( Flink )
        Flink = (struct _LIST_ENTRY *)((char *)Flink - 8);
      while ( 1 )
      {
        Blink = (unsigned int *(__fastcall *)(CDataStreamBlock *__hidden))Flink->Flink->Blink;
        v10 = Blink == CDataStreamBlock::GetWrittenSize
            ? CDataStreamBlock::GetWrittenSize((CDataStreamBlock *)Flink)
            : Blink((CDataStreamBlock *)Flink);
        v11 = v10;
        v12 = (const void *(__fastcall *)(CDataStreamBlock *__hidden))Flink->Flink[1].Flink;
        v13 = v12 == CDataStreamBlock::GetData
            ? (unsigned int *)CDataStreamBlock::GetData((CDataStreamBlock *)Flink)
            : (unsigned int *)v12((CDataStreamBlock *)Flink);
        v14 = CComposition::ProcessCommandBatch((CRenderTargetManager **)this, v13, *v11, (struct CResourceTable **)v19);
        v7 = v14;
        if ( v14 < 0 )
          break;
        Flink = Flink->Blink;
        if ( Flink )
          Flink = (struct _LIST_ENTRY *)((char *)Flink - 8);
        if ( Flink )
          p_Blink = (struct _LIST_ENTRY *)&Flink->Blink;
        else
          p_Blink = 0LL;
        if ( p_Blink == v17 )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x23Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x234u);
  }
LABEL_15:
  if ( v4 )
    CCommandBatch::`scalar deleting destructor'(v4, v18);
  if ( v19 )
    CMILRefCountBase::Release(v19);
  return v7;
}
