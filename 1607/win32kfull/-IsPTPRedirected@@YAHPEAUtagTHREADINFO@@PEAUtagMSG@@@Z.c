/*
 * XREFs of ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01F018C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000D13C (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsTouchpadPointerInputMessage @ 0x1C01D8658 (IsTouchpadPointerInputMessage.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01E7E3C (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 */

__int64 __fastcall IsPTPRedirected(struct tagTHREADINFO *a1, struct tagMSG *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx

  v4 = 0;
  if ( (unsigned int)IsPointerMessageTouchpad(a1, 0LL, *((_WORD *)a2 + 8))
    && IsTouchpadPointerInputMessage(*((_DWORD *)a2 + 2))
    && FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 968), *((_WORD *)a2 + 8)) )
  {
    if ( GetPTPShellListener() )
      v6 = *(_QWORD *)GetPTPShellListener();
    else
      v6 = 0LL;
    if ( *(_QWORD *)(v5 + 40) == v6 )
      return 1;
  }
  return v4;
}
