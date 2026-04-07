/*
 * XREFs of ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180070B0C
 * Callers:
 *     ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180070230 (--$-0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D.c)
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800071D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004853C (-zInternalRelatedId@-$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007010C (-zInternalStart@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::StartActivity(
        WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *this)
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

  wil::ActivityBase<1,35184372088832,5>::zInternalStart((__int64)this);
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
    TlgWrite(v5, &unk_1800A7414, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)((char *)this + 8),
      v2,
      v3,
      v4);
}
