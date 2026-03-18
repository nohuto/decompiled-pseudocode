/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01E12B4
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C0218E20 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  int v2; // ecx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), a1, 0LL, &v4, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v4 )
  {
    v2 = 5;
    goto LABEL_3;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
  {
LABEL_2:
    v2 = 87;
LABEL_3:
    UserSetLastError(v2);
    return 0LL;
  }
  return 1LL;
}
