/*
 * XREFs of xxxSendPointerMessageWorker @ 0x1C01E1F08
 * Callers:
 *     xxxSendPointerMessage @ 0x1C01E1E8C (xxxSendPointerMessage.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FAF30 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v8; // r8

  if ( (char)a1[44] < 0 || (char)a1[43] < 0 || (a1[42] & 4) != 0 )
    return 0LL;
  if ( (_DWORD)a2 == 528 )
    v8 = 582LL;
  else
    v8 = a4;
  return ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           v8,
           a3,
           a5);
}
