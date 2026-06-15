/*
 * XREFs of ?ResetEndpoint@CAudioStream@@UEAAJXZ @ 0x180064FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ResetEndpoint(CAudioStream *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 120LL))(*((_QWORD *)this + 7));
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::ResetEndpoint", 708, v1);
  return v2;
}
