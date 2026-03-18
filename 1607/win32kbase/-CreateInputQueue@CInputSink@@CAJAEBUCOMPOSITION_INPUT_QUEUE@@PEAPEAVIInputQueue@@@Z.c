/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C0048FA8
 * Callers:
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C0048E54 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0048F58 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C0048B38 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(const struct COMPOSITION_INPUT_QUEUE *a1, struct IInputQueue **a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // xmm0
  int v7; // eax
  __int64 v8; // xmm1_8
  __int64 v9; // rdx
  struct IInputQueue *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  struct IInputQueue *v14; // [rsp+50h] [rbp+8h] BYREF

  result = 0LL;
  *a2 = 0LL;
  v5 = *(_DWORD *)a1;
  if ( !v5 )
  {
    v10 = 0LL;
    if ( g_pInputManager )
      v10 = (CInputManager *)((char *)g_pInputManager + 96);
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    v10 = 0LL;
    if ( g_pInputManager )
      v10 = (CInputManager *)((char *)g_pInputManager + 104);
    goto LABEL_5;
  }
  if ( (unsigned int)(v5 - 2) <= 2 )
  {
    v6 = *((_OWORD *)a1 + 1);
    v7 = *((_DWORD *)a1 + 10);
    v8 = *((_QWORD *)a1 + 4);
    v9 = *((_QWORD *)a1 + 1);
    v11 = v6;
    v12 = v8;
    v13 = v7;
    result = CInputQueue::Create(v5, v9, &v11, (__int64 *)&v14);
    v10 = v14;
LABEL_5:
    *a2 = v10;
    return result;
  }
  return 3221225485LL;
}
