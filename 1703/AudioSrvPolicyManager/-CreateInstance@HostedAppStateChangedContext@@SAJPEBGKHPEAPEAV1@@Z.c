/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001E6B4
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800158D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800100A8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall HostedAppStateChangedContext::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        struct HostedAppStateChangedContext **a4)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v12 = v9;
  if ( v9 )
    *v9 = 0LL;
  else
    v12 = 0LL;
  if ( v12 )
  {
    *((_DWORD *)v12 + 2) = a2;
    v14 = -1LL;
    *((_DWORD *)v12 + 3) = a3;
    do
      ++v14;
    while ( a1[v14] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v14, v16, (unsigned __int16 **)v12);
    if ( v13 >= 0 )
    {
      *a4 = (struct HostedAppStateChangedContext *)v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    if ( *v12 )
    {
      CoTaskMemFree((LPVOID)*v12);
      *v12 = 0LL;
    }
    operator delete(v12, 0x10uLL);
  }
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v13);
    }
    AudPolicyLogError("HostedAppStateChangedContext::CreateInstance", 966, v13);
  }
  return (unsigned int)v13;
}
