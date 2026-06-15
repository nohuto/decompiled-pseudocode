/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180014540
 * Callers:
 *     AudioServerDestroyStream @ 0x180030B30 (AudioServerDestroyStream.c)
 * Callees:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(CAudioSession *, struct CAudioStream *, char); // rbp
  unsigned int (__fastcall *v8)(CAudioStream *__hidden); // rbp
  __int64 v9; // rcx

  v4 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      52LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 54) && (v6 = *((_QWORD *)this + 28)) != 0 )
  {
    if ( a2 == *(_QWORD *)(v6 + 56) )
    {
      v7 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, char))(**((_QWORD **)this + 21) + 264LL);
      if ( v7 == CAudioSession::RemoveStream )
      {
        CAudioSession::RemoveStream(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 28), 1);
      }
      else
      {
        LOBYTE(v5) = 1;
        v7(*((CAudioSession **)this + 21), *((struct CAudioStream **)this + 28), v5);
      }
      v8 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(**((_QWORD **)this + 28) + 72LL);
      if ( v8 == CAudioStream::ReleaseClientReference )
        CAudioStream::ReleaseClientReference(*((CAudioStream **)this + 28));
      else
        v8(*((CAudioStream **)this + 28));
      *((_QWORD *)this + 28) = 0LL;
    }
    else
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          53LL,
          &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
          a2,
          *(_QWORD *)(v6 + 56));
      }
      v4 = -2147024809;
    }
  }
  else
  {
    v4 = -2004287487;
  }
  *((_DWORD *)this + 54) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      54LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a2,
      v4);
    v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v4 < 0
    && (struct _GUID *)v9 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v9 + 28) & 0x100) != 0
    && *(_BYTE *)(v9 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v9 + 16), 55LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, (unsigned int)v4);
  }
  return (unsigned int)v4;
}
