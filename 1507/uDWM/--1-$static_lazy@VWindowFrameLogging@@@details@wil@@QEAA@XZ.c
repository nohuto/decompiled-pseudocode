/*
 * XREFs of ??1?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAA@XZ @ 0x1800483D0
 * Callers:
 *     ??__Fwrapper@?1??Instance@WindowFrameLogging@@KAPEAV1@XZ@YAXXZ @ 0x18004AD30 (--__Fwrapper@-1--Instance@WindowFrameLogging@@KAPEAV1@XZ@YAXXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

int __fastcall wil::details::static_lazy<WindowFrameLogging>::~static_lazy<WindowFrameLogging>(__int64 a1)
{
  int result; // eax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  result = InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v2, &v3);
  if ( result )
  {
    if ( !(_DWORD)v2 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
  }
  return result;
}
