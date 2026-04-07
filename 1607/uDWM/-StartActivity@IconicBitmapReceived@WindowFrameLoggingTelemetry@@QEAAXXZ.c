/*
 * XREFs of ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078FFC
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180077A70 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D55C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F1FC (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180079518 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::StartActivity(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  __int64 v2; // rdx
  const struct _TlgProvider_t *v3; // rdi
  const GUID *v4; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)WindowFrameLogging::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v9 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v8 = 4;
    v4 = (const GUID *)wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v3, &unk_1800A78E1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v4, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::IconicBitmapReceived *)((char *)this + 8),
      v2);
}
