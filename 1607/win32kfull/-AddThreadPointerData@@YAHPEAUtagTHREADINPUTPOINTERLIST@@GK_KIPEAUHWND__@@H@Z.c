/*
 * XREFs of ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01EE968
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01D78E4 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01EEB04 (-AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01F3E18 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall AddThreadPointerData(
        struct _LIST_ENTRY *a1,
        __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        HWND a6,
        int a7)
{
  struct _LIST_ENTRY *v10; // r9
  unsigned int v11; // edi
  int v12; // ecx
  struct _LIST_ENTRY *ThreadPointerData; // rax
  struct tagTHREADINPUTPOINTERLIST *v14; // rcx
  struct tagTHREADPOINTERDATA *v15; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int Flink; // eax
  int v18; // ecx

  v10 = a1;
  if ( (*(_DWORD *)(a4 + 36) & 2) != 0 )
    PointerList::SetDelegateAction(a4, 2LL);
  v11 = 1;
  if ( a5 - 578 <= 0xF )
  {
    v12 = 32785;
    if ( _bittest(&v12, a5 - 578) )
      PointerList::SetDelegateAction(a4, 1LL);
  }
  ThreadPointerData = FindThreadPointerData(v10, a2);
  v15 = (struct tagTHREADPOINTERDATA *)ThreadPointerData;
  if ( !ThreadPointerData )
  {
    v15 = AllocAndLinkThreadPointerData(v14);
LABEL_14:
    if ( v15 )
    {
      v18 = *((_DWORD *)v15 + 12);
      *((_QWORD *)v15 + 5) = a6;
      *((_WORD *)v15 + 8) = a2;
      *((_DWORD *)v15 + 5) = a3;
      *((_DWORD *)v15 + 12) = a7 & 1 | v18 & 0xFFFFFFF4;
      *((_QWORD *)v15 + 3) = a4;
      *((_DWORD *)v15 + 8) = a5;
      _InterlockedAdd((volatile signed __int32 *)(a4 + 24), 1u);
      ++*(_BYTE *)(a4 + 52);
    }
    else
    {
      return 0;
    }
    return v11;
  }
  Blink = ThreadPointerData[1].Blink;
  if ( Blink != (struct _LIST_ENTRY *)a4 )
  {
    PointerList::UnreferenceMsgData(Blink, 4LL);
    *((_QWORD *)v15 + 3) = 0LL;
    goto LABEL_14;
  }
  Flink = (int)ThreadPointerData[3].Flink;
  if ( (Flink & 1) == 0 && a7 )
    *((_DWORD *)v15 + 12) = Flink | 1;
  *((_DWORD *)v15 + 12) &= 0xFFFFFFF5;
  *((_QWORD *)v15 + 5) = a6;
  *((_DWORD *)v15 + 8) = a5;
  return v11;
}
