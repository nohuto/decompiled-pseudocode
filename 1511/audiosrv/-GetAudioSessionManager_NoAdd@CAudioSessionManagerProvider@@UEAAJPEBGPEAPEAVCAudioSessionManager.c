/*
 * XREFs of ?GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18007C4F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManager_NoAdd(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  int v3; // edi
  __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  struct CAudioSessionManager *v10; // r9

  v3 = 0;
  if ( !a2 || !a3 )
  {
    v3 = -2147024809;
LABEL_25:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids,
        v3);
    }
    return (unsigned int)v3;
  }
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v7 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)this + 18) )
        ATL::AtlThrowImpl(-2147024809);
      if ( !_wcsicmp(*(const wchar_t **)(*((_QWORD *)this + 17) + 8 * v8), a2) )
        break;
      v7 = (unsigned int)(v7 + 1);
      v8 = (unsigned int)v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 14) )
        goto LABEL_12;
    }
    if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 14) )
      ATL::AtlThrowImpl(-2147024809);
    v10 = *(struct CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v7);
    *a3 = v10;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids,
        (__int64)v10);
    }
  }
LABEL_12:
  v9 = (__int64)*a3;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  else
    v3 = -2147023728;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v3 < 0 )
    goto LABEL_25;
  return (unsigned int)v3;
}
