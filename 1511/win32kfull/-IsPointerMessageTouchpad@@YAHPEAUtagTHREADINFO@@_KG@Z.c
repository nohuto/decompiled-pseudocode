/*
 * XREFs of ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsMouseInPointerActive @ 0x1C006440C (IsMouseInPointerActive.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  struct tagPOINTERINPUTFRAME *v8; // rax

  v3 = 0;
  if ( (*((_DWORD *)a1 + 268) & 0x2000) != 0 )
    return 0LL;
  if ( !a2 )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)a1 + 60, a3);
    if ( !ThreadPointerData || *((_DWORD *)ThreadPointerData + 5) != 5 )
      return v3;
    return 1;
  }
  if ( a2 == -1 )
    return 1;
  if ( (unsigned int)IsMouseInPointerActive(a1, 0LL) && a3 )
    return v3;
  v8 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  if ( v8 )
  {
    LOBYTE(v3) = *(_DWORD *)(216LL * *(unsigned int *)(a2 + 32) + *((_QWORD *)v8 + 9) + 56) == 5;
    UnreferenceFrameInt(v8);
    return v3;
  }
  return 0LL;
}
