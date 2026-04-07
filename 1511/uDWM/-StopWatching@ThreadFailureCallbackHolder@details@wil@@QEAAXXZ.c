/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010460
 * Callers:
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180010080 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B5C (--1-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007665C (-IgnoreCurrentThread@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180076E44 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  _QWORD *v4; // rax
  wil::details::ThreadFailureCallbackHolder *v5; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL, v6);
  v4 = *(_QWORD **)this;
  *((_DWORD *)this + 6) = 0;
  while ( *v4 )
  {
    v5 = **(wil::details::ThreadFailureCallbackHolder ***)this;
    if ( v5 == this )
    {
      **(_QWORD **)this = *((_QWORD *)this + 2);
      break;
    }
    v4 = (_QWORD *)((char *)v5 + 16);
    *(_QWORD *)this = v4;
  }
  *(_QWORD *)this = 0LL;
}
