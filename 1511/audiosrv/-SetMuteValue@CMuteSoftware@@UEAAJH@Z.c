/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x18006CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // eax
  CAudioThreadPool *v8; // r14
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 6) = a2;
  if ( !v6 )
    goto LABEL_12;
  v13 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v13);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 40));
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
LABEL_12:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        (__int64)this);
    }
    v12 = -1;
    v8 = ThreadPool;
    *((_BYTE *)this + 96) = 1;
    v11 = -10000000;
    if ( v8 )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)v8 + 24LL))(
        v8,
        *((_QWORD *)this + 11),
        &v11,
        0LL,
        0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, v4);
  }
  return (unsigned int)v4;
}
