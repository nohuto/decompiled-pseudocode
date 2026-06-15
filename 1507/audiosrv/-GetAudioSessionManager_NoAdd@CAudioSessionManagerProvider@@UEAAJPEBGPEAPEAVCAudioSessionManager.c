/*
 * XREFs of ?GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180081230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
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

  v3 = 0;
  if ( !a2 || !a3 )
  {
    v3 = -2147024809;
LABEL_25:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x15u,
        (__int64)&WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
        v3);
    }
    return (unsigned int)v3;
  }
  *a3 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x13u,
      (__int64)&WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
      a2);
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
    *a3 = *(struct CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v7);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x14u,
        (__int64)&WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids);
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
