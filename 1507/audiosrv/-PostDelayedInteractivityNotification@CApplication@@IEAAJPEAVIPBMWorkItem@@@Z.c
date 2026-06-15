/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x1800A3608
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180003558 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(CApplication *this, struct IPBMWorkItem *a2)
{
  signed int v4; // esi
  __int64 v5; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+74h] [rbp+Ch]

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)this + 10);
  CApplication::CleanupDelayedInteractivityNotification(this);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      *((const wchar_t **)this + 2));
  }
  if ( *((_QWORD *)this + 55)
    || (v5 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (*((_QWORD *)this + 55) = v5) != 0LL) )
  {
    *((_QWORD *)this + 56) = a2;
    v10 = -300000000;
    v11 = -1;
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 55),
      &v10,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Au,
      (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      v4);
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return (unsigned int)v4;
}
