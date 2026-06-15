/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180017730
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800172D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x1800179BC (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x180021B3C (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  LPVOID *v8; // rbx
  HANDLE ProcessHeap; // rax
  const struct _TlgProvider_t *v10; // rcx
  UINT32 v11; // [rsp+20h] [rbp-39h]
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  LPVOID lpMem; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+68h] [rbp+Fh]
  LPVOID *p_lpMem; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  unsigned int *v19; // [rsp+80h] [rbp+27h]
  __int64 v20; // [rsp+88h] [rbp+2Fh]

  result = 0LL;
  v12 = 0;
  lpMem = 0LL;
  if ( g_ApplicationManager )
  {
    result = HostedAppStateChangedContext::CreateInstance(a2, a3, a4, (struct HostedAppStateChangedContext **)&lpMem);
    v8 = (LPVOID *)lpMem;
    v12 = result;
    if ( (int)result >= 0 )
    {
      result = QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(v5, lpMem);
      v12 = result;
      if ( (int)result >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
    {
      if ( *v8 )
      {
        CoTaskMemFree(*v8);
        *v8 = 0LL;
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v8);
      result = v12;
    }
    if ( (int)result < 0 )
    {
      v10 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, result);
        result = v12;
      }
      if ( (unsigned int)dword_180034030 > 2 )
      {
        v16 = 9LL;
        v15 = "__FUNC__";
        p_lpMem = &lpMem;
        v19 = &v12;
        LODWORD(lpMem) = 504;
        v18 = 4LL;
        v20 = 4LL;
        TlgWrite(v10, &unk_18002D869, v6, v7, v11, &pData);
        return v12;
      }
    }
  }
  return result;
}
