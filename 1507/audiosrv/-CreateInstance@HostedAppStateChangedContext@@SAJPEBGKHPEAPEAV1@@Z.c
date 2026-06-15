/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18002D2A8
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x18002D790 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
  unsigned __int64 v12; // r9
  int v13; // edi
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
    v12 = -1LL;
    *((_DWORD *)v11 + 3) = a3;
    do
      ++v12;
    while ( a1[v12] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, (__int16 *)a1, v12, v15, (char **)v11);
    if ( v13 >= 0 )
    {
      *a4 = (struct HostedAppStateChangedContext *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v11 )
    CHostedAppInteractivity::`scalar deleting destructor'((void **)v11);
  if ( v13 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      35LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v13);
  }
  return (unsigned int)v13;
}
