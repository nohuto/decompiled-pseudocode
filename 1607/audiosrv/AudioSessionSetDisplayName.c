/*
 * XREFs of AudioSessionSetDisplayName @ 0x180061580
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionSetDisplayName(_QWORD *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 192LL))(*a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetDisplayName", 1834, v1);
  return v2;
}
