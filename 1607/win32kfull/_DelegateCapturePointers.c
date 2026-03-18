/*
 * XREFs of _DelegateCapturePointers @ 0x1C01D7AF4
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01D7290 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     NtUserDelegateCapturePointers @ 0x1C02115F0 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0AC0 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01D730C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F3B80 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  struct _LIST_ENTRY *ThreadPointerData; // rax
  struct _LIST_ENTRY *v9; // rdi
  __int64 v10; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int v12; // eax
  int v13; // edi
  const struct tagPOINTERINPUTFRAME *v14; // rcx
  __int16 v15; // r9
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  __int64 v17; // rdx
  struct tagPOINTERINPUTFRAME *v18; // rcx
  __int64 v19; // r8
  int *v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
  {
    v5 = (_DWORD *)(a2 + 8);
    do
    {
      if ( v5[2] )
      {
        v6 = *(_QWORD *)v5;
        v22 = *(v5 - 1);
        v7 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
        ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(v7 + 968), *((_WORD *)v5 - 4));
        v9 = ThreadPointerData;
        if ( ThreadPointerData
          && (PointerList::GetPointerCapture((PointerList *)ThreadPointerData[1].Blink, 0LL, (int)&v23, 0LL, v21), v23)
          && v23 == v6
          && ((Blink = v9[1].Blink[2].Blink) != 0LL ? (v12 = (int)Blink[1].Blink) : (v12 = 0), v22 == v12) )
        {
          LODWORD(v9[3].Flink) |= 4u;
          *(_DWORD *)(v7 + 1004) = 1;
          v13 = 1;
          SetWakeBit(v7, 4096LL, v10);
        }
        else
        {
          v13 = 0;
          v14 = FindAndReferenceFrameById(*(v5 - 1));
          if ( v14 )
          {
            NodeInFrame = FindNodeInFrame(v14, v15, 0LL);
            if ( NodeInFrame )
              *((_DWORD *)NodeInFrame + 17) |= 0x200000u;
            UnreferenceFrameInt(v18, v17, v19);
          }
        }
        DelegateDiscardMessages(*(struct tagQ **)(v7 + 384), v13, (struct tagDELEGATEPOINTERMAP *)(a2 + 24 * v2));
      }
      v2 = (unsigned int)(v2 + 1);
      v5 += 6;
    }
    while ( (unsigned int)v2 < a1 );
  }
  return 1LL;
}
