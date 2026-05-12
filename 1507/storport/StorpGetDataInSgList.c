/*
 * XREFs of StorpGetDataInSgList @ 0x1C0029474
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDataInSgList(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  if ( a3 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v4 = *(_QWORD *)(a2 + 96);
    else
      v4 = *(_QWORD *)(a2 + 48);
    *a3 = *(_QWORD *)(v4 + 144);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Cu,
        (__int64)&WPP_8a1d37565fd3ed53073ecf5f585bed2d_Traceguids);
    }
    return 3238002694LL;
  }
  return result;
}
