/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x180021B3C
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180017730 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
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
  const GUID *v12; // r8
  const GUID *v13; // r9
  _QWORD *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // r9
  HANDLE v17; // rax
  const struct _TlgProvider_t *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-49h]
  unsigned int v20; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp-1h]
  _QWORD *v25; // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+78h] [rbp+Fh]
  unsigned int *v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]

  v20 = 0;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v21 = v9;
  v14 = v9;
  if ( v9 )
    *v9 = 0LL;
  else
    v14 = 0LL;
  if ( v14 )
  {
    *((_DWORD *)v14 + 2) = a2;
    v16 = -1LL;
    *((_DWORD *)v14 + 3) = a3;
    do
      ++v16;
    while ( a1[v16] );
    result = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v16, v19, (unsigned __int16 **)v14);
    v20 = result;
    if ( (int)result >= 0 )
    {
      *a4 = (struct HostedAppStateChangedContext *)v14;
      v14 = 0LL;
    }
  }
  else
  {
    result = 2147942414LL;
    v20 = -2147024882;
  }
  if ( v14 )
  {
    if ( *v14 )
    {
      CoTaskMemFree((LPVOID)*v14);
      *v14 = 0LL;
    }
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v14);
    result = v20;
  }
  if ( (int)result < 0 )
  {
    v18 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v20;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v24 = 9LL;
      v23 = "__FUNC__";
      v25 = &v21;
      v27 = &v20;
      LODWORD(v21) = 966;
      v26 = 4LL;
      v28 = 4LL;
      TlgWrite(v18, &unk_18002D869, v12, v13, v19, &pData);
      return v20;
    }
  }
  return result;
}
