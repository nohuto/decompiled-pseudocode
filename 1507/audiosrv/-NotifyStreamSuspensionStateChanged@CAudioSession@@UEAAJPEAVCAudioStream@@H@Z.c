/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180004340
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180014690 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x18007C584 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  int v11; // eax

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      113LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      a2);
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
        goto LABEL_15;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        114LL,
        (unsigned int)v6,
        (unsigned int)v6,
        *(_QWORD *)(v8 + 8 * v6));
    }
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v9 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v6);
    v10 = !g_UseNewGraphBuilder;
    *(_BYTE *)(v9 + 112) = a3 != 0;
    if ( v10 )
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 48) + 136LL))(*(_QWORD *)(v9 + 48), a3);
    else
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 64) + 120LL))(*(_QWORD *)(v9 + 64), a3);
    if ( v11 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        24LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        (unsigned int)v11);
    }
  }
LABEL_15:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return 0LL;
}
