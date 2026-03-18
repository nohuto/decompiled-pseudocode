/*
 * XREFs of _DelegateCapturePointers @ 0x1C01E179C
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01E0F38 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     NtUserDelegateCapturePointers @ 0x1C0218940 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E0FB4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC8E0 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F670 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  struct _LIST_ENTRY *ThreadPointerData; // rax
  struct _LIST_ENTRY *v9; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  int v11; // eax
  int v12; // edi
  const struct tagPOINTERINPUTFRAME *v13; // rcx
  unsigned __int16 v14; // r9
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  struct tagPOINTERINPUTFRAME *v16; // rcx
  int *v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
  {
    v5 = (_DWORD *)(a2 + 8);
    do
    {
      if ( v5[2] )
      {
        v6 = *(_QWORD *)v5;
        v19 = *(v5 - 1);
        v7 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
        ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(v7 + 960), *((_WORD *)v5 - 4));
        v9 = ThreadPointerData;
        if ( ThreadPointerData
          && (PointerList::GetPointerCapture((PointerList *)ThreadPointerData[1].Blink, 0LL, (int)&v20, 0LL, v18), v20)
          && v20 == v6
          && ((Blink = v9[1].Blink[2].Blink) != 0LL ? (v11 = (int)Blink[1].Blink) : (v11 = 0), v19 == v11) )
        {
          LODWORD(v9[3].Flink) |= 4u;
          *(_DWORD *)(v7 + 996) = 1;
          v12 = 1;
          SetWakeBit(v7, 0x1000u);
        }
        else
        {
          v12 = 0;
          v13 = FindAndReferenceFrameById(*(v5 - 1));
          if ( v13 )
          {
            NodeInFrame = FindNodeInFrame(v13, v14, 0LL);
            if ( NodeInFrame )
              *((_DWORD *)NodeInFrame + 17) |= 0x200000u;
            UnreferenceFrameInt(v16);
          }
        }
        DelegateDiscardMessages(*(struct tagQ **)(v7 + 384), v12, (struct tagDELEGATEPOINTERMAP *)(a2 + 24 * v2));
      }
      v2 = (unsigned int)(v2 + 1);
      v5 += 6;
    }
    while ( (unsigned int)v2 < a1 );
  }
  return 1LL;
}
