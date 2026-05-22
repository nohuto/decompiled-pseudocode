/*
 * XREFs of ?s_FireViewHitTestCallback@Win32kInterop@@SAHPEAX0KPEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18000C810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_FireViewHitTestCallback(
        void *a1,
        void *a2,
        int a3,
        HMONITOR a4,
        struct tagPOINT a5)
{
  __int64 v6; // r9

  v6 = 0LL;
  if ( (gdwMitConfig & 4) == 0 )
    return 0LL;
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v6 = 8LL;
  }
  else if ( a3 == 4 )
  {
    v6 = 2LL;
  }
  (*(void (__fastcall **)(_QWORD, void *, void *, __int64, HMONITOR, struct tagPOINT))(**((_QWORD **)Win32kInterop::s_pInterop
                                                                                        + 5)
                                                                                     + 112LL))(
    *((_QWORD *)Win32kInterop::s_pInterop + 5),
    a1,
    a2,
    v6,
    a4,
    a5);
  return 1LL;
}
