/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D5B0
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003D4B4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18003D6C0 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18003D820 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800777A4 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180077E34 (-IgnoreCurrentThread@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180078300 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL, v6);
  v4 = *(_QWORD **)this;
  *((_DWORD *)this + 6) = 0;
  if ( *v4 )
  {
    while ( **(wil::details::ThreadFailureCallbackHolder ***)this != this )
    {
      v5 = (_QWORD *)(**(_QWORD **)this + 16LL);
      *(_QWORD *)this = v5;
      if ( !*v5 )
        goto LABEL_6;
    }
    **(_QWORD **)this = *((_QWORD *)this + 2);
  }
LABEL_6:
  *(_QWORD *)this = 0LL;
}
