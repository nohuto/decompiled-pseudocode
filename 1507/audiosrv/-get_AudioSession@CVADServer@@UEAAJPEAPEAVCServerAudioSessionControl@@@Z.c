/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180016210
 * Callers:
 *     AudioServerGetAudioSession @ 0x180031970 (AudioServerGetAudioSession.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180072F90 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct IUnknown **a2)
{
  unsigned int v2; // esi
  struct IUnknown **v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r12
  __int64 v8; // r8
  struct IUnknown *v9; // rcx
  __int64 v10; // rcx
  struct IUnknown *v11; // rdi

  v2 = 0;
  if ( !*((_DWORD *)this + 54) )
    return 2290679809LL;
  v6 = (struct IUnknown **)((char *)this + 160);
  if ( *((_QWORD *)this + 20) )
    goto LABEL_11;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( !*v6 )
  {
    LOBYTE(v8) = 1;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, struct IUnknown **))(**((_QWORD **)this + 19)
                                                                                        + 104LL))(
           *((_QWORD *)this + 19),
           *((unsigned int *)this + 16),
           v8,
           *((_QWORD *)this + 21),
           v6);
  }
  LeaveCriticalSection(v7);
  if ( !v2 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        *v6);
    }
LABEL_11:
    if ( *v6 )
      v9 = *v6 + 1;
    else
      v9 = 0LL;
    if ( HasTooManyReferences(v9) )
    {
      v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      v2 = -2147024882;
LABEL_23:
      if ( (struct _GUID *)v10 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v10 + 28) & 0x100) != 0
        && *(_BYTE *)(v10 + 25) >= 2u )
      {
        WPP_SF_D(*(_QWORD *)(v10 + 16), 34LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, v2);
      }
      return v2;
    }
    *a2 = *v6;
    v11 = *v6;
    ((void (__fastcall *)(struct IUnknown *))(*v6)->lpVtbl->AddRef)(*v6);
    _InterlockedIncrement((volatile signed __int32 *)&v11[3]);
    goto LABEL_21;
  }
  v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      33LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v2);
LABEL_21:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_23;
  return v2;
}
