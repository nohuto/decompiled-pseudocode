/*
 * XREFs of ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000D13C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01F018C (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsMouseInPointerActive @ 0x1C01054A0 (IsMouseInPointerActive.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  struct tagPOINTERINPUTFRAME *v8; // rax

  v3 = 0;
  if ( (*((_DWORD *)a1 + 274) & 0x2000) != 0 )
    return 0LL;
  if ( !a2 )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 968), a3);
    if ( !ThreadPointerData || *((_DWORD *)ThreadPointerData + 5) != 5 )
      return v3;
    return 1;
  }
  if ( a2 == -1LL )
    return 1;
  if ( !(unsigned int)IsMouseInPointerActive(a1, 0LL) || !a3 )
  {
    if ( a2 <= 0xFFFFFFFF )
      return 0LL;
    v8 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
    if ( !v8 )
      return 0LL;
    LOBYTE(v3) = *(_DWORD *)(216LL * *(unsigned int *)(a2 + 32) + *((_QWORD *)v8 + 11) + 56) == 5;
    UnreferenceFrameInt(v8);
  }
  return v3;
}
