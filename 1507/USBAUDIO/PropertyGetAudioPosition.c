/*
 * XREFs of PropertyGetAudioPosition @ 0x1C0018A80
 * Callers:
 *     <none>
 * Callees:
 *     WmiLogStreamPosition @ 0x1C00023E4 (WmiLogStreamPosition.c)
 *     __security_check_cookie @ 0x1C00066A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyGetAudioPosition(IRP *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  PKSPIN PinFromIrp; // rax
  _QWORD *Context; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]

  v4 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    *(_QWORD *)(a3 + 8) = Context[8];
    if ( *((_BYTE *)Context + 38) )
    {
      v4 = -1073741130;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD *))(*(_QWORD *)(Context[16] + 128LL) + 56LL))(PinFromIrp, v8);
      if ( v4 >= 0 )
        *(_OWORD *)a3 = v9;
    }
  }
  WmiLogStreamPosition(v8, v4);
  return (unsigned int)v4;
}
