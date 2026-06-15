/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x180077874 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 113LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v8 + 8 * v7) == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)v6;
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        goto LABEL_13;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        114LL,
        (unsigned int)v6,
        (unsigned int)v6,
        *(_QWORD *)(v8 + 8 * v6));
    }
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v6) + 104LL) = a3 != 0;
  }
LABEL_13:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return 0LL;
}
