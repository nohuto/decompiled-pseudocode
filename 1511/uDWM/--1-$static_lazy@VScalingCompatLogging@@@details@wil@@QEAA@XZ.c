/*
 * XREFs of ??1?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x18004EADC
 * Callers:
 *     ??__Fwrapper@?1??Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ @ 0x180051420 (--__Fwrapper@-1--Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     InitOnceBeginInitialize_0 @ 0x18004F182 (InitOnceBeginInitialize_0.c)
 */

int __fastcall wil::details::static_lazy<ScalingCompatLogging>::~static_lazy<ScalingCompatLogging>(__int64 a1)
{
  int result; // eax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  result = InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&v2, &v3);
  if ( result )
  {
    if ( !(_DWORD)v2 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
  }
  return result;
}
