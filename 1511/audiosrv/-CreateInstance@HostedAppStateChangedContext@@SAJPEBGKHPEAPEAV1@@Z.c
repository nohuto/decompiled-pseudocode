/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x1800A4100
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180066E58 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall HostedAppStateChangedContext::CreateInstance(
        unsigned __int16 *a1,
        int a2,
        int a3,
        struct HostedAppStateChangedContext **a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // edi
  unsigned __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-38h]

  v8 = operator new(0x10uLL);
  v11 = v8;
  if ( v8 )
    *v8 = 0LL;
  else
    v11 = 0LL;
  if ( v11 )
  {
    *((_DWORD *)v11 + 2) = a2;
    v13 = -1LL;
    *((_DWORD *)v11 + 3) = a3;
    do
      ++v13;
    while ( a1[v13] );
    v12 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, (__int16 *)a1, v13, v15, (char **)v11);
    if ( v12 >= 0 )
    {
      *a4 = (struct HostedAppStateChangedContext *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
    CHostedAppInteractivity::`scalar deleting destructor'((void **)v11);
  if ( v12 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids, v12);
  }
  return (unsigned int)v12;
}
