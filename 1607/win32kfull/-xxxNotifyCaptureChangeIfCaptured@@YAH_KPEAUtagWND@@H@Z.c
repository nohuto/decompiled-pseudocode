/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1E50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0AC0 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x1C01D8180 (xxxSendPointerMessageWorker.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F3B80 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01F3E18 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned int *a1, struct tagWND *a2)
{
  struct tagWND *v3; // rsi
  unsigned int v4; // edi
  const struct tagPOINTERINPUTFRAME *v6; // rcx
  __int16 v7; // r9
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  __int64 v9; // rdx
  struct tagPOINTERINPUTFRAME *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // [rsp+20h] [rbp-38h]
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  PointerList::GetPointerCapture((PointerList *)a1, 0LL, (int)&v17, 0LL, v15);
  v3 = v17;
  v4 = 0;
  if ( !v17 )
    return 1LL;
  v6 = FindAndReferenceFrameById(a1[7]);
  if ( v6 )
  {
    NodeInFrame = FindNodeInFrame(v6, v7, 0LL);
    if ( NodeInFrame )
      *((_DWORD *)NodeInFrame + 17) |= 0x200000u;
    UnreferenceFrameInt(v10, v9, v11);
  }
  PointerList::SetDelegateAction(a1, 5LL);
  v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v16;
  v16[1] = v3;
  ++*((_DWORD *)v3 + 2);
  v12 = xxxSendPointerMessageWorker(v3, 588LL, (__int64)a1, *(_QWORD *)v3, 0LL, 183);
  ThreadUnlock1(v14, v13);
  LOBYTE(v4) = v12 != 0;
  return v4;
}
