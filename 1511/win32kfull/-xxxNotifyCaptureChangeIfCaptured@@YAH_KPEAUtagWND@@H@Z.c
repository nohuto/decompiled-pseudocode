/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendPointerMessageWorker @ 0x1C01E1F08 (xxxSendPointerMessageWorker.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC8E0 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01FCBA4 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F670 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned int *a1, struct tagWND *a2)
{
  struct tagWND *v3; // rsi
  unsigned int v4; // edi
  const struct tagPOINTERINPUTFRAME *v6; // rcx
  unsigned __int16 v7; // r9
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  struct tagPOINTERINPUTFRAME *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int *v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  PointerList::GetPointerCapture((PointerList *)a1, 0LL, (int)&v15, 0LL, v13);
  v3 = v15;
  v4 = 0;
  if ( !v15 )
    return 1LL;
  v6 = FindAndReferenceFrameById(a1[7]);
  if ( v6 )
  {
    NodeInFrame = FindNodeInFrame(v6, v7, 0LL);
    if ( NodeInFrame )
      *((_DWORD *)NodeInFrame + 17) |= 0x200000u;
    UnreferenceFrameInt(v9);
  }
  PointerList::SetDelegateAction(a1, 5LL);
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = v3;
  ++*((_DWORD *)v3 + 2);
  v10 = xxxSendPointerMessageWorker(v3, 588LL, (__int64)a1, *(_QWORD *)v3, 0LL, 183);
  ThreadUnlock1(v12, v11);
  LOBYTE(v4) = v10 != 0;
  return v4;
}
