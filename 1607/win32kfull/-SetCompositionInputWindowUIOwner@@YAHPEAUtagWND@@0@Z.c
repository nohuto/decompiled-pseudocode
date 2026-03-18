/*
 * XREFs of ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C000C814
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000C718 (ResolveDCompInputHandleToPwnd.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C000C870 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SetCompositionInputWindowUIOwner(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  CInputQueueProp *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v6)
    && !(unsigned int)CoreWindowProp::IsComponent(a1)
    && *((_DWORD *)v6 + 6) )
  {
    CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v6, a2);
    return 1;
  }
  return v4;
}
