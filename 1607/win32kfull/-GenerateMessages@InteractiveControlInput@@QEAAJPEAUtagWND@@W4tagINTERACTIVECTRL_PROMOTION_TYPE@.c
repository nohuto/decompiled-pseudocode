/*
 * XREFs of ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C023EADC
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C023D1B8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E5F0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C023E9CC (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023EB9C (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 */

__int64 __fastcall InteractiveControlInput::GenerateMessages(__int64 a1, struct tagWND *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // xmm1_8
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+48h] [rbp-20h]

  v4 = 0;
  v9 = 0LL;
  if ( a2 )
    v9 = *(_QWORD *)a2;
  v10 = *(_OWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 16) = v9;
  v11 = *(_DWORD *)(a1 + 76);
  v12 = *(_QWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 48) = a3;
  v13 = *(__int64 **)(a1 + 40);
  v18 = v10;
  v19 = v12;
  v14 = *v13;
  v20 = v11;
  HandleIntObjUsageTelemetry(v14, a2, &v18);
  if ( (unsigned int)(a3 - 1) > 1 )
    return (unsigned int)InteractiveControlInput::GenerateCtrlInputMessages((InteractiveControlInput *)a1, a2, a4);
  if ( (a4 & 0x80u) != 0 )
    return (unsigned int)InteractiveControlDefaultScroller::GenerateMessages(
                           *(_QWORD *)(a1 + 40) + 312LL,
                           v15,
                           a1 + 52,
                           *(unsigned int *)(a1 + 48));
  return v4;
}
