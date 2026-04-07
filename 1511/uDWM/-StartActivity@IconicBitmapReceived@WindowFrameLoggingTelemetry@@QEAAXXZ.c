/*
 * XREFs of ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC
 * Callers:
 *     ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800757C4 (--$-0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010404 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004EB9C (-zInternalRelatedId@-$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007833C (-zInternalStart@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::StartActivity(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  const struct _TlgProvider_t *v5; // rdi
  const GUID *v6; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<1,35184372088832,5>::zInternalStart();
  v5 = *(const struct _TlgProvider_t **)(*((_QWORD *)this + 6) + 40LL);
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v11 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v10 = 4;
    v6 = (const GUID *)wil::ActivityBase<1,0,5>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_1800A9301, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::IconicBitmapReceived *)((char *)this + 8),
      v2,
      v3,
      v4);
}
