/*
 * XREFs of ?Stop@CAudioStream@@UEAAJXZ @ 0x180019760
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180024310 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  CSharedStreamGroupProxy *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 (__fastcall *v4)(CSharedStreamGroupProxy *__hidden, unsigned __int64); // rax
  int v5; // eax
  unsigned int v6; // ebx

  v2 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 7);
  v3 = *((_QWORD *)this + 6);
  v4 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, unsigned __int64))(*(_QWORD *)v2 + 112LL);
  if ( v4 == CSharedStreamGroupProxy::StopStream )
    v5 = CSharedStreamGroupProxy::StopStream(v2, v3);
  else
    v5 = v4(v2, v3);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::Stop", 0x2A6u, v5);
  else
    *((_BYTE *)this + 344) = 0;
  return v6;
}
