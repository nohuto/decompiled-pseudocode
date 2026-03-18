/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01E0F7C
 * Callers:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C006D340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 * Callees:
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F72D4 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01F73E8 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8C08 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  struct tagTHREADINPUTPOINTERLIST *v11; // rcx
  unsigned __int64 v13; // rax
  HWND v14; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+48h] BYREF
  int v19; // [rsp+C0h] [rbp+50h] BYREF

  v4 = *a3;
  v5 = *a1;
  if ( !(unsigned int)MakePointerMessage(*a3, *a1, *a2, &v15, &v16, &v17, &v18, &v19, &v14) )
    return 0LL;
  v11 = (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL);
  if ( !(a4
       ? AddThreadPointerHookData(v11, v17, v18, v4, v5, v14)
       : (unsigned int)AddThreadPointerData((struct _LIST_ENTRY *)v11, v17, v18, v4, v5, v14, 0)) )
    return 0LL;
  v13 = v15;
  *a1 = v5;
  *a2 = (void *)v13;
  *a3 = v16;
  return 1LL;
}
