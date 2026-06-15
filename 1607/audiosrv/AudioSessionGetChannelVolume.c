/*
 * XREFs of AudioSessionGetChannelVolume @ 0x180060E00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetChannelVolume(_QWORD *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 328LL))(*a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetChannelVolume", 2186, v1);
  return v2;
}
