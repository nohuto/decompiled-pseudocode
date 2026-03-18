/*
 * XREFs of xxxPointerCallHook @ 0x1C000B9B8
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsMiPPointerMessage @ 0x1C000BA30 (IsMiPPointerMessage.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01E158C (PrepareSentPointerMessageForClient.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01F78AC (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01F9034 (-IsPointerMsgRedirected@@YAH_KPEAH@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F9A0C (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(int a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _OWORD *v6; // rbx
  unsigned __int16 *v9; // rdi
  unsigned __int16 *v10; // rsi
  unsigned __int64 ThreadPointerData; // rax
  int v13; // eax
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // r8
  unsigned __int16 *v16; // rdx
  struct _LIST_ENTRY *v17; // rax
  unsigned __int16 v18; // r10
  struct tagTHREADINPUTPOINTERLIST *v19; // r11
  unsigned int v20; // edi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int Valid; // eax
  _OWORD v24[3]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  v25 = 0;
  v6 = (_OWORD *)a3;
  switch ( a4 )
  {
    case 3u:
      v9 = (unsigned __int16 *)(a3 + 16);
      v10 = (unsigned __int16 *)(a3 + 8);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 16)) )
        return a5;
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL),
                            *v9,
                            0LL,
                            0LL,
                            0LL);
      break;
    case 4u:
      v10 = (unsigned __int16 *)(a3 + 8);
      v9 = (unsigned __int16 *)(a3 + 16);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 8)) )
        return a5;
      ThreadPointerData = *(_QWORD *)v6;
      break;
    case 0xCu:
      v9 = (unsigned __int16 *)(a3 + 16);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 24), *(_QWORD *)(a3 + 16)) )
        return a5;
      v10 = (unsigned __int16 *)v6 + 4;
      ThreadPointerData = *((_QWORD *)v6 + 1);
      break;
    default:
      return a5;
  }
  if ( !ThreadPointerData || (unsigned int)IsPointerMsgRedirected(ThreadPointerData, &v25) && !v25 )
    return a5;
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
      v15 = (unsigned __int16 *)v6;
      v16 = v10;
      v14 = v9;
    }
    else
    {
      if ( a4 != 12 )
      {
        v13 = 0;
        goto LABEL_25;
      }
      v14 = (unsigned __int16 *)v6 + 12;
      v15 = v10;
      v16 = v9;
    }
    v13 = PrepareSentPointerMessageForClient(v14, v16, v15, 1LL);
LABEL_25:
    v20 = a5;
    if ( v13 )
    {
      Valid = PhkFirstValid(gptiCurrent, a4);
      v20 = xxxCallHook2(Valid, a1, a2, (_DWORD)v6, 0LL);
      RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL));
    }
    return v20;
  }
  v17 = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 960LL), *v9);
  if ( v17 )
  {
    v13 = AddThreadPointerHookData(
            v19,
            v18,
            HIDWORD(v17[1].Flink),
            (unsigned __int64)v17[1].Blink,
            (unsigned int)v17[2].Flink,
            (HWND)v17[2].Blink);
    if ( v13 )
    {
      v21 = v6[1];
      v24[0] = *v6;
      v22 = v6[2];
      v6 = v24;
      v24[1] = v21;
      v24[2] = v22;
    }
    goto LABEL_25;
  }
  return a5;
}
