/*
 * XREFs of ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18000A418
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C3F0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001E8C0 (-FireProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINil.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RpcOptionsHelper::GetRpcOptions(struct IUnknown *a1, struct IRpcOptions **a2)
{
  signed int v4; // edi
  struct IRpcOptions *v5; // rsi
  struct IRpcOptions *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v7 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IRpcOptions **))a1->lpVtbl->QueryInterface)(
           a1,
           &GUID_00000144_0000_0000_c000_000000000046,
           &v7);
    if ( v4 >= 0
      && (v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, struct IUnknown *, __int64, __int64 *, __int64))v7->lpVtbl->Query)(
                 v7,
                 a1,
                 2LL,
                 &v8,
                 -2LL),
          v4 >= 0)
      && (v4 = v8 != 1 ? 0x80004002 : 0, v8 == 1) )
    {
      v5 = 0LL;
      *a2 = v7;
    }
    else
    {
      v5 = v7;
    }
    if ( v5 )
    {
      v7 = 0LL;
      ((void (__fastcall *)(struct IRpcOptions *))v5->lpVtbl->Release)(v5);
    }
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return (unsigned int)v4;
}
