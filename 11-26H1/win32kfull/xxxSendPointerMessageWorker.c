/*
 * XREFs of xxxSendPointerMessageWorker @ 0x140137038
 * Callers:
 *     xxxSendPointerMessage @ 0x140136FB4 (xxxSendPointerMessage.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x140137CA0 (EditionPointerParentNotify.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x140159C9C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _BYTE *v6; // rax
  unsigned int v9; // esi
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // rdx

  v6 = *(_BYTE **)(a1 + 40);
  v9 = a2;
  if ( (char)v6[20] < 0 || (char)v6[19] < 0 || (v6[18] & 4) != 0 )
    return 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(W32GetUserSessionState(a1, a2)
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 70904);
  if ( v9 == 528 )
  {
    v13 = 528LL;
    v12 = 582LL;
  }
  else
  {
    v12 = a4;
    v13 = v9;
  }
  return v11(a1, v13, v12, a3, a5);
}
