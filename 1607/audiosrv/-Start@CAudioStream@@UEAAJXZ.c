/*
 * XREFs of ?Start@CAudioStream@@UEAAJXZ @ 0x1800197C0
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180024330 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Start(CAudioStream *this)
{
  CSharedStreamGroupProxy *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 (__fastcall *v4)(CSharedStreamGroupProxy *__hidden, unsigned __int64); // rax
  int started; // eax
  unsigned int v6; // ebx

  v2 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 7);
  v3 = *((_QWORD *)this + 6);
  v4 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, unsigned __int64))(*(_QWORD *)v2 + 104LL);
  if ( v4 == CSharedStreamGroupProxy::StartStream )
    started = CSharedStreamGroupProxy::StartStream(v2, v3);
  else
    started = v4(v2, v3);
  v6 = started;
  if ( started < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::Start", 0x286u, started);
  else
    *((_BYTE *)this + 344) = 1;
  return v6;
}
