/*
 * XREFs of MmPerfLogSessionRundown @ 0x14065A04C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmPerfLogSessionRundown(unsigned int a1, int a2)
{
  unsigned __int16 v3; // di
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 NextSession; // rax
  void *v7; // rbx
  __int64 *v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]

  v3 = 589;
  if ( !a2 )
    v3 = 588;
  v11 = 0;
  v9 = &v12;
  v4 = 0LL;
  v10 = 12;
  while ( 1 )
  {
    NextSession = MmGetNextSession(v4);
    v7 = (void *)NextSession;
    if ( !NextSession )
      break;
    v5 = *(_QWORD *)(NextSession + 1024);
    v13 = *(_DWORD *)(v5 + 8);
    v12 = v5;
    EtwpLogKernelEvent((__int64)&v9, EtwpHostSiloState, a1, 1u, v3, 0x401803u);
    v4 = v7;
  }
  return 0LL;
}
